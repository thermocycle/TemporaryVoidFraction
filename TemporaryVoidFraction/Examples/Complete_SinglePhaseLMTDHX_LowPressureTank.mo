within TemporaryVoidFraction.Examples;
model Complete_SinglePhaseLMTDHX_LowPressureTank
  Modelica.SIunits.Mass M_total "total refrigerant mass in cycle";

  ThermoCycle.Components.Units.PdropAndValves.Valve valve(
    redeclare package Medium = ThermoCycle.Media.R600a_CP,
    UseNom=false,
    Mdot_nom=0.003,
    t_init=30,
    constinit=false,
    Xopen=1,
    Afull=1.08e-8,
    p_nom=600000,
    DELTAp_nom=450000) annotation (Placement(transformation(
        extent={{-10,10},{10,-10}},
        rotation=-90,
        origin={-82,10})));
  Modelica.Blocks.Sources.Constant const(k=0.012)
    annotation (Placement(transformation(extent={{-58,0},{-46,12}})));
  ThermoCycle.Components.Units.ExpansionAndCompressionMachines.ElectricDrive
    electricDrive(f(start=50), Np=1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={62,-42})));
  ThermoCycle.Components.FluidFlow.Pipes.Flow1Dim_MD SuctionLineGas(
    A=0.03,
    redeclare package Medium = ThermoCycle.Media.R600a_CP,
    V=0.0000473,
    Mdotnom=0.0003,
    N=5,
    Mdotconst=false,
    U_nom=50,
    pstart=50000,
    Tstart_inlet=293.15,
    Tstart_outlet=303.15)
    annotation (Placement(transformation(extent={{16,-44},{40,-20}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T SuctionLineWall(N=5)
    annotation (Placement(transformation(extent={{18,-28},{38,-8}})));
  TemporaryVoidFraction.Components.Compressor compressor(
    redeclare package Medium = ThermoCycle.Media.R600a_CP,
    epsilon_start=0.6,
    epsilon_v_start=0.9,
    V_s=5.96e-6,
    p_su_start=50000,
    p_ex_start=600000)
    annotation (Placement(transformation(extent={{56,-4},{80,20}})));
  Modelica.Blocks.Sources.Ramp ramp1(
    offset=273.15,
    duration=0,
    height=-10)
    annotation (Placement(transformation(extent={{-58,-28},{-46,-16}})));
  TemporaryVoidFraction.Components.Tank_pL_hex_hv EvapTank(
    redeclare package Medium = ThermoCycle.Media.R600a_CP,
    impose_pressure=true,
    L_start=0.4,
    Vtot=0.000033,
    pstart=50000)
    annotation (Placement(transformation(extent={{-30,-90},{-10,-70}})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall metalWall(
    c_wall=500,
    steadystate_T_wall=true,
    N=5,
    Aext=0.0179,
    Aint=0.0126,
    M_wall=0.085,
    Tstart_wall_1=333.15,
    Tstart_wall_end=323.15)
    annotation (Placement(transformation(extent={{8,54},{24,38}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance thermalResistance(
    N=5,
    A=0.0179,
    U=22.50)
         annotation (Placement(transformation(extent={{12,54},{20,60}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T source_T(N=5)
    annotation (Placement(transformation(extent={{10,62},{22,74}})));
  ThermoCycle.Components.FluidFlow.Reservoirs.SourceMdot sourceMdot(
      redeclare package Medium = ThermoCycle.Media.Air_CP, Mdot_0=1)
    annotation (Placement(transformation(extent={{-44,38},{-24,18}})));
  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP sinkP(redeclare package
      Medium = ThermoCycle.Media.Air_CP)
    annotation (Placement(transformation(extent={{-6,-6},{6,6}},
        rotation=90,
        origin={-22,76})));
  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP sinkP1(redeclare package
      Medium = ThermoCycle.Media.Air_CP)
    annotation (Placement(transformation(extent={{-78,-94},{-94,-78}})));
  ThermoCycle.Components.FluidFlow.Reservoirs.SourceMdot sourceMdot1(
      redeclare package Medium = ThermoCycle.Media.Air_CP, Mdot_0=1)
    annotation (Placement(transformation(extent={{-26,-42},{-38,-30}})));
  Modelica.Blocks.Sources.Ramp ramp2(
    duration=0,
    startTime=1200,
    height=0,
    offset=0.0045)
    annotation (Placement(transformation(extent={{-8,-28},{-20,-16}})));
  TemporaryVoidFraction.Components.HX_singlephase_Evaporator evaporator(
    M_wall=1.09,
    A_ps=0.088,
    A_ss=0.912,
    MdotNom_ss=0.0045)
    annotation (Placement(transformation(extent={{-66,-62},{-46,-42}})));
  TemporaryVoidFraction.Components.HX_singlephase_Condenser condenser(
    M_wall=1.57,
    A_ps=0.448,
    A_ss=0.112,
    MdotNom_ps=0.015,
    U_ps=30) annotation (Placement(transformation(
        extent={{-10,10},{10,-10}},
        rotation=90,
        origin={-22,52})));
  Modelica.Blocks.Sources.Pulse pulse(
    amplitude=-49.95,
    offset=50,
    width=20,
    period=3000,
    nperiod=-1,
    startTime=3000)
    annotation (Placement(transformation(extent={{42,-94},{62,-74}})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall metalWall1(
    c_wall=500,
    steadystate_T_wall=true,
    N=5,
    Aext=0.0131,
    Aint=0.0111,
    M_wall=0.049,
    Tstart_wall_1=333.15,
    Tstart_wall_end=323.15)
    annotation (Placement(transformation(extent={{46,54},{62,38}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance thermalResistance2(
    N=5,
    A=0.0131,
    U=90)
         annotation (Placement(transformation(extent={{50,54},{58,60}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T source_T1(
                                                            N=5)
    annotation (Placement(transformation(extent={{48,62},{60,74}})));
  Modelica.Blocks.Sources.Ramp ramp4(
    duration=0,
    offset=32 + 273.15,
    height=0,
    startTime=5000)
    annotation (Placement(transformation(extent={{6,-6},{-6,6}},
        rotation=90,
        origin={16,86})));
  Modelica.Blocks.Sources.Ramp ramp3(
    duration=0,
    offset=32 + 273.15,
    height=0,
    startTime=5000)
    annotation (Placement(transformation(extent={{6,-6},{-6,6}},
        rotation=0,
        origin={-16,6})));
  Modelica.Blocks.Sources.Ramp ramp5(
    duration=0,
    offset=32 + 273.15,
    height=0,
    startTime=5000)
    annotation (Placement(transformation(extent={{6,-6},{-6,6}},
        rotation=90,
        origin={28,8})));
  Modelica.Blocks.Sources.Ramp ramp6(
    duration=0,
    offset=50 + 273.15,
    startTime=2000,
    height=0)
    annotation (Placement(transformation(extent={{6,-6},{-6,6}},
        rotation=90,
        origin={54,86})));

  ThermoCycle.Components.FluidFlow.Pipes.Flow1Dim DischargeLine(
    redeclare package Medium = Media.R600a_CP,
    N=5,
    A=0.0126,
    V=0.0000105,
    Mdotnom=0.000259,
    Unom_l=250,
    Unom_tp=250,
    Unom_v=250,
    redeclare model Flow1DimHeatTransferModel =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    pstart=600000,
    Tstart_inlet=343.15,
    Tstart_outlet=343.15)
    annotation (Placement(transformation(extent={{28,22},{6,42}})));

  ThermoCycle.Components.FluidFlow.Pipes.Flow1Dim DischargeTube(
    redeclare package Medium = Media.R600a_CP,
    N=5,
    Mdotnom=0.000259,
    redeclare model Flow1DimHeatTransferModel =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    A=0.0111,
    V=0.0000329,
    Unom_l=180,
    Unom_tp=180,
    Unom_v=180,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    pstart=600000,
    Tstart_inlet=343.15,
    Tstart_outlet=343.15)
    annotation (Placement(transformation(extent={{66,22},{44,42}})));

equation
  M_total = EvapTank.M +
            DischargeTube.M_tot +
            DischargeLine.M_tot;
  connect(SuctionLineWall.thermalPort, SuctionLineGas.Wall_int) annotation (
      Line(points={{27.9,-22.1},{27.9,-24.05},{28,-24.05},{28,-27}}, color={255,
          0,0}));
  connect(SuctionLineGas.OutFlow, compressor.InFlow) annotation (Line(points={{38,
          -31.9},{38,15.8},{61.2,15.8}},    color={0,0,255}));
  connect(compressor.flange_elc, electricDrive.shaft) annotation (Line(points={{76,8},{
          88,8},{88,-33.4},{62,-33.4}},         color={0,0,0}));
  connect(thermalResistance.port2, metalWall.Wall_ext)
    annotation (Line(points={{16,56.7},{16,48.4},{15.84,48.4}},
                                                           color={255,0,0}));
  connect(source_T.thermalPort, thermalResistance.port1) annotation (Line(
        points={{15.94,65.54},{15.94,58.77},{16,58.77},{16,57.9}}, color={255,
          0,0}));
  connect(const.y, sourceMdot.in_Mdot)
    annotation (Line(points={{-45.4,6},{-40,6},{-40,22}}, color={0,0,127}));
  connect(ramp2.y, sourceMdot1.in_Mdot) annotation (Line(points={{-20.6,-22},
          {-27.65,-22},{-27.65,-32.4},{-28.4,-32.4}},
                                            color={0,0,127}));
  connect(valve.OutFlow, evaporator.InFlowPs) annotation (Line(points={{-82,1},
          {-82,1},{-82,-52.2},{-67,-52.2}},      color={0,0,255}));
  connect(evaporator.OutFlowPs, EvapTank.InFlow) annotation (Line(points={{-45,
          -52.2},{-30.5,-52.2},{-30.5,-71.6},{-20,-71.6}},     color={0,0,255}));
  connect(sourceMdot1.flangeB, evaporator.InFlowSs) annotation (Line(points={{-37.4,
          -36},{-42,-36},{-42,-44.8},{-47,-44.8}},      color={0,0,255}));
  connect(evaporator.OutFlowSs, sinkP1.flangeB) annotation (Line(points={{-65,
          -59.4},{-65,-69.7},{-79.28,-69.7},{-79.28,-86}}, color={0,0,255}));
  connect(condenser.OutFlowSs, valve.InFlow) annotation (Line(points={{-29.4,
          43},{-82,43},{-82,19}},                  color={0,0,255}));
  connect(condenser.OutFlowPs, sinkP.flangeB) annotation (Line(points={{-22.2,
          63},{-22,63},{-22,70.96}},                color={0,0,255}));
  connect(pulse.y, electricDrive.f) annotation (Line(points={{63,-84},{88,-84},
          {88,-42.4},{71.4,-42.4}}, color={0,0,127}));
  connect(EvapTank.OutFlow, SuctionLineGas.InFlow) annotation (Line(points={{
          -20,-88.8},{-2,-88.8},{-2,-32},{18,-32}}, color={0,0,255}));
  connect(ramp1.y, sourceMdot1.in_T) annotation (Line(points={{-45.4,-22},{
          -32,-22},{-32,-32.4},{-31.88,-32.4}}, color={0,0,127}));
  connect(sourceMdot.flangeB, condenser.InFlowPs) annotation (Line(points={{
          -25,28},{-22,28},{-22,41},{-22.2,41}}, color={0,0,255}));
  connect(thermalResistance2.port2, metalWall1.Wall_ext) annotation (Line(
        points={{54,56.7},{54,48.4},{53.84,48.4}}, color={255,0,0}));
  connect(source_T1.thermalPort, thermalResistance2.port1) annotation (Line(
        points={{53.94,65.54},{53.94,58.77},{54,58.77},{54,57.9}}, color={255,
          0,0}));
  connect(ramp4.y, source_T.Temperature)
    annotation (Line(points={{16,79.4},{16,70.4}}, color={0,0,127}));
  connect(sourceMdot.in_T, ramp3.y) annotation (Line(points={{-34.2,22},{
          -34.2,6},{-24,6},{-22,6},{-22.6,6}}, color={0,0,127}));
  connect(ramp5.y, SuctionLineWall.Temperature)
    annotation (Line(points={{28,1.4},{28,-14}}, color={0,0,127}));
  connect(ramp6.y, source_T1.Temperature)
    annotation (Line(points={{54,79.4},{54,70.4}}, color={0,0,127}));
  connect(metalWall.Wall_int, DischargeLine.Wall_int) annotation (Line(points={{16,43.6},
          {16,36.1667},{17,36.1667}},          color={255,0,0}));
  connect(condenser.InFlowSs, DischargeLine.OutFlow) annotation (Line(points={{-14.8,
          61},{-14.8,45.5},{7.83333,45.5},{7.83333,32.0833}}, color={0,0,255}));
  connect(metalWall1.Wall_int, DischargeTube.Wall_int) annotation (Line(points={{54,43.6},
          {54,36.1667},{55,36.1667}},           color={255,0,0}));
  connect(DischargeLine.InFlow, DischargeTube.OutFlow) annotation (Line(points={{26.1667,
          32},{26.1667,32.0833},{45.8333,32.0833}},          color={0,0,255}));
  connect(compressor.OutFlow, DischargeTube.InFlow) annotation (Line(points={{76.6,4},
          {88,4},{88,32},{64.1667,32}},    color={0,0,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Complete_SinglePhaseLMTDHX_LowPressureTank;
