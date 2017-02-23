within TemporaryVoidFraction.Examples;
model Cell1DimInc_Upwind

  Modelica.SIunits.Mass M_total "total refrigerant mass in cycle";
  Modelica.SIunits.Energy EnergyConsumption(start=0.00001) "energy consumption";
  Modelica.SIunits.Energy EnergyConsumptionOld(start=0.00001) "energy consumption";

  ThermoCycle.Components.Units.PdropAndValves.Valve valve(
    redeclare package Medium = ThermoCycle.Media.R600a_CP,
    UseNom=false,
    Mdot_nom=0.003,
    t_init=30,
    constinit=false,
    Xopen=1,
    Afull=1.20e-8,
    p_nom=600000,
    DELTAp_nom=450000) annotation (Placement(transformation(
        extent={{-10,10},{10,-10}},
        rotation=-90,
        origin={-83,-14})));
  TemporaryVoidFraction.Components.Tank_pL_hex_hv EvapTank(
    redeclare package Medium = ThermoCycle.Media.R600a_CP,
    impose_pressure=true,
    L_start=0.4,
    Vtot=0.000100,
    pstart=59000)
    annotation (Placement(transformation(extent={{-38,-2},{-24,-16}})));
  Modelica.Blocks.Sources.Ramp Tamb(
    duration=0,
    startTime=20000,
    offset=32 + 273.15,
    height=0) annotation (Placement(transformation(
        extent={{6,-6},{-6,6}},
        rotation=90,
        origin={-6,94})));

  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat CondenserOutlet(redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-74,40},{-62,50}})));
  ThermoCycle.Components.FluidFlow.Pipes.Cell1DimInc Condenser(
    redeclare package Medium = Media.R600a_CP_Smooth,
    Mdotnom=0.00259,
    Unom=10000,
    redeclare model HeatTransfer =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    Vi=0.000089,
    Ai=0.106,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    pstart=600000)
    annotation (Placement(transformation(extent={{-24,30},{-44,50}})));

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
  ThermoCycle.Components.FluidFlow.Pipes.Cell1DimInc Evaporator(
    redeclare package Medium = Media.R600a_CP_Smooth,
    Mdotnom=0.00259,
    Unom=10000,
    redeclare model HeatTransfer =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    Vi=0.000145,
    Ai=0.088,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    pstart=59000)
    annotation (Placement(transformation(extent={{-52,-20},{-32,-40}})));

  ThermoCycle.Components.HeatFlow.Walls.MetalWallL metalWallL1(
    Aint=0.088,
    Aext=0.620,
    M_wall=0.316,
    c_wall=880,
    Tstart_wall=250.15)
    annotation (Placement(transformation(extent={{-52,-54},{-32,-34}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistanceL thermalResistanceL1(A=0.620, U=12)
    annotation (Placement(transformation(extent={{-48,-50},{-36,-60}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat CondenserInlet(redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-18,40},{-4,50}})));
  ThermoCycle.Components.FluidFlow.Pipes.Cell1DimInc DischargeLine(
    redeclare package Medium = Media.R600a_CP_Smooth,
    Mdotnom=0.00259,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    redeclare model HeatTransfer =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    hstart=6E6,
    Unom=240,
    Vi=0.000110,
    Ai=0.0132,
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
    annotation (Placement(transformation(extent={{20,-36},{36,-20}})));

  ThermoCycle.Components.HeatFlow.Sources.Source_T_cell source_T_cell4
    annotation (Placement(transformation(extent={{22,-16},{34,-4}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat DischargeValve(redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{70,40},{82,50}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat CompressorSuctionLine(
      redeclare package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{38,-14},{54,0}})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWallL Freezer(
    M_wall=3,
    c_wall=2000,
    Aext=0.620,
    Aint=0.620,
    Tstart_wall=259.15)
    annotation (Placement(transformation(extent={{-52,-74},{-32,-54}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistanceL thermalResistanceL4(A=1, U=
        1.8)
    annotation (Placement(transformation(extent={{-48,-70},{-36,-80}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T_cell source_T_cell1
    annotation (Placement(transformation(extent={{-48,-78},{-36,-90}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat EvaporatorOutlet(
                                                                     redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-22,-30},{-10,-20}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat EvaporatorInlet(redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-66,-30},{-54,-20}})));
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
        origin={-82,24})));

  TemporaryVoidFraction.Components.Thermostat thermostat(
    fan_speed=50,
    minimum_fan_speed=0.05,
    n=1,
    T_hottest=-10,
    T_coldest=-18)
             annotation (Placement(transformation(extent={{22,-88},{36,-74}})));
  ThermoCycle.Interfaces.HeatTransfer.HeatPortConverter heatPortConverter
    annotation (Placement(transformation(extent={{-16,-90},{-26,-74}})));
  Modelica.Thermal.HeatTransfer.Sensors.TemperatureSensor temperatureSensor
    annotation (Placement(transformation(
        extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-6,-82})));
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
        origin={-54,24})));

  ThermoCycle.Components.HeatFlow.Walls.ThermalResistanceL thermalResistanceL5(A=1, U=0.3)
    annotation (Placement(transformation(extent={{-6,5},{6,-5}},
        rotation=-90,
        origin={-68,24})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat ValveInlet(redeclare
      package Medium = Media.R600a_CP_Smooth) annotation (Placement(
        transformation(
        extent={{-6,5},{6,-5}},
        rotation=90,
        origin={-78,7})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat SLHX_SucLineInlet(
                                                                     redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{-37,16},{-25,26}})));
  ThermoCycle.Components.FluidFlow.Sensors.SensTpSat SLHX_SucLineOutlet(
                                                                     redeclare
      package Medium = Media.R600a_CP_Smooth)
    annotation (Placement(transformation(extent={{3,-28},{15,-18}})));
  Components.HermeticRecipCompressor hermeticRecipCompressor(U_dis=0.30)
    annotation (Placement(transformation(extent={{56,-4},{88,16}})));
  Modelica.Thermal.HeatTransfer.Sources.PrescribedTemperature
    prescribedTemperature
    annotation (Placement(transformation(extent={{58,82},{70,94}})));
algorithm
 //EnergyConsumption :=  Functions.energyConsumption(EnergyConsumptionOld,compressor.W_dot);
 EnergyConsumption := EnergyConsumption + 10;
 EnergyConsumptionOld :=   EnergyConsumption;
equation
  M_total = EvapTank.M +
            SuctionLine.M_tot +
            hermeticRecipCompressor.SuctionPlenum.M_tot +
            hermeticRecipCompressor.DischargePlenum.M_tot +
            DischargeLine.M_tot +
            Condenser.M_tot +
            SLHeatExchanger_Capilar.M_tot +
            Evaporator.M_tot +
            SLHeatExchanger_SuctionLine.M_tot;

  connect(thermalResistanceL.port1, source_T_cell.ThermalPortCell) annotation (
      Line(points={{-34,64.5},{-34,72.14},{-33.46,72.14}}, color={255,0,0}));
  connect(Condenser.OutFlow, CondenserOutlet.InFlow) annotation (Line(points={{-44,
          40.1},{-52,40.1},{-52,40.2},{-67.94,40.2}},    color={0,0,255}));
  connect(thermalResistanceL2.port1, source_T_cell2.ThermalPortCell)
    annotation (Line(points={{14,64.5},{14,72.14},{14.54,72.14}}, color={255,0,
          0}));
  connect(DischargeLine.OutFlow, CondenserInlet.InFlow) annotation (Line(points=
         {{4,40.1},{-4,40.1},{-4,40.2},{-10.93,40.2}}, color={0,0,255}));
  connect(Condenser.InFlow, CondenserInlet.InFlow) annotation (Line(points={{
          -24,40},{-10.93,40},{-10.93,40.2}}, color={0,0,255}));
  connect(CondenserWall.Wall_int, Condenser.Wall_int)
    annotation (Line(points={{-34,51},{-34,45}},          color={255,0,0}));
  connect(thermalResistanceL.port2, CondenserWall.Wall_ext) annotation (Line(
        points={{-34,62.5},{-34,57},{-34.2,57}}, color={255,0,0}));
  connect(DischargeLineWall.Wall_int, DischargeLine.Wall_int)
    annotation (Line(points={{14,51},{14,45}}, color={255,0,0}));
  connect(thermalResistanceL2.port2, DischargeLineWall.Wall_ext)
    annotation (Line(points={{14,62.5},{14,57},{13.8,57}}, color={255,0,0}));
  connect(CompressorOutlet.InFlow, DischargeLine.InFlow) annotation (Line(
        points={{34.06,40.2},{31.05,40.2},{31.05,40},{24,40}}, color={0,0,255}));
  connect(source_T_cell4.ThermalPortCell, SuctionLine.Wall_int) annotation (
      Line(points={{28.54,-11.86},{28.54,-16.93},{28,-16.93},{28,-24}}, color={
          255,0,0}));
  connect(SuctionLine.OutFlow, CompressorSuctionLine.InFlow) annotation (Line(
        points={{36,-27.92},{42,-27.92},{42,-13.72},{46.08,-13.72}}, color={0,0,
          255}));
  connect(Evaporator.OutFlow, EvaporatorOutlet.InFlow) annotation (Line(points={{-32,
          -30.1},{-20,-30.1},{-20,-29.8},{-15.94,-29.8}},       color={0,0,255}));
  connect(EvaporatorOutlet.InFlow, EvapTank.InFlow) annotation (Line(points={{-15.94,
          -29.8},{-15.94,-30},{-10,-30},{-10,-14.88},{-31,-14.88}},       color=
         {0,0,255}));
  connect(Tamb.y, source_T_cell.Temperature) annotation (Line(points={{-6,87.4},
          {-22,87.4},{-22,77},{-33.4,77}}, color={0,0,127}));
  connect(Tamb.y, source_T_cell2.Temperature) annotation (Line(points={{-6,87.4},
          {4,87.4},{4,77},{14.6,77}}, color={0,0,127}));
  connect(EvaporatorInlet.InFlow, Evaporator.InFlow) annotation (Line(points={{
          -59.94,-29.8},{-56.97,-29.8},{-56.97,-30},{-52,-30}}, color={0,0,255}));
  connect(metalWallL1.Wall_int, Evaporator.Wall_int)
    annotation (Line(points={{-42,-41},{-42,-35}}, color={255,0,0}));
  connect(thermalResistanceL1.port2, metalWallL1.Wall_ext) annotation (Line(
        points={{-42,-54.5},{-42,-47},{-42.2,-47}}, color={255,0,0}));
  connect(Freezer.Wall_int, thermalResistanceL1.port1)
    annotation (Line(points={{-42,-61},{-42,-56.5}}, color={255,0,0}));
  connect(Freezer.Wall_ext, thermalResistanceL4.port2) annotation (Line(points=
          {{-42.2,-67},{-42.2,-70.5},{-42,-70.5},{-42,-74.5}}, color={255,0,0}));
  connect(Tamb.y, source_T_cell1.Temperature) annotation (Line(points={{-6,87.4},
          {-56,87.4},{-56,87},{-96,87},{-96,-87},{-41.4,-87}},
        color={0,0,127}));
  connect(Tamb.y, source_T_cell4.Temperature) annotation (Line(points={{-6,87.4},
          {28,87.4},{28,-8},{28.6,-8},{28.6,-7}}, color={0,0,127}));
  connect(source_T_cell1.ThermalPortCell, thermalResistanceL4.port1)
    annotation (Line(points={{-41.46,-82.14},{-41.46,-80.07},{-42,-80.07},{-42,
          -76.5}}, color={255,0,0}));
  connect(heatPortConverter.heatPort, temperatureSensor.port)
    annotation (Line(points={{-16,-82},{-14,-82},{-12,-82}}, color={191,0,0}));
  connect(temperatureSensor.T, thermostat.u) annotation (Line(points={{0,-82},{
          18.22,-82},{18.22,-81}}, color={0,0,127}));
  connect(Freezer.Wall_ext, heatPortConverter.thermalPortL) annotation (Line(
        points={{-42.2,-67},{-34.1,-67},{-34.1,-82},{-26,-82}}, color={255,0,0}));
  connect(valve.OutFlow, EvaporatorInlet.InFlow) annotation (Line(points={{-83,
          -23},{-83,-24},{-82,-24},{-82,-29.8},{-59.94,-29.8}}, color={0,0,255}));
  connect(SLHeatExchanger_Capilar.InFlow, CondenserOutlet.InFlow) annotation (
      Line(points={{-82,32},{-82,32},{-82,40.2},{-67.94,40.2}}, color={0,0,255}));
  connect(SLHeatExchanger_Capilar.OutFlow, ValveInlet.InFlow) annotation (Line(
        points={{-81.92,16},{-82.8,16},{-82.8,7.06}}, color={0,0,255}));
  connect(ValveInlet.InFlow, valve.InFlow) annotation (Line(points={{-82.8,7.06},
          {-82.8,1.53},{-83,1.53},{-83,-5}}, color={0,0,255}));
  connect(thermalResistanceL5.port2, SLHeatExchanger_SuctionLine.Wall_int)
    annotation (Line(points={{-67.5,24},{-62.75,24},{-58,24}}, color={255,0,0}));
  connect(SLHeatExchanger_Capilar.Wall_int, thermalResistanceL5.port1)
    annotation (Line(points={{-78,24},{-69.5,24}},            color={255,0,0}));
  connect(SLHeatExchanger_SuctionLine.InFlow, SLHX_SucLineInlet.InFlow)
    annotation (Line(points={{-54,16},{-30.94,16},{-30.94,16.2}}, color={0,0,
          255}));
  connect(SLHX_SucLineInlet.InFlow, EvapTank.OutFlow) annotation (Line(points={
          {-30.94,16.2},{-30.94,6.1},{-31,6.1},{-31,-2.84}}, color={0,0,255}));
  connect(SLHeatExchanger_SuctionLine.OutFlow, SLHX_SucLineOutlet.InFlow)
    annotation (Line(points={{-54.08,32},{0,32},{0,-28},{4,-28},{4,-27.8},{9.06,
          -27.8}}, color={0,0,255}));
  connect(SLHX_SucLineOutlet.InFlow, SuctionLine.InFlow) annotation (Line(
        points={{9.06,-27.8},{14.53,-27.8},{14.53,-28},{20,-28}}, color={0,0,
          255}));
  connect(thermostat.y2, hermeticRecipCompressor.frequency) annotation (Line(
        points={{37.96,-84.78},{37.96,-84},{92,-84},{92,-40},{77.6,-40},{77.6,2.4}},
        color={0,0,127}));
  connect(CompressorSuctionLine.InFlow, hermeticRecipCompressor.su) annotation (
     Line(points={{46.08,-13.72},{56.04,-13.72},{56.04,3.8},{65,3.8}}, color={0,
          0,255}));
  connect(hermeticRecipCompressor.ex, DischargeValve.InFlow) annotation (Line(
        points={{75.4,6.8},{75.4,23.4},{76.06,23.4},{76.06,40.2}}, color={0,0,255}));
  connect(CompressorOutlet.InFlow, DischargeValve.InFlow) annotation (Line(
        points={{34.06,40.2},{56.03,40.2},{56.03,40.2},{76.06,40.2}}, color={0,0,
          255}));
  connect(Tamb.y, prescribedTemperature.T) annotation (Line(points={{-6,87.4},{30,
          87.4},{30,88},{56.8,88}}, color={0,0,127}));
  connect(hermeticRecipCompressor.Ambient, prescribedTemperature.port)
    annotation (Line(points={{72,-2.6},{94,-2.6},{94,88},{70,88}}, color={191,0,
          0}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Cell1DimInc_Upwind;
