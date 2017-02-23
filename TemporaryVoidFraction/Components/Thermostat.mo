within TemporaryVoidFraction.Components;
block Thermostat
  "ThermoStat deppending on Upper and Lower Temperature. Also turns the Evaporator's FAN off"
  import Thermostat;

  Modelica.Blocks.Interfaces.RealInput u
    annotation (Placement(transformation(extent={{-182,-28},{-126,28}})));
  Modelica.Blocks.Interfaces.RealOutput y1
    annotation (Placement(transformation(extent={{84,2},{144,62}}),
        iconTransformation(extent={{114,32},{144,62}})));

  parameter Real T_hottest=-24
    "The Hottest Temperature. When the Compressor should come ON.";
  parameter Real T_coldest=-28
    "The Coldest Temperature. When the Compressor should come OFF.";

  Modelica.Blocks.Logical.LogicalSwitch logicalSwitch
    annotation (Placement(transformation(extent={{2,-46},{22,-26}})));
  Modelica.Blocks.Logical.Switch switch1
    annotation (Placement(transformation(extent={{62,36},{82,56}})));
  Modelica.Blocks.Sources.Constant const(k=0) annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={50,84})));
  Modelica.Blocks.Sources.Constant const1(k=n) annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={60,12})));
  TemporaryVoidFraction.Components.Switch booleano
    annotation (Placement(transformation(extent={{-38,-40},{-18,-20}})));
  Modelica.Blocks.Logical.LessEqualThreshold lessEqualThreshold(threshold=
        273.15 + T_coldest)
    annotation (Placement(transformation(extent={{-88,-78},{-68,-58}})));
  parameter Real n=50 "Speed Compressor Value in RPS. [Hz]";
  Modelica.Blocks.Logical.LessEqualThreshold lessEqualThreshold1(threshold=
        273.15 + T_hottest)
    annotation (Placement(transformation(extent={{-88,66},{-68,86}})));
  Modelica.Blocks.Logical.Switch switch2
    annotation (Placement(transformation(extent={{68,-64},{88,-44}})));
  Modelica.Blocks.Interfaces.RealOutput y2
    annotation (Placement(transformation(extent={{78,-104},{142,-40}}),
        iconTransformation(extent={{114,-68},{142,-40}})));
  Modelica.Blocks.Sources.Constant const2(k=minimum_fan_speed)
                                                    annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=270,
        origin={52,-20})));
  Modelica.Blocks.Sources.Constant const3(k=fan_speed) annotation (Placement(
        transformation(
        extent={{-10,-10},{10,10}},
        rotation=90,
        origin={54,-88})));
  parameter Real fan_speed=0.1
    "Fan Mass Rate when the Compressor in on. [kg/s]";
  parameter Real minimum_fan_speed=0.0001 "Constant output value";
equation
  connect(switch1.y, y1)
                        annotation (Line(
      points={{83,46},{98.5,46},{98.5,32},{114,32}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(logicalSwitch.y, switch1.u2) annotation (Line(
      points={{23,-36},{32,-36},{32,46},{60,46}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(const.y, switch1.u1) annotation (Line(
      points={{50,73},{50,54},{60,54}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(const1.y, switch1.u3) annotation (Line(
      points={{60,23},{60,38}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(booleano.y, logicalSwitch.u2) annotation (Line(
      points={{-17,-30},{-10,-30},{-10,-36},{0,-36}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(u, lessEqualThreshold.u) annotation (Line(
      points={{-154,3.55271e-015},{-120,3.55271e-015},{-120,-68},{-90,-68}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(lessEqualThreshold.y, logicalSwitch.u3) annotation (Line(
      points={{-67,-68},{-28,-68},{-28,-44},{0,-44}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(u, lessEqualThreshold1.u) annotation (Line(
      points={{-154,3.55271e-015},{-118,3.55271e-015},{-118,76},{-90,76}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(lessEqualThreshold.y, booleano.u1) annotation (Line(
      points={{-67,-68},{-54,-68},{-54,-34},{-40,-34}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(lessEqualThreshold1.y, booleano.u2) annotation (Line(
      points={{-67,76},{-54,76},{-54,-26},{-40,-26}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(lessEqualThreshold1.y, logicalSwitch.u1) annotation (Line(
      points={{-67,76},{-4,76},{-4,-28},{0,-28}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(logicalSwitch.y, switch2.u2) annotation (Line(
      points={{23,-36},{44,-36},{44,-54},{66,-54}},
      color={255,0,255},
      smooth=Smooth.None));
  connect(const2.y, switch2.u1) annotation (Line(
      points={{52,-31},{52,-46},{66,-46}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(const3.y, switch2.u3) annotation (Line(
      points={{54,-77},{54,-62},{66,-62}},
      color={0,0,127},
      smooth=Smooth.None));
  connect(switch2.y, y2) annotation (Line(
      points={{89,-54},{99.5,-54},{99.5,-72},{110,-72}},
      color={0,0,127},
      smooth=Smooth.None));
  annotation (Diagram(graphics), Icon(graphics={
        Ellipse(
          extent={{-114,94},{104,-100}},
          fillColor={175,175,175},
          fillPattern=FillPattern.Solid,
          pattern=LinePattern.None),
        Line(
          points={{-126,0},{-114,0}},
          smooth=Smooth.None,
          color={0,0,0}),
        Line(
          points={{104,0},{108,0},{108,46},{114,46}},
          smooth=Smooth.None,
          color={0,0,0}),
        Line(
          points={{108,0},{108,-54},{114,-54}},
          smooth=Smooth.None,
          color={0,0,0}),
        Text(
          extent={{-94,14},{76,-14}},
          lineColor={0,0,0},
          lineThickness=0.5,
          fillColor={0,0,0},
          fillPattern=FillPattern.Solid,
          textString="ThermoStat"),
        Text(
          extent={{-302,82},{-146,56}},
          lineColor={0,0,0},
          fillColor={0,0,0},
          fillPattern=FillPattern.Solid,
          textString="Sensor Input"),
        Text(
          extent={{40,118},{332,86}},
          lineColor={0,0,0},
          fillColor={0,0,0},
          fillPattern=FillPattern.Solid,
          textString="Compressor Speed"),
        Text(
          extent={{66,-84},{316,-128}},
          lineColor={0,0,0},
          fillColor={0,0,0},
          fillPattern=FillPattern.Solid,
          textString="Fan Speed")}));
end Thermostat;
