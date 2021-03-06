within TemporaryVoidFraction.Examples;
model test_RecipCompressor "Testing the new recip compressor"
  import ThermoCycle;

// parameter Real r_v_in=2.55 "Built-in volume ratio";
// parameter Modelica.SIunits.Volume Vs=97.7e-6 "Swept volume";
// parameter Modelica.SIunits.ThermalConductance AU_amb=5.382
//     "Heat transfer conductance for the ambient heat losses";
// parameter Modelica.SIunits.ThermalConductance AU_su=18
//     "Heat transfer conductance for the inlet heat exchange";
// parameter Modelica.SIunits.ThermalConductance AU_ex=35
//     "Heat transfer conductance for the outlet heat exchange";
// parameter Modelica.SIunits.Area A_leak=4.5e-7
//     "Leakage equivalent orifice area";
// parameter Modelica.SIunits.Power Wdot_loss_0=242
//     "Constant (electro)mechanical losses";
// parameter Real alpha=0.2 "Proportionality factor for the proportional losses";
// parameter Modelica.SIunits.Length d_ex=0.0075
//     "Exhaust pressure drop equivalent orifice diameter";
// parameter Modelica.SIunits.Length d_su=0.1
//     "Supply pressure drop equivalent orifice diameter";
// parameter Modelica.SIunits.Mass m=20 "Total mass of the compressor";
// parameter Modelica.SIunits.SpecificHeatCapacity c=466
//     "Specific heat capacity of the metal";
// parameter Modelica.SIunits.Inertia J=0.02 "Moment of inertia of the rotor";

  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP Sink(
    redeclare package Medium = Media.R600a_CP_Smooth,
    h=700000,
    p0=603000)
    annotation (Placement(transformation(extent={{30,20},{50,40}})));

  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP Source(
    redeclare package Medium = Media.R600a_CP_Smooth,
    p0=57000,
    h=605773.5231)
    annotation (Placement(transformation(extent={{-108,-30},{-128,-10}})));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature
    prescribedTemperature
    annotation (Placement(transformation(extent={{-74,-76},{-54,-56}})));
  Modelica.Blocks.Sources.Constant const(k=273.15 + 32)
    annotation (Placement(transformation(extent={{-134,-76},{-114,-56}})));
  Modelica.Blocks.Sources.Constant const1(k=50)
    annotation (Placement(transformation(extent={{86,-24},{66,-4}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTp SucLine(redeclare package
      Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-74,-14},{-58,2}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTp DischargeLine(redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{4,4},{20,20}})));
  Components.HermeticRecipCompressor hermeticRecipCompressor
    annotation (Placement(transformation(extent={{-38,-20},{-6,0}})));
equation

  connect(const.y, prescribedTemperature.T) annotation (Line(points={{-113,-66},
          {-94.5,-66},{-76,-66}}, color={0,0,127}));
  connect(Source.flangeB, SucLine.InFlow) annotation (Line(points={{-109.6,-20},
          {-88,-20},{-88,-13.52},{-66,-13.52}}, color={0,0,255}));
  connect(DischargeLine.InFlow, Sink.flangeB) annotation (Line(points={{12,4.48},
          {22,4.48},{22,30},{31.6,30}}, color={0,0,255}));
  connect(SucLine.InFlow, hermeticRecipCompressor.su) annotation (Line(points={
          {-66,-13.52},{-48,-13.52},{-48,-12.2},{-29,-12.2}}, color={0,0,255}));
  connect(hermeticRecipCompressor.frequency, const1.y) annotation (Line(points=
          {{-16.4,-13.6},{24.8,-13.6},{24.8,-14},{65,-14}}, color={0,0,127}));
  connect(prescribedTemperature.port, hermeticRecipCompressor.Ambient)
    annotation (Line(points={{-54,-66},{-38,-66},{-38,-18.6},{-22,-18.6}},
        color={191,0,0}));
  connect(hermeticRecipCompressor.ex, DischargeLine.InFlow) annotation (Line(
        points={{-18.6,-9.2},{-3.3,-9.2},{-3.3,4.48},{12,4.48}}, color={0,0,255}));
   annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-160,
            -100},{160,100}})),                Icon(coordinateSystem(extent={{-160,
            -100},{160,100}}, preserveAspectRatio=false), graphics={
        Ellipse(
          extent={{-60,96},{60,-4}},
          lineColor={0,0,0},
          lineThickness=0.5,
          fillColor={95,95,95},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-60,52},{60,-68}},
          lineColor={0,0,0},
          fillColor={95,95,95},
          fillPattern=FillPattern.Solid,
          lineThickness=0.5),
        Rectangle(
          extent={{-76,6},{-60,-8}},
          lineColor={0,0,0},
          lineThickness=0.5,
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{60,52},{76,38}},
          lineColor={0,0,0},
          lineThickness=0.5,
          fillColor={255,255,0},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{8,14},{42,-28}},
          lineColor={0,0,0},
          lineThickness=0.5,
          fillColor={0,0,0},
          fillPattern=FillPattern.Solid),
        Text(
          extent={{-66,-74},{68,-96}},
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
end test_RecipCompressor;
