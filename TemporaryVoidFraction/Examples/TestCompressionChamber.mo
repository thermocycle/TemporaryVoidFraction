within TemporaryVoidFraction.Examples;
model TestCompressionChamber
  ThermoCycle.Components.Units.ExpansionAndCompressionMachines.ElectricDrive electricDrive(fstart=50, Np=1)
    annotation (Placement(transformation(extent={{-46,32},{-80,66}})));
  Modelica.Blocks.Sources.Constant const(k=50)
    annotation (Placement(transformation(extent={{-86,74},{-72,88}})));
  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP Source(
    redeclare package Medium = Media.R600a_CP_Smooth,
    h=632509,
    p0=72000)
    annotation (Placement(transformation(extent={{-60,-12},{-80,8}})));
  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP Sink(
    redeclare package Medium = Media.R600a_CP_Smooth,
    h=700000,
    p0=637000)
    annotation (Placement(transformation(extent={{34,-58},{54,-38}})));
  Components.CompressionChamber compressionChamber(redeclare package Medium =
        Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-26,-20},{-2,4}})));
equation
  connect(const.y, electricDrive.f) annotation (Line(points={{-71.3,81},{-71.3,
          72.5},{-63.68,72.5},{-63.68,64.98}}, color={0,0,127}));
  connect(Source.flangeB, compressionChamber.InFlow) annotation (Line(points={{
          -61.6,-2},{-42,-2},{-42,-0.2},{-20.8,-0.2}}, color={0,0,255}));
  connect(electricDrive.shaft, compressionChamber.flange_elc) annotation (Line(
        points={{-48.38,49},{-48.38,20.5},{-6,20.5},{-6,-8}}, color={0,0,0}));
  connect(compressionChamber.OutFlow, Sink.flangeB) annotation (Line(points={{
          -5.4,-12},{16,-12},{16,-48},{35.6,-48}}, color={0,0,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end TestCompressionChamber;
