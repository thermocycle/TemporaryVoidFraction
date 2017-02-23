within TemporaryVoidFraction.Components;
block Switch
  "OUTPUT is FALSE untill the INPUT u1 (lower) becomes TRUE. So, OUTPUT will be TRUE untill the INPUT u2 (upper) becomes FALSE. So on"

  Modelica.Blocks.Interfaces.BooleanInput u1
    annotation (Placement(transformation(extent={{-140,-60},{-100,-20}})));
  Modelica.Blocks.Interfaces.BooleanOutput y
    annotation (Placement(transformation(extent={{100,-10},{120,10}})));

  Modelica.Blocks.Interfaces.BooleanInput u2
    annotation (Placement(transformation(extent={{-140,20},{-100,60}})));

algorithm
when u1==true then
  y:=true;
end when;

when u2==false then
  y:=false;
end when;

equation
  connect(y, y) annotation (Line(
      points={{110,0},{110,0}},
      color={255,0,255},
      smooth=Smooth.None));
  annotation (                   Icon(graphics={
        Rectangle(
          extent={{-100,60},{98,-60}},
          lineColor={255,0,255},
          fillColor={215,215,215},
          fillPattern=FillPattern.Solid),
        Line(
          points={{98,0},{100,0}},
          color={255,0,255},
          smooth=Smooth.None),
        Text(
          extent={{-76,32},{72,-20}},
          lineColor={255,0,255},
          fillColor={215,215,215},
          fillPattern=FillPattern.Solid,
          textString="Switch")}));
end Switch;
