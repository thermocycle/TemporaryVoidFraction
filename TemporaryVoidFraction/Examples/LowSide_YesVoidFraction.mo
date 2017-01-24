within TemporaryVoidFraction.Examples;
model LowSide_YesVoidFraction

  parameter Modelica.SIunits.Mass M_total_init=0.030 "total refrigerant mass in cycle";
  Modelica.SIunits.Mass M_total "total refrigerant mass in cycle";

  Modelica.Blocks.Sources.Constant const4(k=32 + 273.15)
    annotation (Placement(transformation(extent={{-4,-4},{4,4}},
        rotation=-90,
        origin={24,36})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall EvaporatorWall(
    c_wall=500,
    steadystate_T_wall=true,
    Aext=0.911,
    Aint=0.088,
    M_wall=1.09,
    N=20,
    Tstart_wall_1=250.15,
    Tstart_wall_end=253.15)
    annotation (Placement(transformation(extent={{-24,0},{-8,-16}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance EvaporatorExternalResistance(
    A=0.911,
    U=10,
    N=20) annotation (Placement(transformation(extent={{-20,-2},{-12,4}})));

  Modelica.Blocks.Sources.Constant const3(k=32 + 273.15)
    annotation (Placement(transformation(extent={{4,-4},{-4,4}},
        rotation=90,
        origin={-16,50})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall RefrigeratedCompartment(
    steadystate_T_wall=true,
    Aext=0.911,
    Aint=0.911,
    c_wall=2000,
    M_wall=3,
    N=20,
    Tstart_wall_1=259.15,
    Tstart_wall_end=259.15)
    annotation (Placement(transformation(extent={{-24,20},{-8,4}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T source_T3(N=20)
    annotation (Placement(transformation(extent={{-22,30},{-10,42}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance AirExternalEnvResistance(
    A=0.911,
    N=20,
    U=1.2)
         annotation (Placement(transformation(extent={{-20,20},{-12,26}})));

  ThermoCycle.Components.HeatFlow.Sources.Source_T ExternalEnv(N=20)
    annotation (Placement(transformation(extent={{14,8},{34,28}})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall SuctionLineWall(
    c_wall=500,
    steadystate_T_wall=true,
    Aext=0.0347,
    Aint=0.0286,
    M_wall=0.174,
    N=20,
    Tstart_wall_1=293.15,
    Tstart_wall_end=303.15)
    annotation (Placement(transformation(extent={{16,0},{32,-16}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance SuctionLineExternalResistance(
    A=0.0347,
    N=20,
    U=70)     annotation (Placement(transformation(extent={{20,0},{28,6}})));
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
    Unom_tp=2500,
    UseVoidFractionModel=true,
    voidFractionDerivatives=true,
    voidFractionChoice=3,
    pstart=59000,
    Tstart_inlet=249.15,
    Tstart_outlet=251.15,
    clvf=4)
    annotation (Placement(transformation(extent={{-28,-36},{-4,-12}})));
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
    Unom_l=100,
    Unom_tp=100,
    Unom_v=100,
    UseVoidFractionModel=true,
    voidFractionDerivatives=true,
    voidFractionChoice=3,
    pstart=59000,
    Tstart_inlet=293.15,
    Tstart_outlet=303.15,
    clvf=4)
    annotation (Placement(transformation(extent={{12,-36},{36,-12}})));
  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP sinkP(redeclare package
      Medium = Media.R600a_CP_Smooth, p0=59075)
    annotation (Placement(transformation(extent={{-6,-6},{6,6}},
        rotation=90,
        origin={52,10})));
  ThermoCycle.Components.FluidFlow.Reservoirs.SourceMdot sourceMdot(
    Mdot_0=0.0003,
    redeclare package Medium = Media.R600a_CP_Smooth,
    UseT=false,
    p=59075)
    annotation (Placement(transformation(extent={{-62,-34},{-42,-14}})));
  Modelica.Blocks.Sources.Constant const(k=0.000258508)
    annotation (Placement(transformation(extent={{-78,20},{-66,8}})));
  Modelica.Blocks.Sources.Constant const1(k=301389.2349)
    annotation (Placement(transformation(extent={{6,6},{-6,-6}},
        rotation=90,
        origin={-46,14})));
equation
  M_total = Evaporator.M_tot +
            SuctionLine.M_tot;
  connect(EvaporatorExternalResistance.port2, EvaporatorWall.Wall_ext)
    annotation (Line(points={{-16,0.7},{-16,-5.6},{-16.16,-5.6}},     color={
          255,0,0}));
  connect(RefrigeratedCompartment.Wall_int, EvaporatorExternalResistance.port1)
    annotation (Line(points={{-16,9.6},{-16,1.9}},     color={255,0,0}));
  connect(RefrigeratedCompartment.Wall_ext, AirExternalEnvResistance.port2)
    annotation (Line(points={{-16.16,14.4},{-16.16,22.7},{-16,22.7}},
        color={255,0,0}));
  connect(AirExternalEnvResistance.port1, source_T3.thermalPort) annotation (
      Line(points={{-16,23.9},{-16,33.54},{-16.06,33.54}},    color={255,0,0}));
  connect(const3.y, source_T3.Temperature)
    annotation (Line(points={{-16,45.6},{-16,38.4}},  color={0,0,127}));
  connect(SuctionLineWall.Wall_ext, SuctionLineExternalResistance.port2)
    annotation (Line(points={{23.84,-5.6},{23.84,-1.8},{24,-1.8},{24,2.7}},
        color={255,0,0}));
  connect(ExternalEnv.thermalPort, SuctionLineExternalResistance.port1)
    annotation (Line(points={{23.9,13.9},{23.9,8.95},{24,8.95},{24,3.9}},
        color={255,0,0}));
  connect(const4.y, ExternalEnv.Temperature)
    annotation (Line(points={{24,31.6},{24,26.8},{24,22}}, color={0,0,127}));
initial equation
//           M_total_init = Evaporator.M_tot +
//                   SuctionLine.M_tot +

equation
  connect(Evaporator.Wall_int, EvaporatorWall.Wall_int) annotation (Line(points={{-16,-19},
          {-16,-10.4}},                       color={255,0,0}));
  connect(SuctionLine.Wall_int, SuctionLineWall.Wall_int)
    annotation (Line(points={{24,-19},{24,-10.4}},         color={255,0,0}));
  connect(Evaporator.OutFlow, SuctionLine.InFlow) annotation (Line(points={{-6,-23.9},
          {3,-23.9},{3,-24},{14,-24}},            color={0,0,255}));
  connect(SuctionLine.OutFlow, sinkP.flangeB) annotation (Line(points={{34,-23.9},
          {52,-23.9},{52,4.96}}, color={0,0,255}));
  connect(const.y,sourceMdot. in_Mdot) annotation (Line(points={{-65.4,14},{-58,
          14},{-58,-18}},  color={0,0,127}));
  connect(sourceMdot.in_h,const1. y) annotation (Line(points={{-46,-18},{-46,-18},
          {-46,7.4}},             color={0,0,127}));
  connect(sourceMdot.flangeB, Evaporator.InFlow)
    annotation (Line(points={{-43,-24},{-26,-24}}, color={0,0,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end LowSide_YesVoidFraction;
