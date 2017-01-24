within TemporaryVoidFraction.Examples;
model Complete_YesVoidFraction

  parameter Modelica.SIunits.Mass M_total_init=0.030 "total refrigerant mass in cycle";
  Modelica.SIunits.Mass M_total "total refrigerant mass in cycle";

  ThermoCycle.Components.Units.PdropAndValves.Valve valve(
    redeclare package Medium = ThermoCycle.Media.R600a_CP,
    UseNom=false,
    t_init=30,
    constinit=false,
    Xopen=1,
    Mdot_nom=0.0003,
    Afull=1.08e-8,
    p_nom=600000,
    DELTAp_nom=540000) annotation (Placement(transformation(
        extent={{-10,10},{10,-10}},
        rotation=-90,
        origin={-86,-4})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall DischargeLinewall(
    c_wall=500,
    steadystate_T_wall=true,
    Aext=0.0179,
    Aint=0.0126,
    M_wall=0.085,
    N=10,
    Tstart_wall_1=333.15,
    Tstart_wall_end=323.15)
    annotation (Placement(transformation(extent={{4,60},{20,44}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance thermalResistance(
    A=0.0179,
    N=10,
    U=18)
         annotation (Placement(transformation(extent={{8,60},{16,66}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T source_T(N=10)
    annotation (Placement(transformation(extent={{6,68},{18,80}})));
  Modelica.Blocks.Sources.Constant const5(k=32 + 273.15)
    annotation (Placement(transformation(extent={{4,-4},{-4,4}},
        rotation=90,
        origin={12,86})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall DischargeTubeWall(
    c_wall=500,
    steadystate_T_wall=true,
    Aext=0.0131,
    Aint=0.0111,
    M_wall=0.049,
    N=10,
    Tstart_wall_1=333.15,
    Tstart_wall_end=323.15)
    annotation (Placement(transformation(extent={{42,60},{58,44}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance thermalResistance2(
    A=0.0131,
    U=90,
    N=10)
         annotation (Placement(transformation(extent={{46,60},{54,66}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T source_T1(N=10)
    annotation (Placement(transformation(extent={{44,68},{56,80}})));
  Modelica.Blocks.Sources.Constant const1(k=50 + 273.15)
    annotation (Placement(transformation(extent={{4,-4},{-4,4}},
        rotation=90,
        origin={50,86})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall CondenserWall(
    c_wall=500,
    steadystate_T_wall=true,
    M_wall=1.57,
    N=30,
    Aint=0.112,
    Aext=0.448,
    Tstart_wall_1=333.15,
    Tstart_wall_end=323.15)
    annotation (Placement(transformation(extent={{-36,60},{-20,44}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance CondenserExternalResistance(
    N=30,
    A=0.448,
    U=16) annotation (Placement(transformation(extent={{-32,60},{-24,66}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T source_T2(N=30)
    annotation (Placement(transformation(extent={{-34,68},{-22,80}})));
  Modelica.Blocks.Sources.Constant const2(k=32 + 273.15)
    annotation (Placement(transformation(extent={{4,-4},{-4,4}},
        rotation=90,
        origin={-28,86})));

  Components.Flow1DimInc_Modified DischargeTube(
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    A=0.0111,
    V=0.0000329,
    Unom=100,
    redeclare model Flow1DimIncHeatTransferModel =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    N=10,
    Mdotnom=0.000259,
    redeclare package Medium = Media.R600a_CP_Smooth,
    pstart=600000,
    Tstart_inlet=363.15,
    Tstart_outlet=343.15)
    annotation (Placement(transformation(extent={{62,26},{38,50}})));

  Components.Flow1DimInc_Modified DischargeLine(
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    A=0.0126,
    V=0.0000105,
    redeclare model Flow1DimIncHeatTransferModel =
        ThermoCycle.Components.HeatFlow.HeatTransfer.Constant,
    N=10,
    Mdotnom=0.000259,
    Unom=240,
    redeclare package Medium = Media.R600a_CP_Smooth,
    pstart=600000,
    Tstart_inlet=343.15,
    Tstart_outlet=333.15)
    annotation (Placement(transformation(extent={{24,26},{0,50}})));

  Modelica.Blocks.Sources.Constant const4(k=32 + 273.15)
    annotation (Placement(transformation(extent={{-4,-4},{4,4}},
        rotation=-90,
        origin={-10,6})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall EvaporatorWall(
    c_wall=500,
    steadystate_T_wall=true,
    Aext=0.911,
    Aint=0.088,
    M_wall=1.09,
    N=20,
    Tstart_wall_1=250.15,
    Tstart_wall_end=253.15)
    annotation (Placement(transformation(extent={{-58,-30},{-42,-46}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance EvaporatorExternalResistance(
    A=0.911,
    U=10,
    N=20) annotation (Placement(transformation(extent={{-54,-32},{-46,-26}})));

  ThermoCycle.Components.Units.ExpansionAndCompressionMachines.ElectricDrive
    electricDrive(f(start=50), Np=1) annotation (Placement(transformation(
        extent={{-10,-10},{10,10}},
        rotation=-90,
        origin={52,-32})));
  Components.Compressor compressor(
    V_s=5.96e-6,
    epsilon_start=1.0,
    h_ex_start=709127.1229,
    epsilon_v_start=0.3,
    redeclare package Medium = Media.R600a_CP_Smooth,
    p_su_start=59000,
    p_ex_start=600000,
    T_su_start=302.15)
    annotation (Placement(transformation(extent={{46,-12},{70,12}})));
  Modelica.Blocks.Sources.Constant const3(k=32 + 273.15)
    annotation (Placement(transformation(extent={{4,-4},{-4,4}},
        rotation=90,
        origin={-50,20})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall RefrigeratedCompartment(
    steadystate_T_wall=true,
    Aext=0.911,
    Aint=0.911,
    c_wall=2000,
    M_wall=3,
    N=20,
    Tstart_wall_1=259.15,
    Tstart_wall_end=259.15)
    annotation (Placement(transformation(extent={{-58,-10},{-42,-26}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T source_T3(N=20)
    annotation (Placement(transformation(extent={{-56,0},{-44,12}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance AirExternalEnvResistance(
    A=0.911,
    N=20,
    U=1.2)
         annotation (Placement(transformation(extent={{-54,-10},{-46,-4}})));
  Modelica.Blocks.Sources.Trapezoid trapezoid(
    offset=50,
    width=600,
    period=3000,
    startTime=10000,
    amplitude=-49.95,
    rising=0) annotation (Placement(transformation(extent={{48,-56},{56,-48}})));

  ThermoCycle.Components.HeatFlow.Sources.Source_T ExternalEnv(N=20)
    annotation (Placement(transformation(extent={{-20,-22},{0,-2}})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall SuctionLineWall(
    c_wall=500,
    steadystate_T_wall=true,
    Aext=0.0347,
    Aint=0.0286,
    M_wall=0.174,
    N=20,
    Tstart_wall_1=293.15,
    Tstart_wall_end=303.15)
    annotation (Placement(transformation(extent={{-18,-30},{-2,-46}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance SuctionLineExternalResistance(
    A=0.0347,
    N=20,
    U=70)     annotation (Placement(transformation(extent={{-14,-30},{-6,-24}})));
  Components.Flow1Dim_Modified_YesVoidFraction Condenser(
    redeclare model Flow1DimHeatTransferModel =
        ThermoCycle.Components.HeatFlow.HeatTransfer.MassFlowDependence,
    Mdotnom=0.000259,
    Unom_v=232,
    Unom_l=110,
    N=30,
    redeclare package Medium = Media.R600a_CP_Smooth,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    A=0.112,
    V=0.000112,
    D=0.00334,
    Unom_tp=1500,
    steadystate=true,
    voidFractionChoice=3,
    clvf=1,
    UseVoidFractionModel=true,
    pstart=600000,
    Tstart_inlet=323.15,
    Tstart_outlet=313.15,
    voidFractionDerivatives=false)
    annotation (Placement(transformation(extent={{-14,26},{-38,50}})));
  Components.Flow1Dim_Modified_YesVoidFraction Evaporator(
    A=0.088,
    V=0.000145,
    Mdotnom=0.000259,
    redeclare model Flow1DimHeatTransferModel =
        ThermoCycle.Components.HeatFlow.HeatTransfer.MassFlowDependence,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    redeclare package Medium = Media.R600a_CP_Smooth,
    D=0.0066,
    Unom_l=340,
    Unom_v=340,
    N=20,
    steadystate=true,
    voidFractionChoice=3,
    clvf=2.5,
    Unom_tp=2500,
    UseVoidFractionModel=true,
    pstart=59000,
    Tstart_inlet=249.15,
    Tstart_outlet=251.15,
    voidFractionDerivatives=false)
    annotation (Placement(transformation(extent={{-62,-66},{-38,-42}})));
  Components.Flow1Dim_Modified_YesVoidFraction SuctionLine(
    Mdotnom=0.000259,
    redeclare package Medium = Media.R600a_CP_Smooth,
    A=0.0286,
    V=0.0000472,
    redeclare model Flow1DimHeatTransferModel =
        ThermoCycle.Components.HeatFlow.HeatTransfer.MassFlowDependence,
    Discretization=ThermoCycle.Functions.Enumerations.Discretizations.upwind_AllowFlowReversal,
    D=0.0066,
    N=20,
    steadystate=true,
    voidFractionChoice=3,
    clvf=1,
    Unom_l=100,
    Unom_tp=100,
    Unom_v=100,
    UseVoidFractionModel=true,
    pstart=59000,
    Tstart_inlet=293.15,
    Tstart_outlet=303.15,
    voidFractionDerivatives=false)
    annotation (Placement(transformation(extent={{-22,-66},{2,-42}})));
equation
  M_total = Condenser.M_tot +
            Evaporator.M_tot +
            SuctionLine.M_tot +
            DischargeTube.M_tot +
            DischargeLine.M_tot;
  connect(thermalResistance.port2, DischargeLinewall.Wall_ext) annotation (
      Line(points={{12,62.7},{12,54.4},{11.84,54.4}},
                                                   color={255,0,0}));
  connect(source_T.thermalPort, thermalResistance.port1) annotation (Line(
        points={{11.94,71.54},{11.94,64.77},{12,64.77},{12,63.9}}, color={255,
          0,0}));
  connect(const5.y, source_T.Temperature) annotation (Line(points={{12,81.6},
          {11.75,81.6},{11.75,76.4},{12,76.4}},
                                              color={0,0,127}));
  connect(thermalResistance2.port2, DischargeTubeWall.Wall_ext) annotation (
      Line(points={{50,62.7},{50,54.4},{49.84,54.4}}, color={255,0,0}));
  connect(source_T1.thermalPort, thermalResistance2.port1) annotation (Line(
        points={{49.94,71.54},{49.94,64.77},{50,64.77},{50,63.9}}, color={255,
          0,0}));
  connect(const1.y, source_T1.Temperature) annotation (Line(points={{50,81.6},
          {49.75,81.6},{49.75,76.4},{50,76.4}}, color={0,0,127}));
  connect(CondenserExternalResistance.port2, CondenserWall.Wall_ext)
    annotation (Line(points={{-28,62.7},{-28,54.4},{-28.16,54.4}}, color={255,
          0,0}));
  connect(source_T2.thermalPort, CondenserExternalResistance.port1)
    annotation (Line(points={{-28.06,71.54},{-28.06,64.77},{-28,64.77},{-28,
          63.9}}, color={255,0,0}));
  connect(const2.y, source_T2.Temperature) annotation (Line(points={{-28,81.6},
          {-28.25,81.6},{-28.25,76.4},{-28,76.4}}, color={0,0,127}));
  connect(DischargeTubeWall.Wall_int, DischargeTube.Wall_int)
    annotation (Line(points={{50,49.6},{50,43}}, color={255,0,0}));
  connect(DischargeLine.InFlow, DischargeTube.OutFlow)
    annotation (Line(points={{22,38},{40,38},{40,38.1}}, color={0,0,255}));
  connect(DischargeLinewall.Wall_int, DischargeLine.Wall_int)
    annotation (Line(points={{12,49.6},{12,43}},
                                               color={255,0,0}));
  connect(EvaporatorExternalResistance.port2, EvaporatorWall.Wall_ext)
    annotation (Line(points={{-50,-29.3},{-50,-35.6},{-50.16,-35.6}}, color={
          255,0,0}));
  connect(compressor.flange_elc,electricDrive. shaft) annotation (Line(points={{66,0},{
          78,0},{78,-23.4},{52,-23.4}},         color={0,0,0}));
  connect(compressor.OutFlow, DischargeTube.InFlow) annotation (Line(points={{66.6,-4},
          {78,-4},{78,38},{60,38}},              color={0,0,255}));
  connect(RefrigeratedCompartment.Wall_int, EvaporatorExternalResistance.port1)
    annotation (Line(points={{-50,-20.4},{-50,-28.1}}, color={255,0,0}));
  connect(RefrigeratedCompartment.Wall_ext, AirExternalEnvResistance.port2)
    annotation (Line(points={{-50.16,-15.6},{-50.16,-7.3},{-50,-7.3}},
        color={255,0,0}));
  connect(AirExternalEnvResistance.port1, source_T3.thermalPort) annotation (
      Line(points={{-50,-6.1},{-50,3.54},{-50.06,3.54}},      color={255,0,0}));
  connect(const3.y, source_T3.Temperature)
    annotation (Line(points={{-50,15.6},{-50,8.4}},   color={0,0,127}));
  connect(trapezoid.y, electricDrive.f) annotation (Line(points={{56.4,-52},{
          78,-52},{78,-32.4},{61.4,-32.4}},
                                         color={0,0,127}));
  connect(SuctionLineWall.Wall_ext, SuctionLineExternalResistance.port2)
    annotation (Line(points={{-10.16,-35.6},{-10.16,-31.8},{-10,-31.8},{-10,
          -27.3}},
        color={255,0,0}));
  connect(ExternalEnv.thermalPort, SuctionLineExternalResistance.port1)
    annotation (Line(points={{-10.1,-16.1},{-10.1,-21.05},{-10,-21.05},{-10,
          -26.1}},
        color={255,0,0}));
  connect(const4.y, ExternalEnv.Temperature)
    annotation (Line(points={{-10,1.6},{-10,-3.2},{-10,-8}},
                                                           color={0,0,127}));
initial equation
//           M_total_init = Condenser.M_tot +
//                   Evaporator.M_tot +
//                   SuctionLine.M_tot +
//                   DischargeTube.M_tot +
//                   DischargeLine.M_tot;

equation
  connect(Condenser.Wall_int, CondenserWall.Wall_int)
    annotation (Line(points={{-26,43},{-26,46},{-28,46},{-28,49.6}},
                                                   color={255,0,0}));
  connect(Condenser.InFlow, DischargeLine.OutFlow)
    annotation (Line(points={{-16,38},{2,38},{2,38.1}}, color={0,0,255}));
  connect(Condenser.OutFlow, valve.InFlow) annotation (Line(points={{-36,38.1},
          {-62,38.1},{-62,38},{-86,38},{-86,5}},        color={0,0,255}));
  connect(Evaporator.Wall_int, EvaporatorWall.Wall_int) annotation (Line(points={{-50,-49},
          {-50,-40.4}},                       color={255,0,0}));
  connect(SuctionLine.Wall_int, SuctionLineWall.Wall_int)
    annotation (Line(points={{-10,-49},{-10,-40.4}},       color={255,0,0}));
  connect(Evaporator.OutFlow, SuctionLine.InFlow) annotation (Line(points={{-40,
          -53.9},{-31,-53.9},{-31,-54},{-20,-54}},color={0,0,255}));
  connect(valve.OutFlow, Evaporator.InFlow) annotation (Line(points={{-86,-13},
          {-86,-13},{-86,-54},{-60,-54}},color={0,0,255}));
  connect(SuctionLine.OutFlow, compressor.InFlow) annotation (Line(points={{0,-53.9},
          {18,-53.9},{18,7.8},{51.2,7.8}},     color={0,0,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end Complete_YesVoidFraction;
