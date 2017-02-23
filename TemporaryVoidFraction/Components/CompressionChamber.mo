within TemporaryVoidFraction.Components;
model CompressionChamber
  "Semi-empirical Model for the Compression Process"
 /****************************************** FLUID ******************************************/
replaceable package Medium =
      ThermoCycle.Media.DummyFluid                                                                      constrainedby
    Modelica.Media.Interfaces.PartialMedium "Medium model" annotation (choicesAllMatching = true);
 /*Ports */
public
Modelica.Mechanics.Rotational.Interfaces.Flange_b flange_elc "Flange of shaft"
                      annotation (Placement(transformation(extent={{64,-8},{
            100,28}}, rotation=0), iconTransformation(extent={{68,-12},{92,12}})));
  ThermoCycle.Interfaces.Fluid.FlangeA InFlow(redeclare package Medium = Medium)
    annotation (Placement(transformation(extent={{-78,68},{-58,88}}),
        iconTransformation(extent={{-78,68},{-58,88}})));
  ThermoCycle.Interfaces.Fluid.FlangeB OutFlow(redeclare package Medium =
        Medium) annotation (Placement(transformation(extent={{76,-50},{96,-30}}),
        iconTransformation(extent={{76,-50},{96,-30}})));
/****************************************** SELECT TYPE OF EXPANDER ******************************************/

  /****************************************** PARAMETERES ******************************************/

  parameter Modelica.SIunits.Volume V_s=5.96e-6 "Swept volume";
  parameter Real epsilon_t_start=0.82 "Isentropic Efficiency"
    annotation (Dialog(tab="Initialization"));
  parameter Real epsilon_v_start=0.70 "Volumetric Efficiency"
    annotation (Dialog(tab="Initialization"));
 parameter Real epsilon_c_start=0.47 "Volumetric Efficiency"
    annotation (Dialog(tab="Initialization"));
  parameter Modelica.SIunits.Pressure p_su_start=0.72e5
    "Inlet pressure start value" annotation (Dialog(tab="Initialization"));
  parameter Modelica.SIunits.Pressure p_ex_start=6.37e5
    "Outlet pressure start value" annotation (Dialog(tab="Initialization"));
  parameter Modelica.SIunits.Temperature T_su_start=293.15
    "Inlet temperature start value" annotation (Dialog(tab="Initialization"));
  parameter Medium.SpecificEnthalpy h_su_start = Medium.specificEnthalpy_pT(p_su_start, T_su_start)
    "Inlet enthalpy start value"                                                                                                annotation (Dialog(tab="Initialization"));
  parameter Medium.SpecificEnthalpy h_ex_start= Medium.specificEnthalpy_pT(p_ex_start, T_su_start)
    "Outlet enthalpy start value"                                                                                                annotation (Dialog(tab="Initialization"));
  //parameter Boolean constinit=false
  //  "if true, sets the efficiencies to a constant value at the beginning of the simulation"
 //   annotation (Dialog(group="Initialization options",tab="Initialization"));
 // parameter Modelica.SIunits.Time t_init=10
 //   "if constinit is true, time during which the efficiencies are set to their start values"
//    annotation (Dialog(group="Initialization options",tab="Initialization", enable=constinit));

  /****************************************** VARIABLES ******************************************/
  Real epsilon_v(start = epsilon_v_start);
  Real epsilon_t_unfiltered(start = epsilon_t_start,min=0.05);
  Real epsilon_t(start = epsilon_t_start,min=0.05);
  Real epsilon_c(start = epsilon_c_start);
  Medium.ThermodynamicState vaporIn
    "Thermodynamic state of the fluid at the inlet";
  Medium.ThermodynamicState vaporOut_s
    "Thermodynamic state of the fluid if the outlet was isentropic";
  Medium.ThermodynamicState vaporOut
    "Thermodynamic state of the fluid at the outlet";
  Real rpm;
  Modelica.SIunits.Frequency N_rot;
  Modelica.SIunits.Power W_ind;
  Modelica.SIunits.Power Q_cc;
  Modelica.SIunits.VolumeFlowRate V_dot_su;
  Modelica.SIunits.MassFlowRate M_dot;
  Medium.Density rho_su(start=Medium.density_pT(p_su_start,T_su_start));
  Medium.SpecificEntropy s_su;
  Medium.SpecificEnthalpy h_su(start=h_su_start);
  Medium.SpecificEnthalpy h_ex(start=h_ex_start);
  Medium.AbsolutePressure p_su(start=p_su_start);
  Medium.AbsolutePressure p_ex(start=p_ex_start);
  Medium.SpecificEnthalpy h_ex_s;
  Modelica.Blocks.Interfaces.RealOutput Q_cc_out annotation (Placement(
        transformation(
        extent={{16,-16},{-16,16}},
        rotation=0,
        origin={-78,-44}), iconTransformation(
        extent={{10,-10},{-10,10}},
        rotation=0,
        origin={-70,-42})));
equation
  /* Fluid Properties */
  vaporIn = Medium.setState_ph(p_su,h_su);
  rho_su = Medium.density(vaporIn);
  s_su = Medium.specificEntropy(vaporIn);
  vaporOut_s = Medium.setState_ps(p_ex,s_su);
  vaporOut = Medium.setState_ph(p_ex,h_ex);
  h_ex_s = Medium.specificEnthalpy(vaporOut_s);
  /*equations */
  rpm = N_rot*60;
  M_dot*h_su + W_ind = M_dot*h_ex + Q_cc;
  V_dot_su = M_dot/rho_su;
  Q_cc_out = Q_cc;
  //epsilon_v = epsilon_v_start;
  epsilon_v = 0.326903002884672 + 1.61886686525767e-5*p_su - 1.72749357756183e-11*p_su*p_ex;
  //epsilon_t = epsilon_t_start;
  epsilon_t_unfiltered = 7.42351800216893e-6*p_ex + 4.18531569356911e-6*p_su - 1.25754881862103 - 7.27687654228177e-12*pow(p_ex,2);
  epsilon_t = smooth(1, if noEvent(epsilon_t_unfiltered>0.20 and epsilon_t_unfiltered<1) then epsilon_t_unfiltered else 0.40);
  //epsilon_c = epsilon_c_start;
  epsilon_c = 0.868978385392756 + 1.327162295325e-11*p_su*p_ex - 1.50146920689414e-7*p_ex - 1.26322791606746e-5*p_su;
  //The following calculations depend on the on/off condition
  //if noEvent(N_rot > 0.05) then
  V_dot_su = epsilon_v*V_s*N_rot;
  W_ind = M_dot*(h_ex_s - h_su)/epsilon_t "Indicated Power";
  Q_cc = epsilon_c*W_ind;
//   else
//   V_dot_su = 0;
//   W_ind = 0 "Indicated Power";
//   Q_cc = 0;
//   end if;




   //BOUNDARY CONDITIONS //
   /* Enthalpies */
  h_su = if noEvent(InFlow.m_flow <= 0) then h_ex else inStream(InFlow.h_outflow);
  h_su = InFlow.h_outflow;
  OutFlow.h_outflow = if noEvent(OutFlow.m_flow <= 0) then h_ex else inStream(
    OutFlow.h_outflow);

   /*Mass flows */
   M_dot = InFlow.m_flow;
   OutFlow.m_flow = -M_dot;
   /*pressures */
  //flange.p = vapor_su.p;
  InFlow.p = p_su;
  OutFlow.p = p_ex;
// Mechanical port:
  der(flange_elc.phi) = 2*N_rot*Modelica.Constants.pi;
  flange_elc.tau = W_ind/(2*N_rot*Modelica.Constants.pi)
  annotation (Diagram(graphics));

  annotation (Diagram(coordinateSystem(preserveAspectRatio=true,  extent={{-100,
            -100},{100,100}})),           Icon(coordinateSystem(
          preserveAspectRatio=false,extent={{-120,-120},{120,120}}), graphics={
          Text(
          extent={{-62,-56},{80,-84}},
          lineColor={0,0,0},
          fillPattern=FillPattern.Solid,
          fillColor={0,0,0},
          textString="Compressor"),
                              Polygon(
          points={{-60,80},{-60,-60},{80,-40},{80,40},{-60,80}},
          lineColor={0,0,255},
          smooth=Smooth.None,
          fillColor={0,0,255},
          fillPattern=FillPattern.Solid)}),Documentation(info="<html>
<p>The <i>Compressor</i> model represents the expansion of a fluid in a volumetric machine. It is a lumped model based on performance curves. It is characterized by two flow connector for the fluid inlet and outlet and by a mechanical connector for the connection with the generator.</p>
<p>The assumptions for this model are:</p>
<p><ul>
<li>No dynamics ( it is considered negligible when compared to the one characterizing the heat exchanger).</li>
<li>No thermal energy losses to the environment</li>
<li>Isentropic efficiency based on empirical performance curve</li>
<li>Filling factor based on empirical performance curve</li>
</ul></p>
<p><h4>Modelling options</h4></p>
<p>In this model, the user has the choice of providing constant isentropic and volumetric efficiencies, or providing performance curves for these two variables.</p>
</html>"));
end CompressionChamber;
