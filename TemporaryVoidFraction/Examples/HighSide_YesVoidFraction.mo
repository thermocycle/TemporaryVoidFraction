within TemporaryVoidFraction.Examples;
model HighSide_YesVoidFraction

  parameter Modelica.SIunits.Mass M_total_init=0.030 "total refrigerant mass in cycle";
  Modelica.SIunits.Mass M_total "total refrigerant mass in cycle";

  ThermoCycle.Components.HeatFlow.Walls.MetalWall DischargeLinewall(
    c_wall=500,
    steadystate_T_wall=true,
    Aext=0.0179,
    Aint=0.0126,
    M_wall=0.085,
    N=10,
    Tstart_wall_1=333.15,
    Tstart_wall_end=323.15)
    annotation (Placement(transformation(extent={{-4,14},{12,-2}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance thermalResistance(
    A=0.0179,
    N=10,
    U=18)
         annotation (Placement(transformation(extent={{0,14},{8,20}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T source_T(N=10)
    annotation (Placement(transformation(extent={{-2,22},{10,34}})));
  Modelica.Blocks.Sources.Constant const5(k=32 + 273.15)
    annotation (Placement(transformation(extent={{4,-4},{-4,4}},
        rotation=90,
        origin={4,40})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall DischargeTubeWall(
    c_wall=500,
    steadystate_T_wall=true,
    Aext=0.0131,
    Aint=0.0111,
    M_wall=0.049,
    N=10,
    Tstart_wall_1=333.15,
    Tstart_wall_end=323.15)
    annotation (Placement(transformation(extent={{34,14},{50,-2}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance thermalResistance2(
    A=0.0131,
    U=90,
    N=10)
         annotation (Placement(transformation(extent={{38,14},{46,20}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T source_T1(N=10)
    annotation (Placement(transformation(extent={{36,22},{48,34}})));
  Modelica.Blocks.Sources.Constant const1(k=50 + 273.15)
    annotation (Placement(transformation(extent={{4,-4},{-4,4}},
        rotation=90,
        origin={42,40})));
  ThermoCycle.Components.HeatFlow.Walls.MetalWall CondenserWall(
    c_wall=500,
    steadystate_T_wall=true,
    M_wall=1.57,
    N=30,
    Aint=0.112,
    Aext=0.448,
    Tstart_wall_1=333.15,
    Tstart_wall_end=323.15)
    annotation (Placement(transformation(extent={{-44,14},{-28,-2}})));
  ThermoCycle.Components.HeatFlow.Walls.ThermalResistance CondenserExternalResistance(
    N=30,
    A=0.448,
    U=16) annotation (Placement(transformation(extent={{-40,14},{-32,20}})));
  ThermoCycle.Components.HeatFlow.Sources.Source_T source_T2(N=30)
    annotation (Placement(transformation(extent={{-42,22},{-30,34}})));
  Modelica.Blocks.Sources.Constant const2(k=32 + 273.15)
    annotation (Placement(transformation(extent={{4,-4},{-4,4}},
        rotation=90,
        origin={-36,40})));

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
    annotation (Placement(transformation(extent={{54,-20},{30,4}})));

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
    annotation (Placement(transformation(extent={{16,-20},{-8,4}})));

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
    UseVoidFractionModel=true,
    voidFractionDerivatives=true,
    voidFractionChoice=3,
    pstart=600000,
    Tstart_inlet=323.15,
    Tstart_outlet=313.15,
    clvf=4)
    annotation (Placement(transformation(extent={{-24,-20},{-48,4}})));
  ThermoCycle.Components.FluidFlow.Reservoirs.SinkP sinkP(redeclare package
      Medium = Media.R600a_CP_Smooth, p0=604449)
    annotation (Placement(transformation(extent={{-6,-6},{6,6}},
        rotation=0,
        origin={-36,-46})));
  ThermoCycle.Components.FluidFlow.Reservoirs.SourceMdot sourceMdot(
    Mdot_0=0.0003,
    redeclare package Medium = Media.R600a_CP_Smooth,
    UseT=false,
    p=59075)
    annotation (Placement(transformation(extent={{32,-14},{52,-34}})));
  Modelica.Blocks.Sources.Constant const(k=0.000258508)
    annotation (Placement(transformation(extent={{16,-52},{28,-40}})));
  Modelica.Blocks.Sources.Constant const3(k=702898.7755)
    annotation (Placement(transformation(extent={{66,-52},{54,-40}})));
equation
  M_total = Condenser.M_tot +
            DischargeTube.M_tot +
            DischargeLine.M_tot;
  connect(thermalResistance.port2, DischargeLinewall.Wall_ext) annotation (
      Line(points={{4,16.7},{4,8.4},{3.84,8.4}},   color={255,0,0}));
  connect(source_T.thermalPort, thermalResistance.port1) annotation (Line(
        points={{3.94,25.54},{3.94,18.77},{4,18.77},{4,17.9}},     color={255,
          0,0}));
  connect(const5.y, source_T.Temperature) annotation (Line(points={{4,35.6},{3.75,
          35.6},{3.75,30.4},{4,30.4}},        color={0,0,127}));
  connect(thermalResistance2.port2, DischargeTubeWall.Wall_ext) annotation (
      Line(points={{42,16.7},{42,8.4},{41.84,8.4}},   color={255,0,0}));
  connect(source_T1.thermalPort, thermalResistance2.port1) annotation (Line(
        points={{41.94,25.54},{41.94,18.77},{42,18.77},{42,17.9}}, color={255,
          0,0}));
  connect(const1.y, source_T1.Temperature) annotation (Line(points={{42,35.6},{41.75,
          35.6},{41.75,30.4},{42,30.4}},        color={0,0,127}));
  connect(CondenserExternalResistance.port2, CondenserWall.Wall_ext)
    annotation (Line(points={{-36,16.7},{-36,8.4},{-36.16,8.4}},   color={255,
          0,0}));
  connect(source_T2.thermalPort, CondenserExternalResistance.port1)
    annotation (Line(points={{-36.06,25.54},{-36.06,18.77},{-36,18.77},{-36,17.9}},
                  color={255,0,0}));
  connect(const2.y, source_T2.Temperature) annotation (Line(points={{-36,35.6},{
          -36.25,35.6},{-36.25,30.4},{-36,30.4}},  color={0,0,127}));
  connect(DischargeTubeWall.Wall_int, DischargeTube.Wall_int)
    annotation (Line(points={{42,3.6},{42,-3}},  color={255,0,0}));
  connect(DischargeLine.InFlow, DischargeTube.OutFlow)
    annotation (Line(points={{14,-8},{32,-8},{32,-7.9}}, color={0,0,255}));
  connect(DischargeLinewall.Wall_int, DischargeLine.Wall_int)
    annotation (Line(points={{4,3.6},{4,-3}},  color={255,0,0}));
initial equation
//           M_total_init = Condenser.M_tot +
//                   DischargeTube.M_tot +
//                   DischargeLine.M_tot;

equation
  connect(Condenser.Wall_int, CondenserWall.Wall_int)
    annotation (Line(points={{-36,-3},{-36,3.6}},  color={255,0,0}));
  connect(Condenser.InFlow, DischargeLine.OutFlow)
    annotation (Line(points={{-26,-8},{-6,-8},{-6,-7.9}},
                                                        color={0,0,255}));
  connect(Condenser.OutFlow, sinkP.flangeB) annotation (Line(points={{-46,-7.9},
          {-64,-7.9},{-64,-46},{-41.04,-46}}, color={0,0,255}));
  connect(const.y,sourceMdot. in_Mdot) annotation (Line(points={{28.6,-46},{36,-46},
          {36,-30}},       color={0,0,127}));
  connect(sourceMdot.in_h,const3. y) annotation (Line(points={{48,-30},{48,-30},
          {48,-46},{53.4,-46}},   color={0,0,127}));
  connect(sourceMdot.flangeB, DischargeTube.InFlow) annotation (Line(points={{51,-24},
          {51,-24},{76,-24},{76,-8},{52,-8}},   color={0,0,255}));
  annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
        coordinateSystem(preserveAspectRatio=false)));
end HighSide_YesVoidFraction;
