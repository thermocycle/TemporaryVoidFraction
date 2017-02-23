within TemporaryVoidFraction.Components;
model HermeticRecipCompressor
  "Semi-empirical model of hermetic scroll compressor"
  import ThermoCycle;

parameter Modelica.SIunits.MassFlowRate Mdot_nom=0.000277
    "Nominal Mass Flow rate";
parameter Modelica.SIunits.ThermalConductance AU_amb=1.6
    "Heat transfer conductance for the ambient heat losses";
parameter Modelica.SIunits.Volume Vs=5.96e-6 "Swept volume";
parameter Modelica.SIunits.Volume V_suc=0.002000
    "Volume of the low pressure environment inside the compressor";
parameter Modelica.SIunits.Area A_suc=1
     "Heat transfer area of the low pressure environment inside the compressor";
parameter Modelica.SIunits.CoefficientOfHeatTransfer U_suc=0.55
    "Heat transfer coefficient for the inlet heat exchange";
parameter Modelica.SIunits.Volume V_dis=0.0000329
    "Volume of the high pressure environment inside the compressor";
parameter Modelica.SIunits.Area A_dis=1
     "Heat transfer area of the high pressure environment inside the compressor";
parameter Modelica.SIunits.CoefficientOfHeatTransfer U_dis=0.76
    "Heat transfer coefficient for the outlet heat exchange";
// parameter Modelica.SIunits.Area A_leak=4.5e-7
//     "Leakage equivalent orifice area";
parameter Modelica.SIunits.Power W_dot_loss_mec_fix=2.0
    "Fixed mechanical losses";
// parameter Real eta_ele=0.90 "Electrical efficiency";
// parameter Modelica.SIunits.Length d_ex=0.0075
//     "Exhaust pressure drop equivalent orifice diameter";
// parameter Modelica.SIunits.Length d_su=0.1
//     "Supply pressure drop equivalent orifice diameter";
parameter Modelica.SIunits.Mass m=10 "Total mass of the compressor";
parameter Modelica.SIunits.SpecificHeatCapacity c=466
    "Specific heat capacity of the metal";
parameter Modelica.SIunits.Inertia J=0.02 "Moment of inertia of the rotor";

parameter Modelica.SIunits.Temperature T_su_start = 273.15 + 20
    "Fluid temperature start value, inlet"     annotation (Dialog(tab="Initialization"));
parameter Modelica.SIunits.Temperature T_ex_start = 273.15 + 100
    "Fluid temperature start value, inlet"     annotation (Dialog(tab="Initialization"));
parameter Modelica.SIunits.AbsolutePressure p_su_start = 0.59e5
    "Fluid pressure start value, inlet"     annotation (Dialog(tab="Initialization"));
parameter Modelica.SIunits.AbsolutePressure p_ex_start = 6.0e5
    "Fluid pressure start value, outlet"     annotation (Dialog(tab="Initialization"));

  ThermoCycle.Components.Units.ExpansionAndCompressionMachines.ScrollCompressor.Isothermal_wall
                  Isothermal_wall(C=m*c, AU_amb=AU_amb)
    annotation (Placement(transformation(extent={{-100,-100},{110,-42}})));
  ThermoCycle.Components.Units.ExpansionAndCompressionMachines.ElectricDrive electricDrive(fstart=50, Np=1)
    annotation (Placement(transformation(extent={{-106,36},{-140,70}})));
  Modelica.Mechanics.Rotational.Components.Inertia inertia(
    phi(start=0),
    w(start=300),
    a(start=0),
    J=J)
    annotation (Placement(transformation(extent={{-62,40},{-88,66}})));
  ThermoCycle.Interfaces.Fluid.FlangeA su(redeclare package Medium =
        Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-168,-8},{-156,4}}),
        iconTransformation(extent={{-74,-26},{-66,-18}})));
  ThermoCycle.Interfaces.Fluid.FlangeB ex(redeclare package Medium =
        Media.R600a_CP_Smooth)              annotation (Placement(transformation(
          extent={{154,-44},{170,-28}}),
                                     iconTransformation(extent={{30,4},{38,12}})));
  Modelica.Blocks.Interfaces.RealInput frequency annotation (Placement(
        transformation(extent={{-172,64},{-132,104}}), iconTransformation(
          extent={{62,-42},{50,-30}})));
  Modelica.Thermal.HeatTransfer.Interfaces.HeatPort_a Ambient
    annotation (Placement(transformation(extent={{-4,-104},{12,-88}}),
        iconTransformation(extent={{-4,-90},{4,-82}})));
  ThermoCycle.Components.FluidFlow.Pipes.Cell1DimInc SuctionPlenum(
    Ai=A_suc,
    Mdotnom=Mdot_nom,
    redeclare package Medium = Media.R600a_CP_Smooth,
    Vi=V_suc,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.centr_diff_AllowFlowReversal,
    hstart=600000,
    Unom=U_suc,
    pstart=p_su_start,
    redeclare model HeatTransfer =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant)
    annotation (Placement(transformation(extent={{-94,8},{-74,-12}})));
  ThermoCycle.Interfaces.HeatTransfer.HeatPortConverter heatPortConverter
    annotation (Placement(transformation(extent={{-34,-58},{-44,-42}})));
  ThermoCycle.Components.FluidFlow.Pipes.Cell1DimInc DischargePlenum(
    redeclare package Medium = Media.R600a_CP_Smooth,
    Vi=V_dis,
    Ai=A_dis,
    Mdotnom=Mdot_nom,
    hstart=700000,
    Unom=U_dis,
    pstart=p_ex_start,
    redeclare model HeatTransfer =
        ThermoCycle.Components.HeatFlow.HeatTransfer.MassFlowDependence,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.centr_diff_AllowFlowReversal)
    annotation (Placement(transformation(extent={{54,10},{74,-10}})));
  ThermoCycle.Interfaces.HeatTransfer.HeatPortConverter heatPortConverter1
    annotation (Placement(transformation(extent={{30,-58},{40,-42}})));
  Electromechanical_losses electromechanical_losses(
    W_dot_loss_mec_fix = W_dot_loss_mec_fix)
    annotation (Placement(transformation(extent={{-12,44},{-32,64}})));
  CompressionChamber compressionChamber(redeclare package Medium =
        Media.R600a_CP_Smooth,
    h_ex_start=700000,
    V_s = Vs,
    T_su_start=318.15)
    annotation (Placement(transformation(extent={{-4,-10},{20,14}})));
  Modelica.Blocks.Math.Add add annotation (Placement(transformation(
        extent={{-7,-7},{7,7}},
        rotation=-90,
        origin={-27,-27})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTp SuctionChamber(redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-62,-2},{-46,12}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTp DischargeChamber(redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{28,0},{44,14}})));
equation

  connect(electricDrive.shaft, inertia.flange_b) annotation (Line(
      points={{-108.38,53},{-88,53}},
      color={0,0,0},
      smooth=Smooth.None));
  connect(frequency, electricDrive.f) annotation (Line(
      points={{-152,84},{-123.68,84},{-123.68,68.98}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(Ambient,Isothermal_wall. Ambient) annotation (Line(
      points={{4,-96},{4,-77.67},{3.95,-77.67}},
      color={191,0,0},
      smooth=Smooth.None));
  connect(heatPortConverter.heatPort,Isothermal_wall. Compresseur) annotation (
      Line(points={{-34,-50},{-18,-50},{-18,-64.33},{3.95,-64.33}}, color={191,
          0,0}));
  connect(heatPortConverter1.heatPort,Isothermal_wall. Compresseur) annotation (
     Line(points={{30,-50},{20,-50},{20,-64.33},{3.95,-64.33}}, color={191,0,0}));
  connect(SuctionPlenum.InFlow, su)
    annotation (Line(points={{-94,-2},{-128,-2},{-162,-2}}, color={0,0,255}));
  connect(DischargePlenum.OutFlow, ex) annotation (Line(points={{74,-0.1},{116,-0.1},
          {116,-36},{162,-36}}, color={0,0,255}));
  connect(inertia.flange_a, electromechanical_losses.flange_B) annotation (Line(
        points={{-62,53},{-48,53},{-48,54},{-32,54}}, color={0,0,0}));
  connect(electromechanical_losses.flange_A, compressionChamber.flange_elc)
    annotation (Line(points={{-11.8,54},{24,54},{24,2},{16,2}}, color={0,0,0}));
  connect(compressionChamber.Q_cc_out, add.u1) annotation (Line(points={{1,-2.2},
          {-10.5,-2.2},{-10.5,-18.6},{-22.8,-18.6}}, color={0,0,127}));
  connect(electromechanical_losses.Wdot_loss, add.u2) annotation (Line(points={
          {-30.2,49},{-30.2,15.5},{-31.2,15.5},{-31.2,-18.6}}, color={0,0,127}));
  connect(add.y,Isothermal_wall. W_dot_loss) annotation (Line(points={{-27,
          -34.7},{-27,-38},{-58,-38},{-58,-65.78}}, color={0,0,127}));
  connect(SuctionPlenum.OutFlow, SuctionChamber.InFlow) annotation (Line(points=
         {{-74,-2.1},{-64,-2.1},{-64,-1.58},{-54,-1.58}}, color={0,0,255}));
  connect(SuctionChamber.InFlow, compressionChamber.InFlow) annotation (Line(
        points={{-54,-1.58},{-28,-1.58},{-28,9.8},{1.2,9.8}}, color={0,0,255}));
  connect(compressionChamber.OutFlow, DischargeChamber.InFlow) annotation (Line(
        points={{16.6,-2},{26,-2},{26,0.42},{36,0.42}}, color={0,0,255}));
  connect(DischargeChamber.InFlow, DischargePlenum.InFlow) annotation (Line(
        points={{36,0.42},{44,0.42},{44,0},{54,0}}, color={0,0,255}));
  connect(SuctionPlenum.Wall_int, heatPortConverter.thermalPortL) annotation (
      Line(points={{-84,-7},{-84,-48},{-84,-50},{-44,-50}},
        color={255,0,0}));
  connect(heatPortConverter1.thermalPortL, DischargePlenum.Wall_int)
    annotation (Line(points={{40,-50},{64,-50},{64,-5}},         color={255,0,0}));
   annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-160,
            -100},{160,100}})),                Icon(coordinateSystem(extent={{-160,
            -100},{160,100}}, preserveAspectRatio=false), graphics={
        Ellipse(
          extent={{-64,18},{56,-82}},
          lineColor={0,0,0},
          lineThickness=0.5,
          fillColor={95,95,95},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-76,-16},{-60,-30}},
          lineColor={0,0,0},
          lineThickness=0.5,
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{26,14},{42,0}},
          lineColor={0,0,0},
          lineThickness=0.5,
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{38,-20},{60,-50}},
          lineColor={0,0,0},
          lineThickness=0.5,
          fillColor={0,0,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-66,96},{68,74}},
          lineColor={0,0,0},
          lineThickness=0.5,
          fillColor={0,0,0},
          fillPattern=FillPattern.Solid,
          textString="%name")}),
    experiment(StopTime=50),
    __Dymola_experimentSetupOutput,
    Documentation(info="<html>
<p><h4><font color=\"#008000\">Short Description :</font></h4></p>
<p>This model describes a hermetic scroll compressor. The model involves a limited number of parameters physically meaningful. The model accounts for the supply heating-up and exhaust cooling down of the gas, an internal leakage, the internal compression ratio and the electromechanical losses. The model is the one proposed by Winandy et al. (2002). Information used to identify the parameters is extracted from Copeland&apos;s catalogue (ZR72KC-TFD)</p>
<p><br/><h4>Nomenclature :</h4></p>
<p>A                                        Area, m^2</p>
<p>AU                                        Global heat transfer coefficient, W/K</p>
<p>c_p                                        Specific heat, J/kg-K</p>
<p>corr                                        Correction factor for the swept volume, -</p>
<p>d                                        Diameter, m</p>
<p>h                                        Specific enthalpy, J/kg</p>
<p>M_dot                                        Mass flow rate        , kg/s</p>
<p>NTU                                        Number of transfer units,-</p>
<p>N_rot                                        Rotational speed, rpm</p>
<p>p                                        Pressure, Pa</p>
<p>Q_dot                                        Thermal power, W</p>
<p>R                                        Thermal resistance, K/W</p>
<p>r_p                                        Pressure ratio,-</p>
<p>r_v_in                                        Internal built-in volume ratio,-</p>
<p>s                                        Specific entropy, J/kg-K</p>
<p>t                                        Temperature, C</p>
<p>u                                        Specific internal energy, J/kg</p>
<p>v                                        Specific volume, m^3/kg</p>
<p>V_dot_s                                        Swept volume, m^3/s</p>
<p>W_dot                                        Electrical power, W</p>
<p>x                                        quality,-</p>
<p><br/><h4>Greek symbols</h4></p>
<p>alpha                        Proportionality factor for electro-mechanical losses proportional to the internal power</p>
<p>DELTAt                        Temperature difference, K</p>
<p>epsilon                        Efficiency,-</p>
<p>gamma                        Isentropic coefficient,-</p>
<p>m3h                        Cubic meters per hour</p>
<p>rho                        Density, kg m-3</p>
<p><br/><h4>Subscripts</h4></p>
<p>amb                                Ambient</p>
<p>calc                                Calculated</p>
<p>cd                                Condenser</p>
<p>cp                                Compressor</p>
<p>crit                                Critic</p>
<p>ev                                Evaporator</p>
<p>ex                                Exhaust</p>
<p>ex2                                Exhaust before cooling exhaust down</p>
<p>ex1                                Exhaust before exhaust pressure drop</p>
<p>n                                Internal</p>
<p>in*                                Corrected internal</p>
<p>leak                                Leakage</p>
<p>loss                                Electro-mechanical losses</p>
<p>loss0                                Constant electro-mechanical losses</p>
<p>man                                Manufacturer (in Figures)</p>
<p>n                                Nominal</p>
<p>oh                                Over-heating</p>
<p>r                                Refrigerant</p>
<p>s                                Isentropic</p>
<p>s                                Swept volume</p>
<p>sat                                Saturation</p>
<p>sc                                Sub-cooling</p>
<p>su                                Supply</p>
<p>su1                                Supply after supply heating-up</p>
<p>su2                                Supply after mixing with internal mixing</p>
<p>thr                                Throat</p>
<p>w                                Water, enveloppe</p>
<p><br/><h4>References :</h4></p>
<p>[1] Winandy, E., C., Saavedra O., J., Lebrun (2002) Experimental analysis and simplified modelling of a hermetic scrol refrigeration compressor. Applied thermal Engineering 22, 107-120.</p>
<p><br/><h4>Disclaimer</h4></p>
<p>the accuracy or reliability of information presented in this model is not guaranteed or warranted in any way. Every use of this model, for commercial purpose or not, incurs liability of the user only. this model is freely distributed and may not be sold or distributed for commercial purpose. the user is asked to cite his sources and the origin of this model.</p>
<p>!Help us improving this model : any feedback comment is very welcome </p>
<p><br/>Date : January 2014</p>
<p>Authors: Sylvain Quoilin</p>
<p>University of Li&egrave;ge</p>
<p>Faculty of Applied Sciences</p>
<p>thermodynamics Laboratory</p>
<p>Campus of Sart-tilman, B49 (P33)</p>
<p>B-4000 LIEGE (BELGIUM)</p>
<p>Contact: squoilin@ulg.ac.be</p>
<p>website : www.labothap.ulg.ac.be</p>
</html>"));
end HermeticRecipCompressor;
