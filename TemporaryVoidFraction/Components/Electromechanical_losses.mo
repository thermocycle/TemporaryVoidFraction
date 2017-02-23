within TemporaryVoidFraction.Components;
model Electromechanical_losses
  "Computes the Mechanical losses as a sum of different contributions (constant losses, proportional losses, friction torque)"
  parameter Modelica.SIunits.Power W_dot_loss_mec_fix = 2.0 "Fixed mechanical losses";
//parameter Real eta_ele = 0.90    "Electrical efficiency";
parameter Modelica.SIunits.Torque T_friction= 0
    "Friction torque (Wdot_loss = 2*pi*N_rot*T_friction)";
    Real eta_ele(start=0.85);
    Modelica.SIunits.Power W_dot_loss;
Modelica.SIunits.Power W_dot_loss_friction;
Modelica.SIunits.Power W_dot_loss_ele;
Modelica.SIunits.Power W_dot_ind;
Modelica.SIunits.Power W_dot_mec;
Modelica.SIunits.Power W_dot_ele;
Modelica.SIunits.AngularVelocity omega
    "Angular velocity of the shaft [rad/s] ";

  Modelica.Mechanics.Rotational.Interfaces.Flange_a flange_A      annotation (
      Placement(transformation(extent={{-116,-16},{-84,16}}),
                                                          iconTransformation(
          extent={{-112,-10},{-92,10}})));
  Modelica.Mechanics.Rotational.Interfaces.Flange_b flange_B      annotation (
      Placement(transformation(extent={{84,-16},{116,16}}),
                                                          iconTransformation(
          extent={{90,-10},{110,10}})));
  Modelica.Blocks.Interfaces.RealOutput Wdot_loss  annotation (Placement(transformation(
        extent={{-16,-16},{16,16}},
        rotation=0,
        origin={98,-68}),iconTransformation(
        extent={{-10,-10},{10,10}},
        rotation=0,
        origin={82,-50})));
equation
omega = der(flange_A.phi);

W_dot_ind = omega  * flange_A.tau;
W_dot_ele = -omega  * flange_B.tau;
flange_A.phi = flange_B.phi;

//Motor curve
eta_ele = 0.0000000007*pow(W_dot_mec,5)
          - 0.0000001965*pow(W_dot_mec,4)
          + 0.0000215011*pow(W_dot_mec,3)
          - 0.0012376737*pow(W_dot_mec,2)
          + 0.0379960338*pow(W_dot_mec,1)
          + 0.3622854284;

//W_dot_loss = W_dot_loss_0 + W_dot_propor + W_dot_friction;
W_dot_loss = abs(W_dot_loss_mec_fix) + abs(W_dot_loss_friction) + abs(W_dot_loss_ele);
Wdot_loss = W_dot_loss;

W_dot_mec = abs(W_dot_ind) + abs(W_dot_loss_mec_fix) + abs(W_dot_loss_friction);
//W_dot_propor = alpha* abs(W_dot_A);
W_dot_loss_ele = abs(W_dot_mec*(1/eta_ele - 1));
W_dot_loss_friction = abs(omega*T_friction);

W_dot_ele = W_dot_mec + W_dot_loss_ele;

  annotation (Diagram(coordinateSystem(preserveAspectRatio=false, extent={{-100,
            -100},{100,100}})),           Icon(coordinateSystem(
          preserveAspectRatio=false, extent={{-100,-100},{100,100}}), graphics={
        Rectangle(
          extent={{-102,10},{98,-10}},
          lineColor={0,0,0},
          fillPattern=FillPattern.HorizontalCylinder,
          fillColor={192,192,192}),
        Rectangle(extent={{-62,-10},{58,-60}}, lineColor={0,0,0}),
        Rectangle(
          extent={{-62,-10},{58,-25}},
          lineColor={0,0,0},
          fillColor={192,192,192},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-62,-45},{58,-61}},
          lineColor={0,0,0},
          fillColor={192,192,192},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-52,-18},{48,-50}},
          lineColor={0,0,0},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Polygon(
          points={{58,-60},{58,-70},{73,-70},{73,-80},{-77,-80},{-77,-70},{-62,-70},
              {-62,-60},{58,-60}},
          lineColor={0,0,0},
          fillColor={160,160,164},
          fillPattern=FillPattern.Solid),
        Line(points={{-77,-10},{-77,-70}}, color={0,0,0}),
        Line(points={{73,-10},{73,-70}}, color={0,0,0}),
        Rectangle(extent={{-62,60},{58,10}}, lineColor={0,0,0}),
        Rectangle(
          extent={{-62,60},{58,45}},
          lineColor={0,0,0},
          fillColor={192,192,192},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-62,25},{58,10}},
          lineColor={0,0,0},
          fillColor={192,192,192},
          fillPattern=FillPattern.Solid),
        Rectangle(
          extent={{-52,51},{48,19}},
          lineColor={0,0,0},
          fillColor={255,255,255},
          fillPattern=FillPattern.Solid),
        Line(points={{-77,70},{-77,10}}, color={0,0,0}),
        Polygon(
          points={{58,60},{58,70},{73,70},{73,80},{-77,80},{-77,70},{-62,70},{-62,
              60},{58,60}},
          lineColor={0,0,0},
          fillColor={160,160,164},
          fillPattern=FillPattern.Solid),
        Line(points={{73,70},{73,10}}, color={0,0,0}),
        Text(
          extent={{-152,130},{148,90}},
          textString="%name",
          lineColor={0,0,255})}));
end Electromechanical_losses;
