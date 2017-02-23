within TemporaryVoidFraction.Examples;
model Cell1Dim_YesVoidFraction_Upwind_Stiffing
  parameter Modelica.SIunits.Mass M_total_init=0.035 "total refrigerant mass in cycle";
  Modelica.SIunits.Mass M_total "total refrigerant mass in cycle";

  ThermoCycle.Components.Units.PdropAndValves.Valve valve(
    redeclare package Medium = ThermoCycle.Media.R600a_CP,
    UseNom=false,
    t_init=30,
    constinit=false,
    Xopen=1,
    Mdot_nom=0.000259,
    Afull=1.15e-8,
    p_nom=600000,
    DELTAp_nom=450000) annotation (Placement(transformation(
        extent={{-10,10},{10,-10}},
        rotation=-90,
        origin={-82,-26})));
  Modelica.Blocks.Sources.Ramp Tamb(
    duration=0,
    offset=32 + 273.15,
    startTime=20000,
    height=0) annotation (Placement(transformation(
        extent={{6,-6},{-6,6}},
        rotation=90,
        origin={-6,94})));

  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat CondenserOutlet(redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-74,40},{-62,50}})));

  ThermoCycle.Components.HeatFlow.Walls.MetalWallL CondenserWall(
    c_wall=500,
    Aext=0.429,
    Aint=0.106,
    M_wall=1.48,
    Tstart_wall=323.15)
    annotation (Placement(transformation(extent={{-44,64},{-24,44}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistanceL thermalResistanceL(A=0.429, U=14)
    annotation (Placement(transformation(extent={{-40,58},{-28,68}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T_cell source_T_cell
    annotation (Placement(transformation(extent={{-40,68},{-28,80}})));

  ThermoCycle.Components.HeatFlow.Walls.MetalWallL metalWallL1(
    Aint=0.088,
    Aext=0.620,
    M_wall=0.316,
    c_wall=880,
    Tstart_wall=250.15)
    annotation (Placement(transformation(extent={{-52,-62},{-32,-42}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistanceL thermalResistanceL1(A=0.620, U=12)
    annotation (Placement(transformation(extent={{-48,-58},{-36,-68}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat CondenserInlet(redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-18,40},{-4,50}})));
  ThermoCycle.Components.FluidFlow.Pipes.Cell1DimInc DischargeLine(
    redeclare package Medium = Media.R600a_CP_Smooth,
    Mdotnom=0.00259,
    redeclare model HeatTransfer =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    hstart=6E6,
    Unom=240,
    Vi=0.000110,
    Ai=0.0132,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    pstart=600000)
    annotation (Placement(transformation(extent={{24,30},{4,50}})));

  ThermoCycle.Components.HeatFlow.Walls.MetalWallL DischargeLineWall(
    c_wall=500,
    Aext=0.0188,
    M_wall=0.089,
    Aint=DischargeLine.Ai,
    Tstart_wall=333.15)
    annotation (Placement(transformation(extent={{4,64},{24,44}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistanceL thermalResistanceL2(A=
        DischargeLineWall.Aext, U=20)
    annotation (Placement(transformation(extent={{8,58},{20,68}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T_cell source_T_cell2
    annotation (Placement(transformation(extent={{8,68},{20,80}})));

  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat CompressorOutlet(
      redeclare package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{28,40},{40,50}})));

  ThermoCycle.Components.HeatFlow.Sources.Source_T_cell source_T_cell4
    annotation (Placement(transformation(extent={{22,-28},{34,-16}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat CompressorSuctionLine(
      redeclare package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{38,-22},{54,-8}})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWallL Freezer(
    M_wall=3,
    c_wall=2000,
    Aext=0.620,
    Aint=0.620,
    Tstart_wall=259.15)
    annotation (Placement(transformation(extent={{-52,-82},{-32,-62}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistanceL thermalResistanceL4(A=0.620, U=1.8)
    annotation (Placement(transformation(extent={{-48,-78},{-36,-88}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T_cell source_T_cell1
    annotation (Placement(transformation(extent={{-48,-86},{-36,-98}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat EvaporatorOutlet(
                                                                     redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-22,-38},{-10,-28}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat EvaporatorInlet(redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-66,-38},{-54,-28}})));

  ThermoCycle.Components.FluidFlow.Pipes.Cell1DimInc SLHeatExchanger_Capilar(
    redeclare package Medium = Media.R600a_CP_Smooth,
    Mdotnom=0.00259,
    Unom=10000,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    redeclare model HeatTransfer =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    Vi=0.000000841,
    Ai=1,
    pstart=59000) annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=-90,
        origin={-82,10})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat ValveInlet(redeclare
      package Medium = Media.R600a_CP_Smooth) annotation (Placement(
        transformation(
        extent={{-6,5},{6,-5}},
        rotation=90,
        origin={-78,-5})));
  ThermoCycle.Components.FluidFlow.Pipes.Cell1DimInc SLHeatExchanger_SuctionLine(
    redeclare package Medium = Media.R600a_CP_Smooth,
    Mdotnom=0.00259,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    redeclare model HeatTransfer =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    hstart=5e5,
    Unom=200,
    Vi=0.0000236,
    Ai=0.0143,
    pstart=59000) annotation (Placement(transformation(
        extent={{-8,-8},{8,8}},
        rotation=90,
        origin={-50,10})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat SLHX_SucLineInlet(
                                                                     redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-33,0},{-21,10}})));
  ThermoCycle.Components.FluidFlow.Pipes.Cell1DimInc SuctionLine(
    redeclare package Medium = Media.R600a_CP_Smooth,
    Mdotnom=0.00259,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    redeclare model HeatTransfer =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    hstart=5e5,
    Unom=200,
    Vi=0.0000236,
    Ai=0.0143,
    pstart=59000)
    annotation (Placement(transformation(extent={{20,-44},{36,-28}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat SLHX_SucLineOutlet(
                                                                     redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{5,-36},{17,-26}})));
  Components.HermeticRecipCompressor hermeticRecipCompressor(U_dis=0.76)
    annotation (Placement(transformation(extent={{60,-6},{92,14}})));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature
    prescribedTemperature
    annotation (Placement(transformation(extent={{50,82},{62,94}})));
  Components.Thermostat                       thermostat(
    fan_speed=50,
    minimum_fan_speed=0.05,
    n=1,
    T_coldest=-17,
    T_hottest=-12)
             annotation (Placement(transformation(extent={{34,-92},{48,-78}})));
  ThermoCycle.Interfaces.HeatTransfer.HeatPortConverter heatPortConverter
    annotation (Placement(transformation(extent={{-4,-94},{-14,-78}})));
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor temperatureSensor
    annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={6,-86})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistanceL thermalResistanceL5(A=1, U=0.4)
    annotation (Placement(transformation(extent={{-6,5},{6,-5}},
        rotation=-90,
        origin={-64,10})));
  Components.Cell1Dim_Modified_YesVoidFraction Condenser(
    redeclare package Medium = Media.R600a_CP_Smooth,
    Vi=0.000089,
    Ai=0.106,
    Unom_l=10000,
    Unom_tp=10000,
    Unom_v=10000,
    redeclare model HeatTransfer =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    ComputeSat=true,
    hstart=4.5E5,
    clvf=1.5,
    Mdotnom=0.000259,
    Dtube=0.00334,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    UseVoidFractionModel=true,
    voidFractionDerivatives=true,
    voidFractionChoice=3,
    pstart=600000)
    annotation (Placement(transformation(extent={{-24,30},{-44,50}})));
  Components.Cell1Dim_Modified_YesVoidFraction Evaporator(
    redeclare package Medium = Media.R600a_CP_Smooth,
    Mdotnom=0.000259,
    Unom_l=10000,
    Unom_tp=10000,
    Unom_v=10000,
    redeclare model HeatTransfer =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    ComputeSat=true,
    Vi=0.000145,
    Ai=0.088,
    UseVoidFractionModel=true,
    hstart=4E5,
    Dtube=0.0066,
    clvf=2.2,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    voidFractionDerivatives=true,
    voidFractionChoice=3,
    pstart=59000)
    annotation (Placement(transformation(extent={{-52,-28},{-32,-48}})));
equation
  M_total = Condenser.M_tot +
            Evaporator.M_tot +
            DischargeLine.M_tot;
  connect(thermalResistanceL.port1, source_T_cell.ThermalPortCell) annotation (
      Line(points={{-34,64.5},{-34,72.14},{-33.46,72.14}}, color={255,0,0}));
  connect(thermalResistanceL2.port1, source_T_cell2.ThermalPortCell)
    annotation (Line(points={{14,64.5},{14,72.14},{14.54,72.14}}, color={255,0,
          0}));
  connect(DischargeLine.OutFlow, CondenserInlet.InFlow) annotation (Line(points=
         {{4,40.1},{-4,40.1},{-4,40.2},{-10.93,40.2}}, color={0,0,255}));
  connect(thermalResistanceL.port2, CondenserWall.Wall_ext) annotation (Line(
        points={{-34,62.5},{-34,57},{-34.2,57}}, color={255,0,0}));
  connect(DischargeLineWall.Wall_int, DischargeLine.Wall_int)
    annotation (Line(points={{14,51},{14,45}}, color={255,0,0}));
  connect(thermalResistanceL2.port2, DischargeLineWall.Wall_ext)
    annotation (Line(points={{14,62.5},{14,57},{13.8,57}}, color={255,0,0}));
  connect(CompressorOutlet.InFlow, DischargeLine.InFlow) annotation (Line(
        points={{34.06,40.2},{31.05,40.2},{31.05,40},{24,40}}, color={0,0,255}));
  connect(Tamb.y, source_T_cell.Temperature) annotation (Line(points={{-6,87.4},
          {-22,87.4},{-22,77},{-33.4,77}}, color={0,0,127}));
  connect(Tamb.y, source_T_cell2.Temperature) annotation (Line(points={{-6,87.4},
          {4,87.4},{4,77},{14.6,77}}, color={0,0,127}));
  connect(thermalResistanceL1.port2, metalWallL1.Wall_ext) annotation (Line(
        points={{-42,-62.5},{-42,-55},{-42.2,-55}}, color={255,0,0}));
  connect(Freezer.Wall_int, thermalResistanceL1.port1)
    annotation (Line(points={{-42,-69},{-42,-64.5}}, color={255,0,0}));
  connect(Freezer.Wall_ext, thermalResistanceL4.port2) annotation (Line(points={{-42.2,
          -75},{-42.2,-78.5},{-42,-78.5},{-42,-82.5}},         color={255,0,0}));
  connect(source_T_cell1.ThermalPortCell, thermalResistanceL4.port1)
    annotation (Line(points={{-41.46,-90.14},{-41.46,-88.07},{-42,-88.07},{-42,-84.5}},
                   color={255,0,0}));
  connect(Tamb.y, source_T_cell1.Temperature) annotation (Line(points={{-6,87.4},
          {-56,87.4},{-56,80},{-96,80},{-96,-96},{-68,-96},{-68,-95},{-41.4,-95}},
        color={0,0,127}));
  connect(Tamb.y, source_T_cell4.Temperature) annotation (Line(points={{-6,87.4},
          {28,87.4},{28,-8},{28.6,-8},{28.6,-19}},color={0,0,127}));
initial equation
     M_total_init = Condenser.M_tot +
               Evaporator.M_tot +
               DischargeLine.M_tot;

equation
  connect(SLHeatExchanger_Capilar.OutFlow, ValveInlet.InFlow) annotation (Line(
        points={{-81.92,2},{-82,2},{-82,-4.94},{-82.8,-4.94}}, color={0,0,255}));
  connect(ValveInlet.InFlow, valve.InFlow) annotation (Line(points={{-82.8,-4.94},
          {-82.8,-7.47},{-82,-7.47},{-82,-17}}, color={0,0,255}));
  connect(EvaporatorOutlet.InFlow, SLHX_SucLineInlet.InFlow) annotation (Line(
        points={{-15.94,-37.8},{-15.94,-38},{-16,-38},{-14,-38},{-6,-38},{-6,0},
          {-26.94,0},{-26.94,0.2}}, color={0,0,255}));
  connect(SLHeatExchanger_SuctionLine.InFlow, SLHX_SucLineInlet.InFlow)
    annotation (Line(points={{-50,2},{-26.94,2},{-26.94,0.2}}, color={0,0,255}));
  connect(SLHeatExchanger_SuctionLine.OutFlow, SLHX_SucLineOutlet.InFlow)
    annotation (Line(points={{-50.08,18},{2,18},{2,-36},{6,-36},{6,-35.8},{11.06,
          -35.8}}, color={0,0,255}));
  connect(SLHX_SucLineOutlet.InFlow, SuctionLine.InFlow) annotation (Line(
        points={{11.06,-35.8},{15.53,-35.8},{15.53,-36},{20,-36}}, color={0,0,255}));
  connect(SuctionLine.OutFlow, CompressorSuctionLine.InFlow) annotation (Line(
        points={{36,-35.92},{42,-35.92},{42,-21.72},{46.08,-21.72}}, color={0,0,
          255}));
  connect(source_T_cell4.ThermalPortCell, SuctionLine.Wall_int) annotation (
      Line(points={{28.54,-23.86},{28.54,-28.93},{28,-28.93},{28,-32}}, color={255,
          0,0}));
  connect(CompressorSuctionLine.InFlow, hermeticRecipCompressor.su) annotation (
     Line(points={{46.08,-21.72},{46.08,-22},{70,-22},{70,-10},{69,-10},{69,1.8}},
        color={0,0,255}));
  connect(prescribedTemperature.port, hermeticRecipCompressor.Ambient)
    annotation (Line(points={{62,88},{94,88},{94,-4.6},{76,-4.6}}, color={191,0,
          0}));
  connect(Tamb.y, prescribedTemperature.T) annotation (Line(points={{-6,87.4},{22,
          87.4},{22,88},{48.8,88}}, color={0,0,127}));
  connect(heatPortConverter.heatPort,temperatureSensor. port)
    annotation (Line(points={{-4,-86},{-2,-86},{0,-86}},     color={191,0,0}));
  connect(temperatureSensor.T,thermostat. u) annotation (Line(points={{12,-86},{
          30.22,-86},{30.22,-85}}, color={0,0,127}));
  connect(Freezer.Wall_ext,heatPortConverter. thermalPortL) annotation (Line(
        points={{-42.2,-75},{-22.1,-75},{-22.1,-86},{-14,-86}}, color={255,0,0}));
  connect(thermostat.y2, hermeticRecipCompressor.frequency) annotation (Line(
        points={{49.96,-88.78},{49.96,-90},{84,-90},{84,-44},{81.6,-44},{81.6,0.4}},
        color={0,0,127}));
  connect(valve.OutFlow, EvaporatorInlet.InFlow) annotation (Line(points={{-82,-35},
          {-72,-35},{-72,-37.8},{-59.94,-37.8}}, color={0,0,255}));
  connect(SLHeatExchanger_Capilar.Wall_int, thermalResistanceL5.port1)
    annotation (Line(points={{-78,10},{-65.5,10}},            color={255,0,0}));
  connect(thermalResistanceL5.port2, SLHeatExchanger_SuctionLine.Wall_int)
    annotation (Line(points={{-63.5,10},{-58.75,10},{-54,10}}, color={255,0,0}));
  connect(SLHeatExchanger_Capilar.InFlow, CondenserOutlet.InFlow) annotation (
      Line(points={{-82,18},{-82,18},{-82,40.2},{-67.94,40.2}}, color={0,0,255}));
  connect(CompressorOutlet.InFlow, hermeticRecipCompressor.ex) annotation (Line(
        points={{34.06,40.2},{84.03,40.2},{84.03,4.8},{79.4,4.8}}, color={0,0,255}));
  connect(CondenserWall.Wall_int, Condenser.Wall_int)
    annotation (Line(points={{-34,51},{-34,45}}, color={255,0,0}));
  connect(Condenser.InFlow, CondenserInlet.InFlow) annotation (Line(points={{
          -24,40},{-10.93,40},{-10.93,40.2}}, color={0,0,255}));
  connect(CondenserOutlet.InFlow, Condenser.OutFlow) annotation (Line(points=
          {{-67.94,40.2},{-54.97,40.2},{-54.97,40.1},{-44,40.1}}, color={0,0,
          255}));
  connect(Evaporator.Wall_int, metalWallL1.Wall_int)
    annotation (Line(points={{-42,-43},{-42,-49}}, color={255,0,0}));
  connect(EvaporatorInlet.InFlow, Evaporator.InFlow) annotation (Line(points=
          {{-59.94,-37.8},{-56.97,-37.8},{-56.97,-38},{-52,-38}}, color={0,0,
          255}));
  connect(Evaporator.OutFlow, EvaporatorOutlet.InFlow) annotation (Line(
        points={{-32,-38.1},{-24,-38.1},{-24,-37.8},{-15.94,-37.8}}, color={0,
          0,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Cell1Dim_YesVoidFraction_Upwind_Stiffing;
