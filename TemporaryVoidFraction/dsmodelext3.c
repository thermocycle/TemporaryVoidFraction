#include <moutil.c>
PreNonAliasDef(16)
PreNonAliasDef(17)
PreNonAliasDef(18)
PreNonAliasDef(19)
PreNonAliasDef(20)
StartNonAlias(15)
DeclareVariable("SuctionLine.Cells[11].fluidState.kappa", "compressibility [1/Pa]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidState.lambda", "thermal conductivity [W/(m.K)]",\
 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidState.p", "pressure [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidState.phase", "phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]",\
 0, 0.0,2.0,0.0,0,708)
DeclareVariable("SuctionLine.Cells[11].fluidState.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareAlias2("SuctionLine.Cells[11].sat.Tsat", "saturation temperature [K|degC]",\
 "SuctionLine.sat.Tsat", 1, 5, 10740, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.dTp", "derivative of Ts wrt pressure", \
"SuctionLine.sat.dTp", 1, 5, 10741, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.ddldp", "derivative of dls wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddldp", 1, 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.ddvdp", "derivative of dvs wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddvdp", 1, 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.dhldp", "derivative of hls wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhldp", 1, 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.dhvdp", "derivative of hvs wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhvdp", 1, 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.dl", "density at bubble line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dl", 1, 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.dv", "density at dew line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dv", 1, 5, 10747, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.hl", "specific enthalpy at bubble line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hl", 1, 5, 10748, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.hv", "specific enthalpy at dew line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hv", 1, 5, 10749, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.psat", "saturation pressure [Pa|bar]", \
"SuctionLine.sat.psat", 1, 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.sigma", "surface tension [N/m]", \
"SuctionLine.sat.sigma", 1, 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.sl", "specific entropy at bubble line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sl", 1, 5, 10752, 0)
DeclareAlias2("SuctionLine.Cells[11].sat.sv", "specific entropy at dew line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sv", 1, 5, 10753, 0)
DeclareAlias2("SuctionLine.Cells[11].p", "[Pa|bar]", "Evaporator.Cells[1].InFlow.p", 1,\
 5, 7055, 0)
DeclareAlias2("SuctionLine.Cells[11].der(p)", "[Pa/s]", "Evaporator.Cells[1].der(p)", 1,\
 6, 162, 0)
DeclareAlias2("SuctionLine.Cells[11].M_dot_su", "[kg/s]", "SuctionLine.Summary.Mdot[11]", 1,\
 5, 10657, 0)
DeclareVariable("SuctionLine.Cells[11].M_dot_ex", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("SuctionLine.Cells[11].h", "Fluid specific enthalpy at the cells [J/kg]",\
 193, 0.0, -10000000000.0,10000000000.0,1000000.0,0,544)
DeclareDerivative("SuctionLine.Cells[11].der(h)", "der(Fluid specific enthalpy at the cells) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[11].T", "Fluid temperature [K|degC]", \
"SuctionLine.Cells[11].fluidState.T", 1, 5, 12599, 0)
DeclareAlias2("SuctionLine.Cells[11].rho", "Fluid cell density [kg/m3|g/cm3]", \
"SuctionLine.Summary.rho[11]", 1, 5, 10638, 0)
DeclareAlias2("SuctionLine.Cells[11].drdh", "Derivative of density by enthalpy [kg.s2/m5]",\
 "SuctionLine.Cells[11].fluidState.ddhp", 1, 5, 12605, 0)
DeclareAlias2("SuctionLine.Cells[11].drdp", "Derivative of density by pressure [s2/m2]",\
 "SuctionLine.Cells[11].fluidState.ddph", 1, 5, 12606, 0)
DeclareAlias2("SuctionLine.Cells[11].hnode_su", "Enthalpy state variable at inlet node [J/kg]",\
 "SuctionLine.Summary.hnode[11]", 1, 5, 10618, 0)
DeclareAlias2("SuctionLine.Cells[11].hnode_ex", "Enthalpy state variable at outlet node [J/kg]",\
 "SuctionLine.Cells[11].OutFlow.h_outflow", 1, 5, 12570, 0)
DeclareVariable("SuctionLine.Cells[11].dMdt", "Time derivative of mass in cell [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[11].qdot", "heat flux at each cell [W/m2]", \
"SuctionLineWall.Wall_int.phi[11]", -1, 5, 1351, 0)
DeclareAlias2("SuctionLine.Cells[11].x", "Vapor quality [1]", "SuctionLine.Summary.x[11]", 1,\
 5, 10677, 0)
DeclareAlias2("SuctionLine.Cells[11].h_l", "[J/kg]", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[11].h_v", "[J/kg]", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareVariable("SuctionLine.Cells[11].Q_tot", "Total heat flux exchanged by the thermal port [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].M_tot", "Total mass of the fluid in the component [kg]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[11].alpha", "[1]", "SuctionLine.Summary.alpha[11]", 1,\
 5, 10696, 0)
DeclareAlias2("SuctionLine.Cells[11].rho_l", "[kg/m3|g/cm3]", "SuctionLine.sat.dl", 1,\
 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[11].rho_v", "[kg/m3|g/cm3]", "SuctionLine.sat.dv", 1,\
 5, 10747, 0)
DeclareVariable("SuctionLine.Cells[11].mu_l", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].mu_v", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].G", "Mass Flow rate per unit of area [Pa.m-1.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[11].drvdp", "Derivative of density of dewpoint by pressure [s2/m2]",\
 "SuctionLine.Cells[11].fluidStateDewPoint.ddph", 1, 5, 12628, 0)
DeclareAlias2("SuctionLine.Cells[11].drldp", "Derivative of density of bublepoint by pressure [s2/m2]",\
 "SuctionLine.Cells[11].fluidStateBubblePoint.ddph", 1, 5, 12643, 0)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.T", "temperature [K|degC]",\
 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.d", "density [kg/m3|g/cm3]",\
 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.p", "pressure [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[11].fluidStateDewPoint.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[11].fluidStateBubblePoint.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].dalphadp_h", "Derivative of the void fraction with respect to pressure at constant enthalpy [N.kg-2.s4]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].dalphadh_p", "Derivative of the void fraction with respect to enthalpy at constant pressure [s2/m2]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateB_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].sat_fluidStateA_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].deltaP", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[11].fluidStateB_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[11].fluidStateA_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[11].deltaH", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[12].InFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "SuctionLine.Cells[11].OutFlow.m_flow", -1, 5, 12569, 132)
DeclareAlias2("SuctionLine.Cells[12].InFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareAlias2("SuctionLine.Cells[12].InFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "SuctionLine.Summary.hnode[12]", 1, 5, 10619, 4)
DeclareVariable("SuctionLine.Cells[12].OutFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,776)
DeclareAlias2("SuctionLine.Cells[12].OutFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareVariable("SuctionLine.Cells[12].OutFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("SuctionLine.Cells[12].Wall_int.T", "Temperature [K|degC]", \
"SuctionLineWall.T_wall[12]", 1, 1, 122, 4)
DeclareAlias2("SuctionLine.Cells[12].Wall_int.phi", "Heat flux [W/m2]", \
"SuctionLineWall.Wall_int.phi[12]", -1, 5, 1352, 132)
DeclareVariable("SuctionLine.Cells[12].Nt", "Number of cells in parallel [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("SuctionLine.Cells[12].pi", "pi-greco", 3.141592653589793, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].Vi", "Volume of a single cell [m3]", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].Ai", "Lateral surface of a single cell [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].Mdotnom", "Nominal fluid flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].Unom_l", "if HTtype = LiqVap : Heat transfer coefficient, liquid zone  [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].Unom_tp", "if HTtype = LiqVap : heat transfer coefficient, two-phase zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].Unom_v", "if HTtype = LiqVap : heat transfer coefficient, vapor zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("SuctionLine.Cells[12].deltapercentage", "Percentage of absolute pressure to use in numerical derivative",\
 263, 1E-005, 0.0,0.0,0.0,0,560)
DeclareParameter("SuctionLine.Cells[12].g", "Gravity [m/s2]", 264, 9.8, 0.0,0.0,\
0.0,0,560)
DeclareVariable("SuctionLine.Cells[12].Ad", "Cross section area [m2]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].Dtube", "Cross section area [m]", 0.0, \
0.0,1E+100,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].voidFractionChoice", "1 to Homogeneus, 2 to Steiner, 3 to Premoli with clvf [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[12].clvf", "clvf to be used in Premoli model",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].voidFractionDerivatives", \
"Set to yes include void fraction derivatives in the calculation [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[12].UseVoidFractionModel", "Set to yes consider the void fraction models [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[12].pstart", "Fluid pressure start value [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].hstart", "Start value of enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,513)
DeclareVariable("SuctionLine.Cells[12].Discretization", "Selection of the spatial discretization scheme [:#(type=ThermoCycle.Functions.Enumerations.Discretizations)]",\
 4, 1.0,5.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[12].Mdotconst", "Set to yes to assume constant mass flow rate at each node (easier convergence) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[12].max_der", "Set to yes to limit the density derivative during phase transitions [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[12].filter_dMdt", "Set to yes to filter dMdt with a first-order filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[12].max_drhodt", "Maximum value for the density derivative",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].TT", "Integration time of the first-order filter [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].ComputeSat", "Can be disabled if the flow is single-phase, or if saturation is passed as a parameter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("SuctionLine.Cells[12].sat_in[1]", "", "SuctionLine.sat.ddldp", 1,\
 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[2]", "", "SuctionLine.sat.ddvdp", 1,\
 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[3]", "", "SuctionLine.sat.dhldp", 1,\
 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[4]", "", "SuctionLine.sat.dhvdp", 1,\
 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[5]", "", "SuctionLine.sat.dTp", 1, 5,\
 10741, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[6]", "", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[7]", "", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[8]", "", "SuctionLine.sat.sigma", 1,\
 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[9]", "", "SuctionLine.sat.sl", 1, 5,\
 10752, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[10]", "", "SuctionLine.sat.sv", 1, 5,\
 10753, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[11]", "", "SuctionLine.sat.dl", 1, 5,\
 10746, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[12]", "", "SuctionLine.sat.dv", 1, 5,\
 10747, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[13]", "", "SuctionLine.sat.psat", 1,\
 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[12].sat_in[14]", "", "SuctionLine.sat.Tsat", 1,\
 5, 10740, 0)
DeclareVariable("SuctionLine.Cells[12].steadystate", "if true, sets the derivative of h (working fluids enthalpy in each cell) to zero during Initialization [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[12].heatTransfer.n", "Number of heat transfer segments [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].T", \
"temperature [K|degC]", "SuctionLine.Cells[12].fluidState.T", 1, 5, 12773, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].a", \
"velocity of sound [m/s]", "SuctionLine.Cells[12].fluidState.a", 1, 5, 12774, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].beta", \
"isobaric expansion coefficient [1/K]", "SuctionLine.Cells[12].fluidState.beta", 1,\
 5, 12775, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].cp", \
"specific heat capacity cp [J/(kg.K)]", "SuctionLine.Cells[12].fluidState.cp", 1,\
 5, 12776, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].cv", \
"specific heat capacity cv [J/(kg.K)]", "SuctionLine.Cells[12].fluidState.cv", 1,\
 5, 12777, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].d", \
"density [kg/m3|g/cm3]", "SuctionLine.Cells[12].fluidState.d", 1, 5, 12778, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", \
"SuctionLine.Cells[12].fluidState.ddhp", 1, 5, 12779, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", \
"SuctionLine.Cells[12].fluidState.ddph", 1, 5, 12780, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].eta", \
"dynamic viscosity [Pa.s]", "SuctionLine.Cells[12].fluidState.eta", 1, 5, 12781,\
 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].h", \
"specific enthalpy [J/kg]", "SuctionLine.Cells[12].fluidState.h", 1, 5, 12782, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].kappa", \
"compressibility [1/Pa]", "SuctionLine.Cells[12].fluidState.kappa", 1, 5, 12783,\
 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].lambda", \
"thermal conductivity [W/(m.K)]", "SuctionLine.Cells[12].fluidState.lambda", 1, 5,\
 12784, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].p", \
"pressure [Pa|bar]", "SuctionLine.Cells[12].fluidState.p", 1, 5, 12785, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", \
"SuctionLine.Cells[12].fluidState.phase", 1, 5, 12786, 66)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.FluidState[1].s", \
"specific entropy [J/(kg.K)]", "SuctionLine.Cells[12].fluidState.s", 1, 5, 12787,\
 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.q_dot[1]", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[12]", -1, 5, 1352, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.T_fluid[1]", "Temperature of the fluid for the heat transfer process [K|degC]",\
 "SuctionLine.Cells[12].fluidState.T", 1, 5, 12773, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.thermalPortL[1].T", \
"Temperature [K|degC]", "SuctionLineWall.T_wall[12]", 1, 1, 122, 4)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.thermalPortL[1].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[12]", -1, 5, 1352, 132)
DeclareVariable("SuctionLine.Cells[12].heatTransfer.Mdotnom", "Nomnial Mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.Unom_l", "Nominal heat transfer coefficient liquid side [W/(m2.K)]",\
 "SuctionLine.Cells[12].Unom_l", 1, 5, 12750, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.Unom_tp", "nominal heat transfer coefficient two phase side [W/(m2.K)]",\
 "SuctionLine.Cells[12].Unom_tp", 1, 5, 12751, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.Unom_v", "nominal heat transfer coefficient vapor side [W/(m2.K)]",\
 "SuctionLine.Cells[12].Unom_v", 1, 5, 12752, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.M_dot", "Inlet massflow [kg/s]",\
 "SuctionLine.Summary.Mdot[12]", 1, 5, 10658, 0)
DeclareAlias2("SuctionLine.Cells[12].heatTransfer.x", "Vapor quality [1]", \
"SuctionLine.Summary.x[12]", 1, 5, 10678, 0)
DeclareVariable("SuctionLine.Cells[12].heatTransfer.Unom", "Nominal heat transfer coefficient- Average of liquid two phase and vapor [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[12].heatTransfer.U[1]", "Heat transfer coefficient [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.T", "temperature [K|degC]", \
288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.beta", "isobaric expansion coefficient [1/K]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.d", "density [kg/m3|g/cm3]", 1,\
 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.ddhp", "derivative of density wrt enthalpy at constant pressure [kg.s2/m5]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.ddph", "derivative of density wrt pressure at constant enthalpy [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.kappa", "compressibility [1/Pa]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.lambda", "thermal conductivity [W/(m.K)]",\
 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.p", "pressure [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidState.phase", "phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]",\
 0, 0.0,2.0,0.0,0,708)
DeclareVariable("SuctionLine.Cells[12].fluidState.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareAlias2("SuctionLine.Cells[12].sat.Tsat", "saturation temperature [K|degC]",\
 "SuctionLine.sat.Tsat", 1, 5, 10740, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.dTp", "derivative of Ts wrt pressure", \
"SuctionLine.sat.dTp", 1, 5, 10741, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.ddldp", "derivative of dls wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddldp", 1, 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.ddvdp", "derivative of dvs wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddvdp", 1, 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.dhldp", "derivative of hls wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhldp", 1, 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.dhvdp", "derivative of hvs wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhvdp", 1, 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.dl", "density at bubble line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dl", 1, 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.dv", "density at dew line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dv", 1, 5, 10747, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.hl", "specific enthalpy at bubble line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hl", 1, 5, 10748, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.hv", "specific enthalpy at dew line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hv", 1, 5, 10749, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.psat", "saturation pressure [Pa|bar]", \
"SuctionLine.sat.psat", 1, 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.sigma", "surface tension [N/m]", \
"SuctionLine.sat.sigma", 1, 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.sl", "specific entropy at bubble line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sl", 1, 5, 10752, 0)
DeclareAlias2("SuctionLine.Cells[12].sat.sv", "specific entropy at dew line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sv", 1, 5, 10753, 0)
DeclareAlias2("SuctionLine.Cells[12].p", "[Pa|bar]", "Evaporator.Cells[1].InFlow.p", 1,\
 5, 7055, 0)
DeclareAlias2("SuctionLine.Cells[12].der(p)", "[Pa/s]", "Evaporator.Cells[1].der(p)", 1,\
 6, 162, 0)
DeclareAlias2("SuctionLine.Cells[12].M_dot_su", "[kg/s]", "SuctionLine.Summary.Mdot[12]", 1,\
 5, 10658, 0)
DeclareVariable("SuctionLine.Cells[12].M_dot_ex", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("SuctionLine.Cells[12].h", "Fluid specific enthalpy at the cells [J/kg]",\
 194, 0.0, -10000000000.0,10000000000.0,1000000.0,0,544)
DeclareDerivative("SuctionLine.Cells[12].der(h)", "der(Fluid specific enthalpy at the cells) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[12].T", "Fluid temperature [K|degC]", \
"SuctionLine.Cells[12].fluidState.T", 1, 5, 12773, 0)
DeclareAlias2("SuctionLine.Cells[12].rho", "Fluid cell density [kg/m3|g/cm3]", \
"SuctionLine.Summary.rho[12]", 1, 5, 10639, 0)
DeclareAlias2("SuctionLine.Cells[12].drdh", "Derivative of density by enthalpy [kg.s2/m5]",\
 "SuctionLine.Cells[12].fluidState.ddhp", 1, 5, 12779, 0)
DeclareAlias2("SuctionLine.Cells[12].drdp", "Derivative of density by pressure [s2/m2]",\
 "SuctionLine.Cells[12].fluidState.ddph", 1, 5, 12780, 0)
DeclareAlias2("SuctionLine.Cells[12].hnode_su", "Enthalpy state variable at inlet node [J/kg]",\
 "SuctionLine.Summary.hnode[12]", 1, 5, 10619, 0)
DeclareAlias2("SuctionLine.Cells[12].hnode_ex", "Enthalpy state variable at outlet node [J/kg]",\
 "SuctionLine.Cells[12].OutFlow.h_outflow", 1, 5, 12744, 0)
DeclareVariable("SuctionLine.Cells[12].dMdt", "Time derivative of mass in cell [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[12].qdot", "heat flux at each cell [W/m2]", \
"SuctionLineWall.Wall_int.phi[12]", -1, 5, 1352, 0)
DeclareAlias2("SuctionLine.Cells[12].x", "Vapor quality [1]", "SuctionLine.Summary.x[12]", 1,\
 5, 10678, 0)
DeclareAlias2("SuctionLine.Cells[12].h_l", "[J/kg]", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[12].h_v", "[J/kg]", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareVariable("SuctionLine.Cells[12].Q_tot", "Total heat flux exchanged by the thermal port [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].M_tot", "Total mass of the fluid in the component [kg]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[12].alpha", "[1]", "SuctionLine.Summary.alpha[12]", 1,\
 5, 10697, 0)
DeclareAlias2("SuctionLine.Cells[12].rho_l", "[kg/m3|g/cm3]", "SuctionLine.sat.dl", 1,\
 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[12].rho_v", "[kg/m3|g/cm3]", "SuctionLine.sat.dv", 1,\
 5, 10747, 0)
DeclareVariable("SuctionLine.Cells[12].mu_l", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].mu_v", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].G", "Mass Flow rate per unit of area [Pa.m-1.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[12].drvdp", "Derivative of density of dewpoint by pressure [s2/m2]",\
 "SuctionLine.Cells[12].fluidStateDewPoint.ddph", 1, 5, 12802, 0)
DeclareAlias2("SuctionLine.Cells[12].drldp", "Derivative of density of bublepoint by pressure [s2/m2]",\
 "SuctionLine.Cells[12].fluidStateBubblePoint.ddph", 1, 5, 12817, 0)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.T", "temperature [K|degC]",\
 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.d", "density [kg/m3|g/cm3]",\
 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.p", "pressure [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[12].fluidStateDewPoint.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[12].fluidStateBubblePoint.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].dalphadp_h", "Derivative of the void fraction with respect to pressure at constant enthalpy [N.kg-2.s4]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].dalphadh_p", "Derivative of the void fraction with respect to enthalpy at constant pressure [s2/m2]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateB_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].sat_fluidStateA_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].deltaP", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[12].fluidStateB_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[12].fluidStateA_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[12].deltaH", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[13].InFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "SuctionLine.Cells[12].OutFlow.m_flow", -1, 5, 12743, 132)
DeclareAlias2("SuctionLine.Cells[13].InFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareAlias2("SuctionLine.Cells[13].InFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "SuctionLine.Summary.hnode[13]", 1, 5, 10620, 4)
DeclareVariable("SuctionLine.Cells[13].OutFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,776)
DeclareAlias2("SuctionLine.Cells[13].OutFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareVariable("SuctionLine.Cells[13].OutFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("SuctionLine.Cells[13].Wall_int.T", "Temperature [K|degC]", \
"SuctionLineWall.T_wall[13]", 1, 1, 123, 4)
DeclareAlias2("SuctionLine.Cells[13].Wall_int.phi", "Heat flux [W/m2]", \
"SuctionLineWall.Wall_int.phi[13]", -1, 5, 1353, 132)
DeclareVariable("SuctionLine.Cells[13].Nt", "Number of cells in parallel [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("SuctionLine.Cells[13].pi", "pi-greco", 3.141592653589793, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].Vi", "Volume of a single cell [m3]", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].Ai", "Lateral surface of a single cell [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].Mdotnom", "Nominal fluid flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].Unom_l", "if HTtype = LiqVap : Heat transfer coefficient, liquid zone  [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].Unom_tp", "if HTtype = LiqVap : heat transfer coefficient, two-phase zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].Unom_v", "if HTtype = LiqVap : heat transfer coefficient, vapor zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("SuctionLine.Cells[13].deltapercentage", "Percentage of absolute pressure to use in numerical derivative",\
 265, 1E-005, 0.0,0.0,0.0,0,560)
DeclareParameter("SuctionLine.Cells[13].g", "Gravity [m/s2]", 266, 9.8, 0.0,0.0,\
0.0,0,560)
DeclareVariable("SuctionLine.Cells[13].Ad", "Cross section area [m2]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].Dtube", "Cross section area [m]", 0.0, \
0.0,1E+100,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].voidFractionChoice", "1 to Homogeneus, 2 to Steiner, 3 to Premoli with clvf [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[13].clvf", "clvf to be used in Premoli model",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].voidFractionDerivatives", \
"Set to yes include void fraction derivatives in the calculation [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[13].UseVoidFractionModel", "Set to yes consider the void fraction models [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[13].pstart", "Fluid pressure start value [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].hstart", "Start value of enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,513)
DeclareVariable("SuctionLine.Cells[13].Discretization", "Selection of the spatial discretization scheme [:#(type=ThermoCycle.Functions.Enumerations.Discretizations)]",\
 4, 1.0,5.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[13].Mdotconst", "Set to yes to assume constant mass flow rate at each node (easier convergence) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[13].max_der", "Set to yes to limit the density derivative during phase transitions [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[13].filter_dMdt", "Set to yes to filter dMdt with a first-order filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[13].max_drhodt", "Maximum value for the density derivative",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].TT", "Integration time of the first-order filter [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].ComputeSat", "Can be disabled if the flow is single-phase, or if saturation is passed as a parameter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("SuctionLine.Cells[13].sat_in[1]", "", "SuctionLine.sat.ddldp", 1,\
 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[2]", "", "SuctionLine.sat.ddvdp", 1,\
 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[3]", "", "SuctionLine.sat.dhldp", 1,\
 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[4]", "", "SuctionLine.sat.dhvdp", 1,\
 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[5]", "", "SuctionLine.sat.dTp", 1, 5,\
 10741, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[6]", "", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[7]", "", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[8]", "", "SuctionLine.sat.sigma", 1,\
 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[9]", "", "SuctionLine.sat.sl", 1, 5,\
 10752, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[10]", "", "SuctionLine.sat.sv", 1, 5,\
 10753, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[11]", "", "SuctionLine.sat.dl", 1, 5,\
 10746, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[12]", "", "SuctionLine.sat.dv", 1, 5,\
 10747, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[13]", "", "SuctionLine.sat.psat", 1,\
 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[13].sat_in[14]", "", "SuctionLine.sat.Tsat", 1,\
 5, 10740, 0)
DeclareVariable("SuctionLine.Cells[13].steadystate", "if true, sets the derivative of h (working fluids enthalpy in each cell) to zero during Initialization [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[13].heatTransfer.n", "Number of heat transfer segments [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].T", \
"temperature [K|degC]", "SuctionLine.Cells[13].fluidState.T", 1, 5, 12947, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].a", \
"velocity of sound [m/s]", "SuctionLine.Cells[13].fluidState.a", 1, 5, 12948, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].beta", \
"isobaric expansion coefficient [1/K]", "SuctionLine.Cells[13].fluidState.beta", 1,\
 5, 12949, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].cp", \
"specific heat capacity cp [J/(kg.K)]", "SuctionLine.Cells[13].fluidState.cp", 1,\
 5, 12950, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].cv", \
"specific heat capacity cv [J/(kg.K)]", "SuctionLine.Cells[13].fluidState.cv", 1,\
 5, 12951, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].d", \
"density [kg/m3|g/cm3]", "SuctionLine.Cells[13].fluidState.d", 1, 5, 12952, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", \
"SuctionLine.Cells[13].fluidState.ddhp", 1, 5, 12953, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", \
"SuctionLine.Cells[13].fluidState.ddph", 1, 5, 12954, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].eta", \
"dynamic viscosity [Pa.s]", "SuctionLine.Cells[13].fluidState.eta", 1, 5, 12955,\
 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].h", \
"specific enthalpy [J/kg]", "SuctionLine.Cells[13].fluidState.h", 1, 5, 12956, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].kappa", \
"compressibility [1/Pa]", "SuctionLine.Cells[13].fluidState.kappa", 1, 5, 12957,\
 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].lambda", \
"thermal conductivity [W/(m.K)]", "SuctionLine.Cells[13].fluidState.lambda", 1, 5,\
 12958, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].p", \
"pressure [Pa|bar]", "SuctionLine.Cells[13].fluidState.p", 1, 5, 12959, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", \
"SuctionLine.Cells[13].fluidState.phase", 1, 5, 12960, 66)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.FluidState[1].s", \
"specific entropy [J/(kg.K)]", "SuctionLine.Cells[13].fluidState.s", 1, 5, 12961,\
 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.q_dot[1]", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[13]", -1, 5, 1353, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.T_fluid[1]", "Temperature of the fluid for the heat transfer process [K|degC]",\
 "SuctionLine.Cells[13].fluidState.T", 1, 5, 12947, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.thermalPortL[1].T", \
"Temperature [K|degC]", "SuctionLineWall.T_wall[13]", 1, 1, 123, 4)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.thermalPortL[1].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[13]", -1, 5, 1353, 132)
DeclareVariable("SuctionLine.Cells[13].heatTransfer.Mdotnom", "Nomnial Mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.Unom_l", "Nominal heat transfer coefficient liquid side [W/(m2.K)]",\
 "SuctionLine.Cells[13].Unom_l", 1, 5, 12924, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.Unom_tp", "nominal heat transfer coefficient two phase side [W/(m2.K)]",\
 "SuctionLine.Cells[13].Unom_tp", 1, 5, 12925, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.Unom_v", "nominal heat transfer coefficient vapor side [W/(m2.K)]",\
 "SuctionLine.Cells[13].Unom_v", 1, 5, 12926, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.M_dot", "Inlet massflow [kg/s]",\
 "SuctionLine.Summary.Mdot[13]", 1, 5, 10659, 0)
DeclareAlias2("SuctionLine.Cells[13].heatTransfer.x", "Vapor quality [1]", \
"SuctionLine.Summary.x[13]", 1, 5, 10679, 0)
DeclareVariable("SuctionLine.Cells[13].heatTransfer.Unom", "Nominal heat transfer coefficient- Average of liquid two phase and vapor [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[13].heatTransfer.U[1]", "Heat transfer coefficient [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.T", "temperature [K|degC]", \
288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.beta", "isobaric expansion coefficient [1/K]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.d", "density [kg/m3|g/cm3]", 1,\
 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.ddhp", "derivative of density wrt enthalpy at constant pressure [kg.s2/m5]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.ddph", "derivative of density wrt pressure at constant enthalpy [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.kappa", "compressibility [1/Pa]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.lambda", "thermal conductivity [W/(m.K)]",\
 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.p", "pressure [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidState.phase", "phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]",\
 0, 0.0,2.0,0.0,0,708)
DeclareVariable("SuctionLine.Cells[13].fluidState.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareAlias2("SuctionLine.Cells[13].sat.Tsat", "saturation temperature [K|degC]",\
 "SuctionLine.sat.Tsat", 1, 5, 10740, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.dTp", "derivative of Ts wrt pressure", \
"SuctionLine.sat.dTp", 1, 5, 10741, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.ddldp", "derivative of dls wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddldp", 1, 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.ddvdp", "derivative of dvs wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddvdp", 1, 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.dhldp", "derivative of hls wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhldp", 1, 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.dhvdp", "derivative of hvs wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhvdp", 1, 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.dl", "density at bubble line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dl", 1, 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.dv", "density at dew line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dv", 1, 5, 10747, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.hl", "specific enthalpy at bubble line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hl", 1, 5, 10748, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.hv", "specific enthalpy at dew line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hv", 1, 5, 10749, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.psat", "saturation pressure [Pa|bar]", \
"SuctionLine.sat.psat", 1, 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.sigma", "surface tension [N/m]", \
"SuctionLine.sat.sigma", 1, 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.sl", "specific entropy at bubble line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sl", 1, 5, 10752, 0)
DeclareAlias2("SuctionLine.Cells[13].sat.sv", "specific entropy at dew line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sv", 1, 5, 10753, 0)
DeclareAlias2("SuctionLine.Cells[13].p", "[Pa|bar]", "Evaporator.Cells[1].InFlow.p", 1,\
 5, 7055, 0)
DeclareAlias2("SuctionLine.Cells[13].der(p)", "[Pa/s]", "Evaporator.Cells[1].der(p)", 1,\
 6, 162, 0)
DeclareAlias2("SuctionLine.Cells[13].M_dot_su", "[kg/s]", "SuctionLine.Summary.Mdot[13]", 1,\
 5, 10659, 0)
DeclareVariable("SuctionLine.Cells[13].M_dot_ex", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("SuctionLine.Cells[13].h", "Fluid specific enthalpy at the cells [J/kg]",\
 195, 0.0, -10000000000.0,10000000000.0,1000000.0,0,544)
DeclareDerivative("SuctionLine.Cells[13].der(h)", "der(Fluid specific enthalpy at the cells) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[13].T", "Fluid temperature [K|degC]", \
"SuctionLine.Cells[13].fluidState.T", 1, 5, 12947, 0)
DeclareAlias2("SuctionLine.Cells[13].rho", "Fluid cell density [kg/m3|g/cm3]", \
"SuctionLine.Summary.rho[13]", 1, 5, 10640, 0)
DeclareAlias2("SuctionLine.Cells[13].drdh", "Derivative of density by enthalpy [kg.s2/m5]",\
 "SuctionLine.Cells[13].fluidState.ddhp", 1, 5, 12953, 0)
DeclareAlias2("SuctionLine.Cells[13].drdp", "Derivative of density by pressure [s2/m2]",\
 "SuctionLine.Cells[13].fluidState.ddph", 1, 5, 12954, 0)
DeclareAlias2("SuctionLine.Cells[13].hnode_su", "Enthalpy state variable at inlet node [J/kg]",\
 "SuctionLine.Summary.hnode[13]", 1, 5, 10620, 0)
DeclareAlias2("SuctionLine.Cells[13].hnode_ex", "Enthalpy state variable at outlet node [J/kg]",\
 "SuctionLine.Cells[13].OutFlow.h_outflow", 1, 5, 12918, 0)
DeclareVariable("SuctionLine.Cells[13].dMdt", "Time derivative of mass in cell [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[13].qdot", "heat flux at each cell [W/m2]", \
"SuctionLineWall.Wall_int.phi[13]", -1, 5, 1353, 0)
DeclareAlias2("SuctionLine.Cells[13].x", "Vapor quality [1]", "SuctionLine.Summary.x[13]", 1,\
 5, 10679, 0)
DeclareAlias2("SuctionLine.Cells[13].h_l", "[J/kg]", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[13].h_v", "[J/kg]", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareVariable("SuctionLine.Cells[13].Q_tot", "Total heat flux exchanged by the thermal port [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].M_tot", "Total mass of the fluid in the component [kg]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[13].alpha", "[1]", "SuctionLine.Summary.alpha[13]", 1,\
 5, 10698, 0)
DeclareAlias2("SuctionLine.Cells[13].rho_l", "[kg/m3|g/cm3]", "SuctionLine.sat.dl", 1,\
 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[13].rho_v", "[kg/m3|g/cm3]", "SuctionLine.sat.dv", 1,\
 5, 10747, 0)
DeclareVariable("SuctionLine.Cells[13].mu_l", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].mu_v", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].G", "Mass Flow rate per unit of area [Pa.m-1.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[13].drvdp", "Derivative of density of dewpoint by pressure [s2/m2]",\
 "SuctionLine.Cells[13].fluidStateDewPoint.ddph", 1, 5, 12976, 0)
DeclareAlias2("SuctionLine.Cells[13].drldp", "Derivative of density of bublepoint by pressure [s2/m2]",\
 "SuctionLine.Cells[13].fluidStateBubblePoint.ddph", 1, 5, 12991, 0)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.T", "temperature [K|degC]",\
 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.d", "density [kg/m3|g/cm3]",\
 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.p", "pressure [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[13].fluidStateDewPoint.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[13].fluidStateBubblePoint.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].dalphadp_h", "Derivative of the void fraction with respect to pressure at constant enthalpy [N.kg-2.s4]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].dalphadh_p", "Derivative of the void fraction with respect to enthalpy at constant pressure [s2/m2]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateB_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].sat_fluidStateA_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].deltaP", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[13].fluidStateB_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[13].fluidStateA_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[13].deltaH", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[14].InFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "SuctionLine.Cells[13].OutFlow.m_flow", -1, 5, 12917, 132)
DeclareAlias2("SuctionLine.Cells[14].InFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareAlias2("SuctionLine.Cells[14].InFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "SuctionLine.Summary.hnode[14]", 1, 5, 10621, 4)
DeclareVariable("SuctionLine.Cells[14].OutFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,776)
DeclareAlias2("SuctionLine.Cells[14].OutFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareVariable("SuctionLine.Cells[14].OutFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("SuctionLine.Cells[14].Wall_int.T", "Temperature [K|degC]", \
"SuctionLineWall.T_wall[14]", 1, 1, 124, 4)
DeclareAlias2("SuctionLine.Cells[14].Wall_int.phi", "Heat flux [W/m2]", \
"SuctionLineWall.Wall_int.phi[14]", -1, 5, 1354, 132)
DeclareVariable("SuctionLine.Cells[14].Nt", "Number of cells in parallel [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("SuctionLine.Cells[14].pi", "pi-greco", 3.141592653589793, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].Vi", "Volume of a single cell [m3]", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].Ai", "Lateral surface of a single cell [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].Mdotnom", "Nominal fluid flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].Unom_l", "if HTtype = LiqVap : Heat transfer coefficient, liquid zone  [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].Unom_tp", "if HTtype = LiqVap : heat transfer coefficient, two-phase zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].Unom_v", "if HTtype = LiqVap : heat transfer coefficient, vapor zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("SuctionLine.Cells[14].deltapercentage", "Percentage of absolute pressure to use in numerical derivative",\
 267, 1E-005, 0.0,0.0,0.0,0,560)
DeclareParameter("SuctionLine.Cells[14].g", "Gravity [m/s2]", 268, 9.8, 0.0,0.0,\
0.0,0,560)
DeclareVariable("SuctionLine.Cells[14].Ad", "Cross section area [m2]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].Dtube", "Cross section area [m]", 0.0, \
0.0,1E+100,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].voidFractionChoice", "1 to Homogeneus, 2 to Steiner, 3 to Premoli with clvf [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[14].clvf", "clvf to be used in Premoli model",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].voidFractionDerivatives", \
"Set to yes include void fraction derivatives in the calculation [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[14].UseVoidFractionModel", "Set to yes consider the void fraction models [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[14].pstart", "Fluid pressure start value [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].hstart", "Start value of enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,513)
DeclareVariable("SuctionLine.Cells[14].Discretization", "Selection of the spatial discretization scheme [:#(type=ThermoCycle.Functions.Enumerations.Discretizations)]",\
 4, 1.0,5.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[14].Mdotconst", "Set to yes to assume constant mass flow rate at each node (easier convergence) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[14].max_der", "Set to yes to limit the density derivative during phase transitions [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[14].filter_dMdt", "Set to yes to filter dMdt with a first-order filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[14].max_drhodt", "Maximum value for the density derivative",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].TT", "Integration time of the first-order filter [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].ComputeSat", "Can be disabled if the flow is single-phase, or if saturation is passed as a parameter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("SuctionLine.Cells[14].sat_in[1]", "", "SuctionLine.sat.ddldp", 1,\
 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[2]", "", "SuctionLine.sat.ddvdp", 1,\
 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[3]", "", "SuctionLine.sat.dhldp", 1,\
 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[4]", "", "SuctionLine.sat.dhvdp", 1,\
 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[5]", "", "SuctionLine.sat.dTp", 1, 5,\
 10741, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[6]", "", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[7]", "", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[8]", "", "SuctionLine.sat.sigma", 1,\
 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[9]", "", "SuctionLine.sat.sl", 1, 5,\
 10752, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[10]", "", "SuctionLine.sat.sv", 1, 5,\
 10753, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[11]", "", "SuctionLine.sat.dl", 1, 5,\
 10746, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[12]", "", "SuctionLine.sat.dv", 1, 5,\
 10747, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[13]", "", "SuctionLine.sat.psat", 1,\
 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[14].sat_in[14]", "", "SuctionLine.sat.Tsat", 1,\
 5, 10740, 0)
DeclareVariable("SuctionLine.Cells[14].steadystate", "if true, sets the derivative of h (working fluids enthalpy in each cell) to zero during Initialization [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[14].heatTransfer.n", "Number of heat transfer segments [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].T", \
"temperature [K|degC]", "SuctionLine.Cells[14].fluidState.T", 1, 5, 13121, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].a", \
"velocity of sound [m/s]", "SuctionLine.Cells[14].fluidState.a", 1, 5, 13122, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].beta", \
"isobaric expansion coefficient [1/K]", "SuctionLine.Cells[14].fluidState.beta", 1,\
 5, 13123, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].cp", \
"specific heat capacity cp [J/(kg.K)]", "SuctionLine.Cells[14].fluidState.cp", 1,\
 5, 13124, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].cv", \
"specific heat capacity cv [J/(kg.K)]", "SuctionLine.Cells[14].fluidState.cv", 1,\
 5, 13125, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].d", \
"density [kg/m3|g/cm3]", "SuctionLine.Cells[14].fluidState.d", 1, 5, 13126, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", \
"SuctionLine.Cells[14].fluidState.ddhp", 1, 5, 13127, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", \
"SuctionLine.Cells[14].fluidState.ddph", 1, 5, 13128, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].eta", \
"dynamic viscosity [Pa.s]", "SuctionLine.Cells[14].fluidState.eta", 1, 5, 13129,\
 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].h", \
"specific enthalpy [J/kg]", "SuctionLine.Cells[14].fluidState.h", 1, 5, 13130, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].kappa", \
"compressibility [1/Pa]", "SuctionLine.Cells[14].fluidState.kappa", 1, 5, 13131,\
 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].lambda", \
"thermal conductivity [W/(m.K)]", "SuctionLine.Cells[14].fluidState.lambda", 1, 5,\
 13132, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].p", \
"pressure [Pa|bar]", "SuctionLine.Cells[14].fluidState.p", 1, 5, 13133, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", \
"SuctionLine.Cells[14].fluidState.phase", 1, 5, 13134, 66)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.FluidState[1].s", \
"specific entropy [J/(kg.K)]", "SuctionLine.Cells[14].fluidState.s", 1, 5, 13135,\
 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.q_dot[1]", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[14]", -1, 5, 1354, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.T_fluid[1]", "Temperature of the fluid for the heat transfer process [K|degC]",\
 "SuctionLine.Cells[14].fluidState.T", 1, 5, 13121, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.thermalPortL[1].T", \
"Temperature [K|degC]", "SuctionLineWall.T_wall[14]", 1, 1, 124, 4)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.thermalPortL[1].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[14]", -1, 5, 1354, 132)
DeclareVariable("SuctionLine.Cells[14].heatTransfer.Mdotnom", "Nomnial Mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.Unom_l", "Nominal heat transfer coefficient liquid side [W/(m2.K)]",\
 "SuctionLine.Cells[14].Unom_l", 1, 5, 13098, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.Unom_tp", "nominal heat transfer coefficient two phase side [W/(m2.K)]",\
 "SuctionLine.Cells[14].Unom_tp", 1, 5, 13099, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.Unom_v", "nominal heat transfer coefficient vapor side [W/(m2.K)]",\
 "SuctionLine.Cells[14].Unom_v", 1, 5, 13100, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.M_dot", "Inlet massflow [kg/s]",\
 "SuctionLine.Summary.Mdot[14]", 1, 5, 10660, 0)
DeclareAlias2("SuctionLine.Cells[14].heatTransfer.x", "Vapor quality [1]", \
"SuctionLine.Summary.x[14]", 1, 5, 10680, 0)
DeclareVariable("SuctionLine.Cells[14].heatTransfer.Unom", "Nominal heat transfer coefficient- Average of liquid two phase and vapor [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[14].heatTransfer.U[1]", "Heat transfer coefficient [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.T", "temperature [K|degC]", \
288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.beta", "isobaric expansion coefficient [1/K]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.d", "density [kg/m3|g/cm3]", 1,\
 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.ddhp", "derivative of density wrt enthalpy at constant pressure [kg.s2/m5]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.ddph", "derivative of density wrt pressure at constant enthalpy [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.kappa", "compressibility [1/Pa]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.lambda", "thermal conductivity [W/(m.K)]",\
 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.p", "pressure [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidState.phase", "phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]",\
 0, 0.0,2.0,0.0,0,708)
DeclareVariable("SuctionLine.Cells[14].fluidState.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareAlias2("SuctionLine.Cells[14].sat.Tsat", "saturation temperature [K|degC]",\
 "SuctionLine.sat.Tsat", 1, 5, 10740, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.dTp", "derivative of Ts wrt pressure", \
"SuctionLine.sat.dTp", 1, 5, 10741, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.ddldp", "derivative of dls wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddldp", 1, 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.ddvdp", "derivative of dvs wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddvdp", 1, 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.dhldp", "derivative of hls wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhldp", 1, 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.dhvdp", "derivative of hvs wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhvdp", 1, 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.dl", "density at bubble line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dl", 1, 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.dv", "density at dew line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dv", 1, 5, 10747, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.hl", "specific enthalpy at bubble line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hl", 1, 5, 10748, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.hv", "specific enthalpy at dew line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hv", 1, 5, 10749, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.psat", "saturation pressure [Pa|bar]", \
"SuctionLine.sat.psat", 1, 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.sigma", "surface tension [N/m]", \
"SuctionLine.sat.sigma", 1, 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.sl", "specific entropy at bubble line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sl", 1, 5, 10752, 0)
DeclareAlias2("SuctionLine.Cells[14].sat.sv", "specific entropy at dew line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sv", 1, 5, 10753, 0)
DeclareAlias2("SuctionLine.Cells[14].p", "[Pa|bar]", "Evaporator.Cells[1].InFlow.p", 1,\
 5, 7055, 0)
DeclareAlias2("SuctionLine.Cells[14].der(p)", "[Pa/s]", "Evaporator.Cells[1].der(p)", 1,\
 6, 162, 0)
DeclareAlias2("SuctionLine.Cells[14].M_dot_su", "[kg/s]", "SuctionLine.Summary.Mdot[14]", 1,\
 5, 10660, 0)
DeclareVariable("SuctionLine.Cells[14].M_dot_ex", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("SuctionLine.Cells[14].h", "Fluid specific enthalpy at the cells [J/kg]",\
 196, 0.0, -10000000000.0,10000000000.0,1000000.0,0,544)
DeclareDerivative("SuctionLine.Cells[14].der(h)", "der(Fluid specific enthalpy at the cells) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[14].T", "Fluid temperature [K|degC]", \
"SuctionLine.Cells[14].fluidState.T", 1, 5, 13121, 0)
DeclareAlias2("SuctionLine.Cells[14].rho", "Fluid cell density [kg/m3|g/cm3]", \
"SuctionLine.Summary.rho[14]", 1, 5, 10641, 0)
DeclareAlias2("SuctionLine.Cells[14].drdh", "Derivative of density by enthalpy [kg.s2/m5]",\
 "SuctionLine.Cells[14].fluidState.ddhp", 1, 5, 13127, 0)
DeclareAlias2("SuctionLine.Cells[14].drdp", "Derivative of density by pressure [s2/m2]",\
 "SuctionLine.Cells[14].fluidState.ddph", 1, 5, 13128, 0)
DeclareAlias2("SuctionLine.Cells[14].hnode_su", "Enthalpy state variable at inlet node [J/kg]",\
 "SuctionLine.Summary.hnode[14]", 1, 5, 10621, 0)
DeclareAlias2("SuctionLine.Cells[14].hnode_ex", "Enthalpy state variable at outlet node [J/kg]",\
 "SuctionLine.Cells[14].OutFlow.h_outflow", 1, 5, 13092, 0)
DeclareVariable("SuctionLine.Cells[14].dMdt", "Time derivative of mass in cell [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[14].qdot", "heat flux at each cell [W/m2]", \
"SuctionLineWall.Wall_int.phi[14]", -1, 5, 1354, 0)
DeclareAlias2("SuctionLine.Cells[14].x", "Vapor quality [1]", "SuctionLine.Summary.x[14]", 1,\
 5, 10680, 0)
DeclareAlias2("SuctionLine.Cells[14].h_l", "[J/kg]", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[14].h_v", "[J/kg]", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareVariable("SuctionLine.Cells[14].Q_tot", "Total heat flux exchanged by the thermal port [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].M_tot", "Total mass of the fluid in the component [kg]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[14].alpha", "[1]", "SuctionLine.Summary.alpha[14]", 1,\
 5, 10699, 0)
DeclareAlias2("SuctionLine.Cells[14].rho_l", "[kg/m3|g/cm3]", "SuctionLine.sat.dl", 1,\
 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[14].rho_v", "[kg/m3|g/cm3]", "SuctionLine.sat.dv", 1,\
 5, 10747, 0)
DeclareVariable("SuctionLine.Cells[14].mu_l", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].mu_v", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].G", "Mass Flow rate per unit of area [Pa.m-1.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[14].drvdp", "Derivative of density of dewpoint by pressure [s2/m2]",\
 "SuctionLine.Cells[14].fluidStateDewPoint.ddph", 1, 5, 13150, 0)
DeclareAlias2("SuctionLine.Cells[14].drldp", "Derivative of density of bublepoint by pressure [s2/m2]",\
 "SuctionLine.Cells[14].fluidStateBubblePoint.ddph", 1, 5, 13165, 0)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.T", "temperature [K|degC]",\
 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.d", "density [kg/m3|g/cm3]",\
 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.p", "pressure [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[14].fluidStateDewPoint.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[14].fluidStateBubblePoint.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].dalphadp_h", "Derivative of the void fraction with respect to pressure at constant enthalpy [N.kg-2.s4]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].dalphadh_p", "Derivative of the void fraction with respect to enthalpy at constant pressure [s2/m2]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateB_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].sat_fluidStateA_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].deltaP", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[14].fluidStateB_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[14].fluidStateA_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[14].deltaH", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[15].InFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "SuctionLine.Cells[14].OutFlow.m_flow", -1, 5, 13091, 132)
DeclareAlias2("SuctionLine.Cells[15].InFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareAlias2("SuctionLine.Cells[15].InFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "SuctionLine.Summary.hnode[15]", 1, 5, 10622, 4)
DeclareVariable("SuctionLine.Cells[15].OutFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,776)
DeclareAlias2("SuctionLine.Cells[15].OutFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareVariable("SuctionLine.Cells[15].OutFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("SuctionLine.Cells[15].Wall_int.T", "Temperature [K|degC]", \
"SuctionLineWall.T_wall[15]", 1, 1, 125, 4)
DeclareAlias2("SuctionLine.Cells[15].Wall_int.phi", "Heat flux [W/m2]", \
"SuctionLineWall.Wall_int.phi[15]", -1, 5, 1355, 132)
DeclareVariable("SuctionLine.Cells[15].Nt", "Number of cells in parallel [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("SuctionLine.Cells[15].pi", "pi-greco", 3.141592653589793, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].Vi", "Volume of a single cell [m3]", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].Ai", "Lateral surface of a single cell [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].Mdotnom", "Nominal fluid flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].Unom_l", "if HTtype = LiqVap : Heat transfer coefficient, liquid zone  [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].Unom_tp", "if HTtype = LiqVap : heat transfer coefficient, two-phase zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].Unom_v", "if HTtype = LiqVap : heat transfer coefficient, vapor zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("SuctionLine.Cells[15].deltapercentage", "Percentage of absolute pressure to use in numerical derivative",\
 269, 1E-005, 0.0,0.0,0.0,0,560)
DeclareParameter("SuctionLine.Cells[15].g", "Gravity [m/s2]", 270, 9.8, 0.0,0.0,\
0.0,0,560)
DeclareVariable("SuctionLine.Cells[15].Ad", "Cross section area [m2]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].Dtube", "Cross section area [m]", 0.0, \
0.0,1E+100,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].voidFractionChoice", "1 to Homogeneus, 2 to Steiner, 3 to Premoli with clvf [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[15].clvf", "clvf to be used in Premoli model",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].voidFractionDerivatives", \
"Set to yes include void fraction derivatives in the calculation [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[15].UseVoidFractionModel", "Set to yes consider the void fraction models [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[15].pstart", "Fluid pressure start value [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].hstart", "Start value of enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,513)
DeclareVariable("SuctionLine.Cells[15].Discretization", "Selection of the spatial discretization scheme [:#(type=ThermoCycle.Functions.Enumerations.Discretizations)]",\
 4, 1.0,5.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[15].Mdotconst", "Set to yes to assume constant mass flow rate at each node (easier convergence) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[15].max_der", "Set to yes to limit the density derivative during phase transitions [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[15].filter_dMdt", "Set to yes to filter dMdt with a first-order filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[15].max_drhodt", "Maximum value for the density derivative",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].TT", "Integration time of the first-order filter [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].ComputeSat", "Can be disabled if the flow is single-phase, or if saturation is passed as a parameter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("SuctionLine.Cells[15].sat_in[1]", "", "SuctionLine.sat.ddldp", 1,\
 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[2]", "", "SuctionLine.sat.ddvdp", 1,\
 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[3]", "", "SuctionLine.sat.dhldp", 1,\
 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[4]", "", "SuctionLine.sat.dhvdp", 1,\
 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[5]", "", "SuctionLine.sat.dTp", 1, 5,\
 10741, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[6]", "", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[7]", "", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[8]", "", "SuctionLine.sat.sigma", 1,\
 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[9]", "", "SuctionLine.sat.sl", 1, 5,\
 10752, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[10]", "", "SuctionLine.sat.sv", 1, 5,\
 10753, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[11]", "", "SuctionLine.sat.dl", 1, 5,\
 10746, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[12]", "", "SuctionLine.sat.dv", 1, 5,\
 10747, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[13]", "", "SuctionLine.sat.psat", 1,\
 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[15].sat_in[14]", "", "SuctionLine.sat.Tsat", 1,\
 5, 10740, 0)
DeclareVariable("SuctionLine.Cells[15].steadystate", "if true, sets the derivative of h (working fluids enthalpy in each cell) to zero during Initialization [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[15].heatTransfer.n", "Number of heat transfer segments [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].T", \
"temperature [K|degC]", "SuctionLine.Cells[15].fluidState.T", 1, 5, 13295, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].a", \
"velocity of sound [m/s]", "SuctionLine.Cells[15].fluidState.a", 1, 5, 13296, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].beta", \
"isobaric expansion coefficient [1/K]", "SuctionLine.Cells[15].fluidState.beta", 1,\
 5, 13297, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].cp", \
"specific heat capacity cp [J/(kg.K)]", "SuctionLine.Cells[15].fluidState.cp", 1,\
 5, 13298, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].cv", \
"specific heat capacity cv [J/(kg.K)]", "SuctionLine.Cells[15].fluidState.cv", 1,\
 5, 13299, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].d", \
"density [kg/m3|g/cm3]", "SuctionLine.Cells[15].fluidState.d", 1, 5, 13300, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", \
"SuctionLine.Cells[15].fluidState.ddhp", 1, 5, 13301, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", \
"SuctionLine.Cells[15].fluidState.ddph", 1, 5, 13302, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].eta", \
"dynamic viscosity [Pa.s]", "SuctionLine.Cells[15].fluidState.eta", 1, 5, 13303,\
 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].h", \
"specific enthalpy [J/kg]", "SuctionLine.Cells[15].fluidState.h", 1, 5, 13304, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].kappa", \
"compressibility [1/Pa]", "SuctionLine.Cells[15].fluidState.kappa", 1, 5, 13305,\
 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].lambda", \
"thermal conductivity [W/(m.K)]", "SuctionLine.Cells[15].fluidState.lambda", 1, 5,\
 13306, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].p", \
"pressure [Pa|bar]", "SuctionLine.Cells[15].fluidState.p", 1, 5, 13307, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", \
"SuctionLine.Cells[15].fluidState.phase", 1, 5, 13308, 66)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.FluidState[1].s", \
"specific entropy [J/(kg.K)]", "SuctionLine.Cells[15].fluidState.s", 1, 5, 13309,\
 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.q_dot[1]", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[15]", -1, 5, 1355, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.T_fluid[1]", "Temperature of the fluid for the heat transfer process [K|degC]",\
 "SuctionLine.Cells[15].fluidState.T", 1, 5, 13295, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.thermalPortL[1].T", \
"Temperature [K|degC]", "SuctionLineWall.T_wall[15]", 1, 1, 125, 4)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.thermalPortL[1].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[15]", -1, 5, 1355, 132)
DeclareVariable("SuctionLine.Cells[15].heatTransfer.Mdotnom", "Nomnial Mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.Unom_l", "Nominal heat transfer coefficient liquid side [W/(m2.K)]",\
 "SuctionLine.Cells[15].Unom_l", 1, 5, 13272, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.Unom_tp", "nominal heat transfer coefficient two phase side [W/(m2.K)]",\
 "SuctionLine.Cells[15].Unom_tp", 1, 5, 13273, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.Unom_v", "nominal heat transfer coefficient vapor side [W/(m2.K)]",\
 "SuctionLine.Cells[15].Unom_v", 1, 5, 13274, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.M_dot", "Inlet massflow [kg/s]",\
 "SuctionLine.Summary.Mdot[15]", 1, 5, 10661, 0)
DeclareAlias2("SuctionLine.Cells[15].heatTransfer.x", "Vapor quality [1]", \
"SuctionLine.Summary.x[15]", 1, 5, 10681, 0)
DeclareVariable("SuctionLine.Cells[15].heatTransfer.Unom", "Nominal heat transfer coefficient- Average of liquid two phase and vapor [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[15].heatTransfer.U[1]", "Heat transfer coefficient [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.T", "temperature [K|degC]", \
288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.beta", "isobaric expansion coefficient [1/K]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.d", "density [kg/m3|g/cm3]", 1,\
 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.ddhp", "derivative of density wrt enthalpy at constant pressure [kg.s2/m5]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.ddph", "derivative of density wrt pressure at constant enthalpy [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.kappa", "compressibility [1/Pa]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.lambda", "thermal conductivity [W/(m.K)]",\
 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.p", "pressure [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidState.phase", "phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]",\
 0, 0.0,2.0,0.0,0,708)
DeclareVariable("SuctionLine.Cells[15].fluidState.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareAlias2("SuctionLine.Cells[15].sat.Tsat", "saturation temperature [K|degC]",\
 "SuctionLine.sat.Tsat", 1, 5, 10740, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.dTp", "derivative of Ts wrt pressure", \
"SuctionLine.sat.dTp", 1, 5, 10741, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.ddldp", "derivative of dls wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddldp", 1, 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.ddvdp", "derivative of dvs wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddvdp", 1, 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.dhldp", "derivative of hls wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhldp", 1, 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.dhvdp", "derivative of hvs wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhvdp", 1, 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.dl", "density at bubble line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dl", 1, 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.dv", "density at dew line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dv", 1, 5, 10747, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.hl", "specific enthalpy at bubble line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hl", 1, 5, 10748, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.hv", "specific enthalpy at dew line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hv", 1, 5, 10749, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.psat", "saturation pressure [Pa|bar]", \
"SuctionLine.sat.psat", 1, 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.sigma", "surface tension [N/m]", \
"SuctionLine.sat.sigma", 1, 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.sl", "specific entropy at bubble line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sl", 1, 5, 10752, 0)
DeclareAlias2("SuctionLine.Cells[15].sat.sv", "specific entropy at dew line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sv", 1, 5, 10753, 0)
DeclareAlias2("SuctionLine.Cells[15].p", "[Pa|bar]", "Evaporator.Cells[1].InFlow.p", 1,\
 5, 7055, 0)
DeclareAlias2("SuctionLine.Cells[15].der(p)", "[Pa/s]", "Evaporator.Cells[1].der(p)", 1,\
 6, 162, 0)
DeclareAlias2("SuctionLine.Cells[15].M_dot_su", "[kg/s]", "SuctionLine.Summary.Mdot[15]", 1,\
 5, 10661, 0)
DeclareVariable("SuctionLine.Cells[15].M_dot_ex", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("SuctionLine.Cells[15].h", "Fluid specific enthalpy at the cells [J/kg]",\
 197, 0.0, -10000000000.0,10000000000.0,1000000.0,0,544)
DeclareDerivative("SuctionLine.Cells[15].der(h)", "der(Fluid specific enthalpy at the cells) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[15].T", "Fluid temperature [K|degC]", \
"SuctionLine.Cells[15].fluidState.T", 1, 5, 13295, 0)
DeclareAlias2("SuctionLine.Cells[15].rho", "Fluid cell density [kg/m3|g/cm3]", \
"SuctionLine.Summary.rho[15]", 1, 5, 10642, 0)
DeclareAlias2("SuctionLine.Cells[15].drdh", "Derivative of density by enthalpy [kg.s2/m5]",\
 "SuctionLine.Cells[15].fluidState.ddhp", 1, 5, 13301, 0)
DeclareAlias2("SuctionLine.Cells[15].drdp", "Derivative of density by pressure [s2/m2]",\
 "SuctionLine.Cells[15].fluidState.ddph", 1, 5, 13302, 0)
DeclareAlias2("SuctionLine.Cells[15].hnode_su", "Enthalpy state variable at inlet node [J/kg]",\
 "SuctionLine.Summary.hnode[15]", 1, 5, 10622, 0)
DeclareAlias2("SuctionLine.Cells[15].hnode_ex", "Enthalpy state variable at outlet node [J/kg]",\
 "SuctionLine.Cells[15].OutFlow.h_outflow", 1, 5, 13266, 0)
DeclareVariable("SuctionLine.Cells[15].dMdt", "Time derivative of mass in cell [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[15].qdot", "heat flux at each cell [W/m2]", \
"SuctionLineWall.Wall_int.phi[15]", -1, 5, 1355, 0)
DeclareAlias2("SuctionLine.Cells[15].x", "Vapor quality [1]", "SuctionLine.Summary.x[15]", 1,\
 5, 10681, 0)
DeclareAlias2("SuctionLine.Cells[15].h_l", "[J/kg]", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[15].h_v", "[J/kg]", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareVariable("SuctionLine.Cells[15].Q_tot", "Total heat flux exchanged by the thermal port [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].M_tot", "Total mass of the fluid in the component [kg]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[15].alpha", "[1]", "SuctionLine.Summary.alpha[15]", 1,\
 5, 10700, 0)
DeclareAlias2("SuctionLine.Cells[15].rho_l", "[kg/m3|g/cm3]", "SuctionLine.sat.dl", 1,\
 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[15].rho_v", "[kg/m3|g/cm3]", "SuctionLine.sat.dv", 1,\
 5, 10747, 0)
DeclareVariable("SuctionLine.Cells[15].mu_l", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].mu_v", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].G", "Mass Flow rate per unit of area [Pa.m-1.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[15].drvdp", "Derivative of density of dewpoint by pressure [s2/m2]",\
 "SuctionLine.Cells[15].fluidStateDewPoint.ddph", 1, 5, 13324, 0)
DeclareAlias2("SuctionLine.Cells[15].drldp", "Derivative of density of bublepoint by pressure [s2/m2]",\
 "SuctionLine.Cells[15].fluidStateBubblePoint.ddph", 1, 5, 13339, 0)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.T", "temperature [K|degC]",\
 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.d", "density [kg/m3|g/cm3]",\
 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.p", "pressure [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[15].fluidStateDewPoint.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[15].fluidStateBubblePoint.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].dalphadp_h", "Derivative of the void fraction with respect to pressure at constant enthalpy [N.kg-2.s4]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].dalphadh_p", "Derivative of the void fraction with respect to enthalpy at constant pressure [s2/m2]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateB_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].sat_fluidStateA_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].deltaP", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[15].fluidStateB_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[15].fluidStateA_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[15].deltaH", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[16].InFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "SuctionLine.Cells[15].OutFlow.m_flow", -1, 5, 13265, 132)
DeclareAlias2("SuctionLine.Cells[16].InFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareAlias2("SuctionLine.Cells[16].InFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "SuctionLine.Summary.hnode[16]", 1, 5, 10623, 4)
DeclareVariable("SuctionLine.Cells[16].OutFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,776)
DeclareAlias2("SuctionLine.Cells[16].OutFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareVariable("SuctionLine.Cells[16].OutFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("SuctionLine.Cells[16].Wall_int.T", "Temperature [K|degC]", \
"SuctionLineWall.T_wall[16]", 1, 1, 126, 4)
DeclareAlias2("SuctionLine.Cells[16].Wall_int.phi", "Heat flux [W/m2]", \
"SuctionLineWall.Wall_int.phi[16]", -1, 5, 1356, 132)
DeclareVariable("SuctionLine.Cells[16].Nt", "Number of cells in parallel [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("SuctionLine.Cells[16].pi", "pi-greco", 3.141592653589793, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].Vi", "Volume of a single cell [m3]", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].Ai", "Lateral surface of a single cell [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].Mdotnom", "Nominal fluid flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].Unom_l", "if HTtype = LiqVap : Heat transfer coefficient, liquid zone  [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].Unom_tp", "if HTtype = LiqVap : heat transfer coefficient, two-phase zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].Unom_v", "if HTtype = LiqVap : heat transfer coefficient, vapor zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("SuctionLine.Cells[16].deltapercentage", "Percentage of absolute pressure to use in numerical derivative",\
 271, 1E-005, 0.0,0.0,0.0,0,560)
DeclareParameter("SuctionLine.Cells[16].g", "Gravity [m/s2]", 272, 9.8, 0.0,0.0,\
0.0,0,560)
DeclareVariable("SuctionLine.Cells[16].Ad", "Cross section area [m2]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].Dtube", "Cross section area [m]", 0.0, \
0.0,1E+100,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].voidFractionChoice", "1 to Homogeneus, 2 to Steiner, 3 to Premoli with clvf [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[16].clvf", "clvf to be used in Premoli model",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].voidFractionDerivatives", \
"Set to yes include void fraction derivatives in the calculation [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[16].UseVoidFractionModel", "Set to yes consider the void fraction models [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[16].pstart", "Fluid pressure start value [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].hstart", "Start value of enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,513)
DeclareVariable("SuctionLine.Cells[16].Discretization", "Selection of the spatial discretization scheme [:#(type=ThermoCycle.Functions.Enumerations.Discretizations)]",\
 4, 1.0,5.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[16].Mdotconst", "Set to yes to assume constant mass flow rate at each node (easier convergence) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[16].max_der", "Set to yes to limit the density derivative during phase transitions [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[16].filter_dMdt", "Set to yes to filter dMdt with a first-order filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[16].max_drhodt", "Maximum value for the density derivative",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].TT", "Integration time of the first-order filter [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].ComputeSat", "Can be disabled if the flow is single-phase, or if saturation is passed as a parameter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("SuctionLine.Cells[16].sat_in[1]", "", "SuctionLine.sat.ddldp", 1,\
 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[2]", "", "SuctionLine.sat.ddvdp", 1,\
 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[3]", "", "SuctionLine.sat.dhldp", 1,\
 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[4]", "", "SuctionLine.sat.dhvdp", 1,\
 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[5]", "", "SuctionLine.sat.dTp", 1, 5,\
 10741, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[6]", "", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[7]", "", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[8]", "", "SuctionLine.sat.sigma", 1,\
 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[9]", "", "SuctionLine.sat.sl", 1, 5,\
 10752, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[10]", "", "SuctionLine.sat.sv", 1, 5,\
 10753, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[11]", "", "SuctionLine.sat.dl", 1, 5,\
 10746, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[12]", "", "SuctionLine.sat.dv", 1, 5,\
 10747, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[13]", "", "SuctionLine.sat.psat", 1,\
 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[16].sat_in[14]", "", "SuctionLine.sat.Tsat", 1,\
 5, 10740, 0)
DeclareVariable("SuctionLine.Cells[16].steadystate", "if true, sets the derivative of h (working fluids enthalpy in each cell) to zero during Initialization [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[16].heatTransfer.n", "Number of heat transfer segments [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].T", \
"temperature [K|degC]", "SuctionLine.Cells[16].fluidState.T", 1, 5, 13469, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].a", \
"velocity of sound [m/s]", "SuctionLine.Cells[16].fluidState.a", 1, 5, 13470, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].beta", \
"isobaric expansion coefficient [1/K]", "SuctionLine.Cells[16].fluidState.beta", 1,\
 5, 13471, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].cp", \
"specific heat capacity cp [J/(kg.K)]", "SuctionLine.Cells[16].fluidState.cp", 1,\
 5, 13472, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].cv", \
"specific heat capacity cv [J/(kg.K)]", "SuctionLine.Cells[16].fluidState.cv", 1,\
 5, 13473, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].d", \
"density [kg/m3|g/cm3]", "SuctionLine.Cells[16].fluidState.d", 1, 5, 13474, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", \
"SuctionLine.Cells[16].fluidState.ddhp", 1, 5, 13475, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", \
"SuctionLine.Cells[16].fluidState.ddph", 1, 5, 13476, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].eta", \
"dynamic viscosity [Pa.s]", "SuctionLine.Cells[16].fluidState.eta", 1, 5, 13477,\
 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].h", \
"specific enthalpy [J/kg]", "SuctionLine.Cells[16].fluidState.h", 1, 5, 13478, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].kappa", \
"compressibility [1/Pa]", "SuctionLine.Cells[16].fluidState.kappa", 1, 5, 13479,\
 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].lambda", \
"thermal conductivity [W/(m.K)]", "SuctionLine.Cells[16].fluidState.lambda", 1, 5,\
 13480, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].p", \
"pressure [Pa|bar]", "SuctionLine.Cells[16].fluidState.p", 1, 5, 13481, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", \
"SuctionLine.Cells[16].fluidState.phase", 1, 5, 13482, 66)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.FluidState[1].s", \
"specific entropy [J/(kg.K)]", "SuctionLine.Cells[16].fluidState.s", 1, 5, 13483,\
 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.q_dot[1]", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[16]", -1, 5, 1356, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.T_fluid[1]", "Temperature of the fluid for the heat transfer process [K|degC]",\
 "SuctionLine.Cells[16].fluidState.T", 1, 5, 13469, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.thermalPortL[1].T", \
"Temperature [K|degC]", "SuctionLineWall.T_wall[16]", 1, 1, 126, 4)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.thermalPortL[1].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[16]", -1, 5, 1356, 132)
DeclareVariable("SuctionLine.Cells[16].heatTransfer.Mdotnom", "Nomnial Mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.Unom_l", "Nominal heat transfer coefficient liquid side [W/(m2.K)]",\
 "SuctionLine.Cells[16].Unom_l", 1, 5, 13446, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.Unom_tp", "nominal heat transfer coefficient two phase side [W/(m2.K)]",\
 "SuctionLine.Cells[16].Unom_tp", 1, 5, 13447, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.Unom_v", "nominal heat transfer coefficient vapor side [W/(m2.K)]",\
 "SuctionLine.Cells[16].Unom_v", 1, 5, 13448, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.M_dot", "Inlet massflow [kg/s]",\
 "SuctionLine.Summary.Mdot[16]", 1, 5, 10662, 0)
DeclareAlias2("SuctionLine.Cells[16].heatTransfer.x", "Vapor quality [1]", \
"SuctionLine.Summary.x[16]", 1, 5, 10682, 0)
DeclareVariable("SuctionLine.Cells[16].heatTransfer.Unom", "Nominal heat transfer coefficient- Average of liquid two phase and vapor [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[16].heatTransfer.U[1]", "Heat transfer coefficient [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.T", "temperature [K|degC]", \
288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.beta", "isobaric expansion coefficient [1/K]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.d", "density [kg/m3|g/cm3]", 1,\
 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.ddhp", "derivative of density wrt enthalpy at constant pressure [kg.s2/m5]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.ddph", "derivative of density wrt pressure at constant enthalpy [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.kappa", "compressibility [1/Pa]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.lambda", "thermal conductivity [W/(m.K)]",\
 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.p", "pressure [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidState.phase", "phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]",\
 0, 0.0,2.0,0.0,0,708)
DeclareVariable("SuctionLine.Cells[16].fluidState.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareAlias2("SuctionLine.Cells[16].sat.Tsat", "saturation temperature [K|degC]",\
 "SuctionLine.sat.Tsat", 1, 5, 10740, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.dTp", "derivative of Ts wrt pressure", \
"SuctionLine.sat.dTp", 1, 5, 10741, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.ddldp", "derivative of dls wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddldp", 1, 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.ddvdp", "derivative of dvs wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddvdp", 1, 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.dhldp", "derivative of hls wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhldp", 1, 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.dhvdp", "derivative of hvs wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhvdp", 1, 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.dl", "density at bubble line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dl", 1, 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.dv", "density at dew line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dv", 1, 5, 10747, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.hl", "specific enthalpy at bubble line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hl", 1, 5, 10748, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.hv", "specific enthalpy at dew line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hv", 1, 5, 10749, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.psat", "saturation pressure [Pa|bar]", \
"SuctionLine.sat.psat", 1, 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.sigma", "surface tension [N/m]", \
"SuctionLine.sat.sigma", 1, 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.sl", "specific entropy at bubble line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sl", 1, 5, 10752, 0)
DeclareAlias2("SuctionLine.Cells[16].sat.sv", "specific entropy at dew line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sv", 1, 5, 10753, 0)
DeclareAlias2("SuctionLine.Cells[16].p", "[Pa|bar]", "Evaporator.Cells[1].InFlow.p", 1,\
 5, 7055, 0)
DeclareAlias2("SuctionLine.Cells[16].der(p)", "[Pa/s]", "Evaporator.Cells[1].der(p)", 1,\
 6, 162, 0)
DeclareAlias2("SuctionLine.Cells[16].M_dot_su", "[kg/s]", "SuctionLine.Summary.Mdot[16]", 1,\
 5, 10662, 0)
DeclareVariable("SuctionLine.Cells[16].M_dot_ex", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("SuctionLine.Cells[16].h", "Fluid specific enthalpy at the cells [J/kg]",\
 198, 0.0, -10000000000.0,10000000000.0,1000000.0,0,544)
DeclareDerivative("SuctionLine.Cells[16].der(h)", "der(Fluid specific enthalpy at the cells) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[16].T", "Fluid temperature [K|degC]", \
"SuctionLine.Cells[16].fluidState.T", 1, 5, 13469, 0)
DeclareAlias2("SuctionLine.Cells[16].rho", "Fluid cell density [kg/m3|g/cm3]", \
"SuctionLine.Summary.rho[16]", 1, 5, 10643, 0)
DeclareAlias2("SuctionLine.Cells[16].drdh", "Derivative of density by enthalpy [kg.s2/m5]",\
 "SuctionLine.Cells[16].fluidState.ddhp", 1, 5, 13475, 0)
DeclareAlias2("SuctionLine.Cells[16].drdp", "Derivative of density by pressure [s2/m2]",\
 "SuctionLine.Cells[16].fluidState.ddph", 1, 5, 13476, 0)
DeclareAlias2("SuctionLine.Cells[16].hnode_su", "Enthalpy state variable at inlet node [J/kg]",\
 "SuctionLine.Summary.hnode[16]", 1, 5, 10623, 0)
DeclareAlias2("SuctionLine.Cells[16].hnode_ex", "Enthalpy state variable at outlet node [J/kg]",\
 "SuctionLine.Cells[16].OutFlow.h_outflow", 1, 5, 13440, 0)
DeclareVariable("SuctionLine.Cells[16].dMdt", "Time derivative of mass in cell [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[16].qdot", "heat flux at each cell [W/m2]", \
"SuctionLineWall.Wall_int.phi[16]", -1, 5, 1356, 0)
DeclareAlias2("SuctionLine.Cells[16].x", "Vapor quality [1]", "SuctionLine.Summary.x[16]", 1,\
 5, 10682, 0)
DeclareAlias2("SuctionLine.Cells[16].h_l", "[J/kg]", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[16].h_v", "[J/kg]", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareVariable("SuctionLine.Cells[16].Q_tot", "Total heat flux exchanged by the thermal port [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].M_tot", "Total mass of the fluid in the component [kg]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[16].alpha", "[1]", "SuctionLine.Summary.alpha[16]", 1,\
 5, 10701, 0)
DeclareAlias2("SuctionLine.Cells[16].rho_l", "[kg/m3|g/cm3]", "SuctionLine.sat.dl", 1,\
 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[16].rho_v", "[kg/m3|g/cm3]", "SuctionLine.sat.dv", 1,\
 5, 10747, 0)
DeclareVariable("SuctionLine.Cells[16].mu_l", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].mu_v", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].G", "Mass Flow rate per unit of area [Pa.m-1.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[16].drvdp", "Derivative of density of dewpoint by pressure [s2/m2]",\
 "SuctionLine.Cells[16].fluidStateDewPoint.ddph", 1, 5, 13498, 0)
DeclareAlias2("SuctionLine.Cells[16].drldp", "Derivative of density of bublepoint by pressure [s2/m2]",\
 "SuctionLine.Cells[16].fluidStateBubblePoint.ddph", 1, 5, 13513, 0)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.T", "temperature [K|degC]",\
 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.d", "density [kg/m3|g/cm3]",\
 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.p", "pressure [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[16].fluidStateDewPoint.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[16].fluidStateBubblePoint.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].dalphadp_h", "Derivative of the void fraction with respect to pressure at constant enthalpy [N.kg-2.s4]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].dalphadh_p", "Derivative of the void fraction with respect to enthalpy at constant pressure [s2/m2]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateB_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].sat_fluidStateA_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].deltaP", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[16].fluidStateB_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[16].fluidStateA_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[16].deltaH", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[17].InFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "SuctionLine.Cells[16].OutFlow.m_flow", -1, 5, 13439, 132)
DeclareAlias2("SuctionLine.Cells[17].InFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareAlias2("SuctionLine.Cells[17].InFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "SuctionLine.Summary.hnode[17]", 1, 5, 10624, 4)
DeclareVariable("SuctionLine.Cells[17].OutFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,776)
DeclareAlias2("SuctionLine.Cells[17].OutFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareVariable("SuctionLine.Cells[17].OutFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("SuctionLine.Cells[17].Wall_int.T", "Temperature [K|degC]", \
"SuctionLineWall.T_wall[17]", 1, 1, 127, 4)
DeclareAlias2("SuctionLine.Cells[17].Wall_int.phi", "Heat flux [W/m2]", \
"SuctionLineWall.Wall_int.phi[17]", -1, 5, 1357, 132)
DeclareVariable("SuctionLine.Cells[17].Nt", "Number of cells in parallel [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("SuctionLine.Cells[17].pi", "pi-greco", 3.141592653589793, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].Vi", "Volume of a single cell [m3]", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].Ai", "Lateral surface of a single cell [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].Mdotnom", "Nominal fluid flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].Unom_l", "if HTtype = LiqVap : Heat transfer coefficient, liquid zone  [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].Unom_tp", "if HTtype = LiqVap : heat transfer coefficient, two-phase zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].Unom_v", "if HTtype = LiqVap : heat transfer coefficient, vapor zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("SuctionLine.Cells[17].deltapercentage", "Percentage of absolute pressure to use in numerical derivative",\
 273, 1E-005, 0.0,0.0,0.0,0,560)
DeclareParameter("SuctionLine.Cells[17].g", "Gravity [m/s2]", 274, 9.8, 0.0,0.0,\
0.0,0,560)
DeclareVariable("SuctionLine.Cells[17].Ad", "Cross section area [m2]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].Dtube", "Cross section area [m]", 0.0, \
0.0,1E+100,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].voidFractionChoice", "1 to Homogeneus, 2 to Steiner, 3 to Premoli with clvf [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[17].clvf", "clvf to be used in Premoli model",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].voidFractionDerivatives", \
"Set to yes include void fraction derivatives in the calculation [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[17].UseVoidFractionModel", "Set to yes consider the void fraction models [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[17].pstart", "Fluid pressure start value [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].hstart", "Start value of enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,513)
DeclareVariable("SuctionLine.Cells[17].Discretization", "Selection of the spatial discretization scheme [:#(type=ThermoCycle.Functions.Enumerations.Discretizations)]",\
 4, 1.0,5.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[17].Mdotconst", "Set to yes to assume constant mass flow rate at each node (easier convergence) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[17].max_der", "Set to yes to limit the density derivative during phase transitions [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[17].filter_dMdt", "Set to yes to filter dMdt with a first-order filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[17].max_drhodt", "Maximum value for the density derivative",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].TT", "Integration time of the first-order filter [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].ComputeSat", "Can be disabled if the flow is single-phase, or if saturation is passed as a parameter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("SuctionLine.Cells[17].sat_in[1]", "", "SuctionLine.sat.ddldp", 1,\
 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[2]", "", "SuctionLine.sat.ddvdp", 1,\
 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[3]", "", "SuctionLine.sat.dhldp", 1,\
 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[4]", "", "SuctionLine.sat.dhvdp", 1,\
 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[5]", "", "SuctionLine.sat.dTp", 1, 5,\
 10741, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[6]", "", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[7]", "", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[8]", "", "SuctionLine.sat.sigma", 1,\
 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[9]", "", "SuctionLine.sat.sl", 1, 5,\
 10752, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[10]", "", "SuctionLine.sat.sv", 1, 5,\
 10753, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[11]", "", "SuctionLine.sat.dl", 1, 5,\
 10746, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[12]", "", "SuctionLine.sat.dv", 1, 5,\
 10747, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[13]", "", "SuctionLine.sat.psat", 1,\
 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[17].sat_in[14]", "", "SuctionLine.sat.Tsat", 1,\
 5, 10740, 0)
DeclareVariable("SuctionLine.Cells[17].steadystate", "if true, sets the derivative of h (working fluids enthalpy in each cell) to zero during Initialization [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[17].heatTransfer.n", "Number of heat transfer segments [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].T", \
"temperature [K|degC]", "SuctionLine.Cells[17].fluidState.T", 1, 5, 13643, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].a", \
"velocity of sound [m/s]", "SuctionLine.Cells[17].fluidState.a", 1, 5, 13644, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].beta", \
"isobaric expansion coefficient [1/K]", "SuctionLine.Cells[17].fluidState.beta", 1,\
 5, 13645, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].cp", \
"specific heat capacity cp [J/(kg.K)]", "SuctionLine.Cells[17].fluidState.cp", 1,\
 5, 13646, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].cv", \
"specific heat capacity cv [J/(kg.K)]", "SuctionLine.Cells[17].fluidState.cv", 1,\
 5, 13647, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].d", \
"density [kg/m3|g/cm3]", "SuctionLine.Cells[17].fluidState.d", 1, 5, 13648, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", \
"SuctionLine.Cells[17].fluidState.ddhp", 1, 5, 13649, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", \
"SuctionLine.Cells[17].fluidState.ddph", 1, 5, 13650, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].eta", \
"dynamic viscosity [Pa.s]", "SuctionLine.Cells[17].fluidState.eta", 1, 5, 13651,\
 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].h", \
"specific enthalpy [J/kg]", "SuctionLine.Cells[17].fluidState.h", 1, 5, 13652, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].kappa", \
"compressibility [1/Pa]", "SuctionLine.Cells[17].fluidState.kappa", 1, 5, 13653,\
 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].lambda", \
"thermal conductivity [W/(m.K)]", "SuctionLine.Cells[17].fluidState.lambda", 1, 5,\
 13654, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].p", \
"pressure [Pa|bar]", "SuctionLine.Cells[17].fluidState.p", 1, 5, 13655, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", \
"SuctionLine.Cells[17].fluidState.phase", 1, 5, 13656, 66)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.FluidState[1].s", \
"specific entropy [J/(kg.K)]", "SuctionLine.Cells[17].fluidState.s", 1, 5, 13657,\
 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.q_dot[1]", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[17]", -1, 5, 1357, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.T_fluid[1]", "Temperature of the fluid for the heat transfer process [K|degC]",\
 "SuctionLine.Cells[17].fluidState.T", 1, 5, 13643, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.thermalPortL[1].T", \
"Temperature [K|degC]", "SuctionLineWall.T_wall[17]", 1, 1, 127, 4)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.thermalPortL[1].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[17]", -1, 5, 1357, 132)
DeclareVariable("SuctionLine.Cells[17].heatTransfer.Mdotnom", "Nomnial Mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.Unom_l", "Nominal heat transfer coefficient liquid side [W/(m2.K)]",\
 "SuctionLine.Cells[17].Unom_l", 1, 5, 13620, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.Unom_tp", "nominal heat transfer coefficient two phase side [W/(m2.K)]",\
 "SuctionLine.Cells[17].Unom_tp", 1, 5, 13621, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.Unom_v", "nominal heat transfer coefficient vapor side [W/(m2.K)]",\
 "SuctionLine.Cells[17].Unom_v", 1, 5, 13622, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.M_dot", "Inlet massflow [kg/s]",\
 "SuctionLine.Summary.Mdot[17]", 1, 5, 10663, 0)
DeclareAlias2("SuctionLine.Cells[17].heatTransfer.x", "Vapor quality [1]", \
"SuctionLine.Summary.x[17]", 1, 5, 10683, 0)
DeclareVariable("SuctionLine.Cells[17].heatTransfer.Unom", "Nominal heat transfer coefficient- Average of liquid two phase and vapor [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[17].heatTransfer.U[1]", "Heat transfer coefficient [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.T", "temperature [K|degC]", \
288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.beta", "isobaric expansion coefficient [1/K]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.d", "density [kg/m3|g/cm3]", 1,\
 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.ddhp", "derivative of density wrt enthalpy at constant pressure [kg.s2/m5]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.ddph", "derivative of density wrt pressure at constant enthalpy [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.kappa", "compressibility [1/Pa]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.lambda", "thermal conductivity [W/(m.K)]",\
 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.p", "pressure [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidState.phase", "phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]",\
 0, 0.0,2.0,0.0,0,708)
DeclareVariable("SuctionLine.Cells[17].fluidState.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareAlias2("SuctionLine.Cells[17].sat.Tsat", "saturation temperature [K|degC]",\
 "SuctionLine.sat.Tsat", 1, 5, 10740, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.dTp", "derivative of Ts wrt pressure", \
"SuctionLine.sat.dTp", 1, 5, 10741, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.ddldp", "derivative of dls wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddldp", 1, 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.ddvdp", "derivative of dvs wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddvdp", 1, 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.dhldp", "derivative of hls wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhldp", 1, 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.dhvdp", "derivative of hvs wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhvdp", 1, 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.dl", "density at bubble line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dl", 1, 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.dv", "density at dew line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dv", 1, 5, 10747, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.hl", "specific enthalpy at bubble line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hl", 1, 5, 10748, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.hv", "specific enthalpy at dew line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hv", 1, 5, 10749, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.psat", "saturation pressure [Pa|bar]", \
"SuctionLine.sat.psat", 1, 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.sigma", "surface tension [N/m]", \
"SuctionLine.sat.sigma", 1, 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.sl", "specific entropy at bubble line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sl", 1, 5, 10752, 0)
DeclareAlias2("SuctionLine.Cells[17].sat.sv", "specific entropy at dew line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sv", 1, 5, 10753, 0)
DeclareAlias2("SuctionLine.Cells[17].p", "[Pa|bar]", "Evaporator.Cells[1].InFlow.p", 1,\
 5, 7055, 0)
DeclareAlias2("SuctionLine.Cells[17].der(p)", "[Pa/s]", "Evaporator.Cells[1].der(p)", 1,\
 6, 162, 0)
DeclareAlias2("SuctionLine.Cells[17].M_dot_su", "[kg/s]", "SuctionLine.Summary.Mdot[17]", 1,\
 5, 10663, 0)
DeclareVariable("SuctionLine.Cells[17].M_dot_ex", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("SuctionLine.Cells[17].h", "Fluid specific enthalpy at the cells [J/kg]",\
 199, 0.0, -10000000000.0,10000000000.0,1000000.0,0,544)
DeclareDerivative("SuctionLine.Cells[17].der(h)", "der(Fluid specific enthalpy at the cells) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[17].T", "Fluid temperature [K|degC]", \
"SuctionLine.Cells[17].fluidState.T", 1, 5, 13643, 0)
DeclareAlias2("SuctionLine.Cells[17].rho", "Fluid cell density [kg/m3|g/cm3]", \
"SuctionLine.Summary.rho[17]", 1, 5, 10644, 0)
DeclareAlias2("SuctionLine.Cells[17].drdh", "Derivative of density by enthalpy [kg.s2/m5]",\
 "SuctionLine.Cells[17].fluidState.ddhp", 1, 5, 13649, 0)
DeclareAlias2("SuctionLine.Cells[17].drdp", "Derivative of density by pressure [s2/m2]",\
 "SuctionLine.Cells[17].fluidState.ddph", 1, 5, 13650, 0)
DeclareAlias2("SuctionLine.Cells[17].hnode_su", "Enthalpy state variable at inlet node [J/kg]",\
 "SuctionLine.Summary.hnode[17]", 1, 5, 10624, 0)
DeclareAlias2("SuctionLine.Cells[17].hnode_ex", "Enthalpy state variable at outlet node [J/kg]",\
 "SuctionLine.Cells[17].OutFlow.h_outflow", 1, 5, 13614, 0)
DeclareVariable("SuctionLine.Cells[17].dMdt", "Time derivative of mass in cell [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[17].qdot", "heat flux at each cell [W/m2]", \
"SuctionLineWall.Wall_int.phi[17]", -1, 5, 1357, 0)
DeclareAlias2("SuctionLine.Cells[17].x", "Vapor quality [1]", "SuctionLine.Summary.x[17]", 1,\
 5, 10683, 0)
DeclareAlias2("SuctionLine.Cells[17].h_l", "[J/kg]", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[17].h_v", "[J/kg]", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareVariable("SuctionLine.Cells[17].Q_tot", "Total heat flux exchanged by the thermal port [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].M_tot", "Total mass of the fluid in the component [kg]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[17].alpha", "[1]", "SuctionLine.Summary.alpha[17]", 1,\
 5, 10702, 0)
DeclareAlias2("SuctionLine.Cells[17].rho_l", "[kg/m3|g/cm3]", "SuctionLine.sat.dl", 1,\
 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[17].rho_v", "[kg/m3|g/cm3]", "SuctionLine.sat.dv", 1,\
 5, 10747, 0)
DeclareVariable("SuctionLine.Cells[17].mu_l", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].mu_v", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].G", "Mass Flow rate per unit of area [Pa.m-1.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[17].drvdp", "Derivative of density of dewpoint by pressure [s2/m2]",\
 "SuctionLine.Cells[17].fluidStateDewPoint.ddph", 1, 5, 13672, 0)
DeclareAlias2("SuctionLine.Cells[17].drldp", "Derivative of density of bublepoint by pressure [s2/m2]",\
 "SuctionLine.Cells[17].fluidStateBubblePoint.ddph", 1, 5, 13687, 0)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.T", "temperature [K|degC]",\
 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.d", "density [kg/m3|g/cm3]",\
 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.p", "pressure [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[17].fluidStateDewPoint.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[17].fluidStateBubblePoint.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].dalphadp_h", "Derivative of the void fraction with respect to pressure at constant enthalpy [N.kg-2.s4]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].dalphadh_p", "Derivative of the void fraction with respect to enthalpy at constant pressure [s2/m2]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateB_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].sat_fluidStateA_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].deltaP", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[17].fluidStateB_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[17].fluidStateA_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[17].deltaH", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[18].InFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "SuctionLine.Cells[17].OutFlow.m_flow", -1, 5, 13613, 132)
DeclareAlias2("SuctionLine.Cells[18].InFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareAlias2("SuctionLine.Cells[18].InFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "SuctionLine.Summary.hnode[18]", 1, 5, 10625, 4)
DeclareVariable("SuctionLine.Cells[18].OutFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,776)
DeclareAlias2("SuctionLine.Cells[18].OutFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareVariable("SuctionLine.Cells[18].OutFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("SuctionLine.Cells[18].Wall_int.T", "Temperature [K|degC]", \
"SuctionLineWall.T_wall[18]", 1, 1, 128, 4)
DeclareAlias2("SuctionLine.Cells[18].Wall_int.phi", "Heat flux [W/m2]", \
"SuctionLineWall.Wall_int.phi[18]", -1, 5, 1358, 132)
DeclareVariable("SuctionLine.Cells[18].Nt", "Number of cells in parallel [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("SuctionLine.Cells[18].pi", "pi-greco", 3.141592653589793, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].Vi", "Volume of a single cell [m3]", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].Ai", "Lateral surface of a single cell [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].Mdotnom", "Nominal fluid flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].Unom_l", "if HTtype = LiqVap : Heat transfer coefficient, liquid zone  [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].Unom_tp", "if HTtype = LiqVap : heat transfer coefficient, two-phase zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].Unom_v", "if HTtype = LiqVap : heat transfer coefficient, vapor zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("SuctionLine.Cells[18].deltapercentage", "Percentage of absolute pressure to use in numerical derivative",\
 275, 1E-005, 0.0,0.0,0.0,0,560)
DeclareParameter("SuctionLine.Cells[18].g", "Gravity [m/s2]", 276, 9.8, 0.0,0.0,\
0.0,0,560)
DeclareVariable("SuctionLine.Cells[18].Ad", "Cross section area [m2]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].Dtube", "Cross section area [m]", 0.0, \
0.0,1E+100,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].voidFractionChoice", "1 to Homogeneus, 2 to Steiner, 3 to Premoli with clvf [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[18].clvf", "clvf to be used in Premoli model",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].voidFractionDerivatives", \
"Set to yes include void fraction derivatives in the calculation [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[18].UseVoidFractionModel", "Set to yes consider the void fraction models [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[18].pstart", "Fluid pressure start value [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].hstart", "Start value of enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,513)
DeclareVariable("SuctionLine.Cells[18].Discretization", "Selection of the spatial discretization scheme [:#(type=ThermoCycle.Functions.Enumerations.Discretizations)]",\
 4, 1.0,5.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[18].Mdotconst", "Set to yes to assume constant mass flow rate at each node (easier convergence) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[18].max_der", "Set to yes to limit the density derivative during phase transitions [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[18].filter_dMdt", "Set to yes to filter dMdt with a first-order filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[18].max_drhodt", "Maximum value for the density derivative",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].TT", "Integration time of the first-order filter [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].ComputeSat", "Can be disabled if the flow is single-phase, or if saturation is passed as a parameter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("SuctionLine.Cells[18].sat_in[1]", "", "SuctionLine.sat.ddldp", 1,\
 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[2]", "", "SuctionLine.sat.ddvdp", 1,\
 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[3]", "", "SuctionLine.sat.dhldp", 1,\
 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[4]", "", "SuctionLine.sat.dhvdp", 1,\
 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[5]", "", "SuctionLine.sat.dTp", 1, 5,\
 10741, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[6]", "", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[7]", "", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[8]", "", "SuctionLine.sat.sigma", 1,\
 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[9]", "", "SuctionLine.sat.sl", 1, 5,\
 10752, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[10]", "", "SuctionLine.sat.sv", 1, 5,\
 10753, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[11]", "", "SuctionLine.sat.dl", 1, 5,\
 10746, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[12]", "", "SuctionLine.sat.dv", 1, 5,\
 10747, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[13]", "", "SuctionLine.sat.psat", 1,\
 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[18].sat_in[14]", "", "SuctionLine.sat.Tsat", 1,\
 5, 10740, 0)
DeclareVariable("SuctionLine.Cells[18].steadystate", "if true, sets the derivative of h (working fluids enthalpy in each cell) to zero during Initialization [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[18].heatTransfer.n", "Number of heat transfer segments [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].T", \
"temperature [K|degC]", "SuctionLine.Cells[18].fluidState.T", 1, 5, 13817, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].a", \
"velocity of sound [m/s]", "SuctionLine.Cells[18].fluidState.a", 1, 5, 13818, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].beta", \
"isobaric expansion coefficient [1/K]", "SuctionLine.Cells[18].fluidState.beta", 1,\
 5, 13819, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].cp", \
"specific heat capacity cp [J/(kg.K)]", "SuctionLine.Cells[18].fluidState.cp", 1,\
 5, 13820, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].cv", \
"specific heat capacity cv [J/(kg.K)]", "SuctionLine.Cells[18].fluidState.cv", 1,\
 5, 13821, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].d", \
"density [kg/m3|g/cm3]", "SuctionLine.Cells[18].fluidState.d", 1, 5, 13822, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", \
"SuctionLine.Cells[18].fluidState.ddhp", 1, 5, 13823, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", \
"SuctionLine.Cells[18].fluidState.ddph", 1, 5, 13824, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].eta", \
"dynamic viscosity [Pa.s]", "SuctionLine.Cells[18].fluidState.eta", 1, 5, 13825,\
 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].h", \
"specific enthalpy [J/kg]", "SuctionLine.Cells[18].fluidState.h", 1, 5, 13826, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].kappa", \
"compressibility [1/Pa]", "SuctionLine.Cells[18].fluidState.kappa", 1, 5, 13827,\
 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].lambda", \
"thermal conductivity [W/(m.K)]", "SuctionLine.Cells[18].fluidState.lambda", 1, 5,\
 13828, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].p", \
"pressure [Pa|bar]", "SuctionLine.Cells[18].fluidState.p", 1, 5, 13829, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", \
"SuctionLine.Cells[18].fluidState.phase", 1, 5, 13830, 66)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.FluidState[1].s", \
"specific entropy [J/(kg.K)]", "SuctionLine.Cells[18].fluidState.s", 1, 5, 13831,\
 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.q_dot[1]", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[18]", -1, 5, 1358, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.T_fluid[1]", "Temperature of the fluid for the heat transfer process [K|degC]",\
 "SuctionLine.Cells[18].fluidState.T", 1, 5, 13817, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.thermalPortL[1].T", \
"Temperature [K|degC]", "SuctionLineWall.T_wall[18]", 1, 1, 128, 4)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.thermalPortL[1].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[18]", -1, 5, 1358, 132)
DeclareVariable("SuctionLine.Cells[18].heatTransfer.Mdotnom", "Nomnial Mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.Unom_l", "Nominal heat transfer coefficient liquid side [W/(m2.K)]",\
 "SuctionLine.Cells[18].Unom_l", 1, 5, 13794, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.Unom_tp", "nominal heat transfer coefficient two phase side [W/(m2.K)]",\
 "SuctionLine.Cells[18].Unom_tp", 1, 5, 13795, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.Unom_v", "nominal heat transfer coefficient vapor side [W/(m2.K)]",\
 "SuctionLine.Cells[18].Unom_v", 1, 5, 13796, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.M_dot", "Inlet massflow [kg/s]",\
 "SuctionLine.Summary.Mdot[18]", 1, 5, 10664, 0)
DeclareAlias2("SuctionLine.Cells[18].heatTransfer.x", "Vapor quality [1]", \
"SuctionLine.Summary.x[18]", 1, 5, 10684, 0)
DeclareVariable("SuctionLine.Cells[18].heatTransfer.Unom", "Nominal heat transfer coefficient- Average of liquid two phase and vapor [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[18].heatTransfer.U[1]", "Heat transfer coefficient [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.T", "temperature [K|degC]", \
288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.beta", "isobaric expansion coefficient [1/K]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.d", "density [kg/m3|g/cm3]", 1,\
 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.ddhp", "derivative of density wrt enthalpy at constant pressure [kg.s2/m5]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.ddph", "derivative of density wrt pressure at constant enthalpy [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.kappa", "compressibility [1/Pa]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.lambda", "thermal conductivity [W/(m.K)]",\
 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.p", "pressure [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidState.phase", "phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]",\
 0, 0.0,2.0,0.0,0,708)
DeclareVariable("SuctionLine.Cells[18].fluidState.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareAlias2("SuctionLine.Cells[18].sat.Tsat", "saturation temperature [K|degC]",\
 "SuctionLine.sat.Tsat", 1, 5, 10740, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.dTp", "derivative of Ts wrt pressure", \
"SuctionLine.sat.dTp", 1, 5, 10741, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.ddldp", "derivative of dls wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddldp", 1, 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.ddvdp", "derivative of dvs wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddvdp", 1, 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.dhldp", "derivative of hls wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhldp", 1, 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.dhvdp", "derivative of hvs wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhvdp", 1, 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.dl", "density at bubble line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dl", 1, 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.dv", "density at dew line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dv", 1, 5, 10747, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.hl", "specific enthalpy at bubble line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hl", 1, 5, 10748, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.hv", "specific enthalpy at dew line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hv", 1, 5, 10749, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.psat", "saturation pressure [Pa|bar]", \
"SuctionLine.sat.psat", 1, 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.sigma", "surface tension [N/m]", \
"SuctionLine.sat.sigma", 1, 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.sl", "specific entropy at bubble line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sl", 1, 5, 10752, 0)
DeclareAlias2("SuctionLine.Cells[18].sat.sv", "specific entropy at dew line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sv", 1, 5, 10753, 0)
DeclareAlias2("SuctionLine.Cells[18].p", "[Pa|bar]", "Evaporator.Cells[1].InFlow.p", 1,\
 5, 7055, 0)
DeclareAlias2("SuctionLine.Cells[18].der(p)", "[Pa/s]", "Evaporator.Cells[1].der(p)", 1,\
 6, 162, 0)
DeclareAlias2("SuctionLine.Cells[18].M_dot_su", "[kg/s]", "SuctionLine.Summary.Mdot[18]", 1,\
 5, 10664, 0)
DeclareVariable("SuctionLine.Cells[18].M_dot_ex", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("SuctionLine.Cells[18].h", "Fluid specific enthalpy at the cells [J/kg]",\
 200, 0.0, -10000000000.0,10000000000.0,1000000.0,0,544)
DeclareDerivative("SuctionLine.Cells[18].der(h)", "der(Fluid specific enthalpy at the cells) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[18].T", "Fluid temperature [K|degC]", \
"SuctionLine.Cells[18].fluidState.T", 1, 5, 13817, 0)
DeclareAlias2("SuctionLine.Cells[18].rho", "Fluid cell density [kg/m3|g/cm3]", \
"SuctionLine.Summary.rho[18]", 1, 5, 10645, 0)
DeclareAlias2("SuctionLine.Cells[18].drdh", "Derivative of density by enthalpy [kg.s2/m5]",\
 "SuctionLine.Cells[18].fluidState.ddhp", 1, 5, 13823, 0)
DeclareAlias2("SuctionLine.Cells[18].drdp", "Derivative of density by pressure [s2/m2]",\
 "SuctionLine.Cells[18].fluidState.ddph", 1, 5, 13824, 0)
DeclareAlias2("SuctionLine.Cells[18].hnode_su", "Enthalpy state variable at inlet node [J/kg]",\
 "SuctionLine.Summary.hnode[18]", 1, 5, 10625, 0)
DeclareAlias2("SuctionLine.Cells[18].hnode_ex", "Enthalpy state variable at outlet node [J/kg]",\
 "SuctionLine.Cells[18].OutFlow.h_outflow", 1, 5, 13788, 0)
DeclareVariable("SuctionLine.Cells[18].dMdt", "Time derivative of mass in cell [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[18].qdot", "heat flux at each cell [W/m2]", \
"SuctionLineWall.Wall_int.phi[18]", -1, 5, 1358, 0)
DeclareAlias2("SuctionLine.Cells[18].x", "Vapor quality [1]", "SuctionLine.Summary.x[18]", 1,\
 5, 10684, 0)
DeclareAlias2("SuctionLine.Cells[18].h_l", "[J/kg]", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[18].h_v", "[J/kg]", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareVariable("SuctionLine.Cells[18].Q_tot", "Total heat flux exchanged by the thermal port [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].M_tot", "Total mass of the fluid in the component [kg]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[18].alpha", "[1]", "SuctionLine.Summary.alpha[18]", 1,\
 5, 10703, 0)
DeclareAlias2("SuctionLine.Cells[18].rho_l", "[kg/m3|g/cm3]", "SuctionLine.sat.dl", 1,\
 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[18].rho_v", "[kg/m3|g/cm3]", "SuctionLine.sat.dv", 1,\
 5, 10747, 0)
DeclareVariable("SuctionLine.Cells[18].mu_l", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].mu_v", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].G", "Mass Flow rate per unit of area [Pa.m-1.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[18].drvdp", "Derivative of density of dewpoint by pressure [s2/m2]",\
 "SuctionLine.Cells[18].fluidStateDewPoint.ddph", 1, 5, 13846, 0)
DeclareAlias2("SuctionLine.Cells[18].drldp", "Derivative of density of bublepoint by pressure [s2/m2]",\
 "SuctionLine.Cells[18].fluidStateBubblePoint.ddph", 1, 5, 13861, 0)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.T", "temperature [K|degC]",\
 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.d", "density [kg/m3|g/cm3]",\
 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.p", "pressure [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[18].fluidStateDewPoint.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[18].fluidStateBubblePoint.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].dalphadp_h", "Derivative of the void fraction with respect to pressure at constant enthalpy [N.kg-2.s4]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].dalphadh_p", "Derivative of the void fraction with respect to enthalpy at constant pressure [s2/m2]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateB_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].sat_fluidStateA_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].deltaP", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[18].fluidStateB_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[18].fluidStateA_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[18].deltaH", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[19].InFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "SuctionLine.Cells[18].OutFlow.m_flow", -1, 5, 13787, 132)
DeclareAlias2("SuctionLine.Cells[19].InFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareAlias2("SuctionLine.Cells[19].InFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "SuctionLine.Summary.hnode[19]", 1, 5, 10626, 4)
DeclareVariable("SuctionLine.Cells[19].OutFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 0.0, -100000.0,100000.0,0.0,0,776)
DeclareAlias2("SuctionLine.Cells[19].OutFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareVariable("SuctionLine.Cells[19].OutFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,520)
DeclareAlias2("SuctionLine.Cells[19].Wall_int.T", "Temperature [K|degC]", \
"SuctionLineWall.T_wall[19]", 1, 1, 129, 4)
DeclareAlias2("SuctionLine.Cells[19].Wall_int.phi", "Heat flux [W/m2]", \
"SuctionLineWall.Wall_int.phi[19]", -1, 5, 1359, 132)
DeclareVariable("SuctionLine.Cells[19].Nt", "Number of cells in parallel [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("SuctionLine.Cells[19].pi", "pi-greco", 3.141592653589793, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].Vi", "Volume of a single cell [m3]", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].Ai", "Lateral surface of a single cell [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].Mdotnom", "Nominal fluid flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].Unom_l", "if HTtype = LiqVap : Heat transfer coefficient, liquid zone  [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].Unom_tp", "if HTtype = LiqVap : heat transfer coefficient, two-phase zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].Unom_v", "if HTtype = LiqVap : heat transfer coefficient, vapor zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("SuctionLine.Cells[19].deltapercentage", "Percentage of absolute pressure to use in numerical derivative",\
 277, 1E-005, 0.0,0.0,0.0,0,560)
DeclareParameter("SuctionLine.Cells[19].g", "Gravity [m/s2]", 278, 9.8, 0.0,0.0,\
0.0,0,560)
DeclareVariable("SuctionLine.Cells[19].Ad", "Cross section area [m2]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].Dtube", "Cross section area [m]", 0.0, \
0.0,1E+100,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].voidFractionChoice", "1 to Homogeneus, 2 to Steiner, 3 to Premoli with clvf [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[19].clvf", "clvf to be used in Premoli model",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].voidFractionDerivatives", \
"Set to yes include void fraction derivatives in the calculation [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[19].UseVoidFractionModel", "Set to yes consider the void fraction models [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[19].pstart", "Fluid pressure start value [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].hstart", "Start value of enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,513)
DeclareVariable("SuctionLine.Cells[19].Discretization", "Selection of the spatial discretization scheme [:#(type=ThermoCycle.Functions.Enumerations.Discretizations)]",\
 4, 1.0,5.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[19].Mdotconst", "Set to yes to assume constant mass flow rate at each node (easier convergence) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[19].max_der", "Set to yes to limit the density derivative during phase transitions [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[19].filter_dMdt", "Set to yes to filter dMdt with a first-order filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[19].max_drhodt", "Maximum value for the density derivative",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].TT", "Integration time of the first-order filter [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].ComputeSat", "Can be disabled if the flow is single-phase, or if saturation is passed as a parameter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("SuctionLine.Cells[19].sat_in[1]", "", "SuctionLine.sat.ddldp", 1,\
 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[2]", "", "SuctionLine.sat.ddvdp", 1,\
 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[3]", "", "SuctionLine.sat.dhldp", 1,\
 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[4]", "", "SuctionLine.sat.dhvdp", 1,\
 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[5]", "", "SuctionLine.sat.dTp", 1, 5,\
 10741, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[6]", "", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[7]", "", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[8]", "", "SuctionLine.sat.sigma", 1,\
 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[9]", "", "SuctionLine.sat.sl", 1, 5,\
 10752, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[10]", "", "SuctionLine.sat.sv", 1, 5,\
 10753, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[11]", "", "SuctionLine.sat.dl", 1, 5,\
 10746, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[12]", "", "SuctionLine.sat.dv", 1, 5,\
 10747, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[13]", "", "SuctionLine.sat.psat", 1,\
 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[19].sat_in[14]", "", "SuctionLine.sat.Tsat", 1,\
 5, 10740, 0)
DeclareVariable("SuctionLine.Cells[19].steadystate", "if true, sets the derivative of h (working fluids enthalpy in each cell) to zero during Initialization [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[19].heatTransfer.n", "Number of heat transfer segments [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].T", \
"temperature [K|degC]", "SuctionLine.Cells[19].fluidState.T", 1, 5, 13991, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].a", \
"velocity of sound [m/s]", "SuctionLine.Cells[19].fluidState.a", 1, 5, 13992, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].beta", \
"isobaric expansion coefficient [1/K]", "SuctionLine.Cells[19].fluidState.beta", 1,\
 5, 13993, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].cp", \
"specific heat capacity cp [J/(kg.K)]", "SuctionLine.Cells[19].fluidState.cp", 1,\
 5, 13994, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].cv", \
"specific heat capacity cv [J/(kg.K)]", "SuctionLine.Cells[19].fluidState.cv", 1,\
 5, 13995, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].d", \
"density [kg/m3|g/cm3]", "SuctionLine.Cells[19].fluidState.d", 1, 5, 13996, 0)
EndNonAlias(15)
PreNonAliasNew(16)
StartNonAlias(16)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", \
"SuctionLine.Cells[19].fluidState.ddhp", 1, 5, 13997, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", \
"SuctionLine.Cells[19].fluidState.ddph", 1, 5, 13998, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].eta", \
"dynamic viscosity [Pa.s]", "SuctionLine.Cells[19].fluidState.eta", 1, 5, 13999,\
 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].h", \
"specific enthalpy [J/kg]", "SuctionLine.Cells[19].fluidState.h", 1, 5, 14000, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].kappa", \
"compressibility [1/Pa]", "SuctionLine.Cells[19].fluidState.kappa", 1, 5, 14001,\
 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].lambda", \
"thermal conductivity [W/(m.K)]", "SuctionLine.Cells[19].fluidState.lambda", 1, 5,\
 14002, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].p", \
"pressure [Pa|bar]", "SuctionLine.Cells[19].fluidState.p", 1, 5, 14003, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", \
"SuctionLine.Cells[19].fluidState.phase", 1, 5, 14004, 66)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.FluidState[1].s", \
"specific entropy [J/(kg.K)]", "SuctionLine.Cells[19].fluidState.s", 1, 5, 14005,\
 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.q_dot[1]", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[19]", -1, 5, 1359, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.T_fluid[1]", "Temperature of the fluid for the heat transfer process [K|degC]",\
 "SuctionLine.Cells[19].fluidState.T", 1, 5, 13991, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.thermalPortL[1].T", \
"Temperature [K|degC]", "SuctionLineWall.T_wall[19]", 1, 1, 129, 4)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.thermalPortL[1].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[19]", -1, 5, 1359, 132)
DeclareVariable("SuctionLine.Cells[19].heatTransfer.Mdotnom", "Nomnial Mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.Unom_l", "Nominal heat transfer coefficient liquid side [W/(m2.K)]",\
 "SuctionLine.Cells[19].Unom_l", 1, 5, 13968, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.Unom_tp", "nominal heat transfer coefficient two phase side [W/(m2.K)]",\
 "SuctionLine.Cells[19].Unom_tp", 1, 5, 13969, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.Unom_v", "nominal heat transfer coefficient vapor side [W/(m2.K)]",\
 "SuctionLine.Cells[19].Unom_v", 1, 5, 13970, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.M_dot", "Inlet massflow [kg/s]",\
 "SuctionLine.Summary.Mdot[19]", 1, 5, 10665, 0)
DeclareAlias2("SuctionLine.Cells[19].heatTransfer.x", "Vapor quality [1]", \
"SuctionLine.Summary.x[19]", 1, 5, 10685, 0)
DeclareVariable("SuctionLine.Cells[19].heatTransfer.Unom", "Nominal heat transfer coefficient- Average of liquid two phase and vapor [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[19].heatTransfer.U[1]", "Heat transfer coefficient [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.T", "temperature [K|degC]", \
288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.beta", "isobaric expansion coefficient [1/K]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.d", "density [kg/m3|g/cm3]", 1,\
 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.ddhp", "derivative of density wrt enthalpy at constant pressure [kg.s2/m5]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.ddph", "derivative of density wrt pressure at constant enthalpy [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.kappa", "compressibility [1/Pa]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.lambda", "thermal conductivity [W/(m.K)]",\
 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.p", "pressure [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidState.phase", "phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]",\
 0, 0.0,2.0,0.0,0,708)
DeclareVariable("SuctionLine.Cells[19].fluidState.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareAlias2("SuctionLine.Cells[19].sat.Tsat", "saturation temperature [K|degC]",\
 "SuctionLine.sat.Tsat", 1, 5, 10740, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.dTp", "derivative of Ts wrt pressure", \
"SuctionLine.sat.dTp", 1, 5, 10741, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.ddldp", "derivative of dls wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddldp", 1, 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.ddvdp", "derivative of dvs wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddvdp", 1, 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.dhldp", "derivative of hls wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhldp", 1, 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.dhvdp", "derivative of hvs wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhvdp", 1, 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.dl", "density at bubble line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dl", 1, 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.dv", "density at dew line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dv", 1, 5, 10747, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.hl", "specific enthalpy at bubble line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hl", 1, 5, 10748, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.hv", "specific enthalpy at dew line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hv", 1, 5, 10749, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.psat", "saturation pressure [Pa|bar]", \
"SuctionLine.sat.psat", 1, 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.sigma", "surface tension [N/m]", \
"SuctionLine.sat.sigma", 1, 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.sl", "specific entropy at bubble line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sl", 1, 5, 10752, 0)
DeclareAlias2("SuctionLine.Cells[19].sat.sv", "specific entropy at dew line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sv", 1, 5, 10753, 0)
DeclareAlias2("SuctionLine.Cells[19].p", "[Pa|bar]", "Evaporator.Cells[1].InFlow.p", 1,\
 5, 7055, 0)
DeclareAlias2("SuctionLine.Cells[19].der(p)", "[Pa/s]", "Evaporator.Cells[1].der(p)", 1,\
 6, 162, 0)
DeclareAlias2("SuctionLine.Cells[19].M_dot_su", "[kg/s]", "SuctionLine.Summary.Mdot[19]", 1,\
 5, 10665, 0)
DeclareVariable("SuctionLine.Cells[19].M_dot_ex", "[kg/s]", 0.0, 0.0,0.0,0.0,0,512)
DeclareState("SuctionLine.Cells[19].h", "Fluid specific enthalpy at the cells [J/kg]",\
 201, 0.0, -10000000000.0,10000000000.0,1000000.0,0,544)
DeclareDerivative("SuctionLine.Cells[19].der(h)", "der(Fluid specific enthalpy at the cells) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[19].T", "Fluid temperature [K|degC]", \
"SuctionLine.Cells[19].fluidState.T", 1, 5, 13991, 0)
DeclareAlias2("SuctionLine.Cells[19].rho", "Fluid cell density [kg/m3|g/cm3]", \
"SuctionLine.Summary.rho[19]", 1, 5, 10646, 0)
DeclareAlias2("SuctionLine.Cells[19].drdh", "Derivative of density by enthalpy [kg.s2/m5]",\
 "SuctionLine.Cells[19].fluidState.ddhp", 1, 5, 13997, 0)
DeclareAlias2("SuctionLine.Cells[19].drdp", "Derivative of density by pressure [s2/m2]",\
 "SuctionLine.Cells[19].fluidState.ddph", 1, 5, 13998, 0)
DeclareAlias2("SuctionLine.Cells[19].hnode_su", "Enthalpy state variable at inlet node [J/kg]",\
 "SuctionLine.Summary.hnode[19]", 1, 5, 10626, 0)
DeclareAlias2("SuctionLine.Cells[19].hnode_ex", "Enthalpy state variable at outlet node [J/kg]",\
 "SuctionLine.Cells[19].OutFlow.h_outflow", 1, 5, 13962, 0)
DeclareVariable("SuctionLine.Cells[19].dMdt", "Time derivative of mass in cell [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[19].qdot", "heat flux at each cell [W/m2]", \
"SuctionLineWall.Wall_int.phi[19]", -1, 5, 1359, 0)
DeclareAlias2("SuctionLine.Cells[19].x", "Vapor quality [1]", "SuctionLine.Summary.x[19]", 1,\
 5, 10685, 0)
DeclareAlias2("SuctionLine.Cells[19].h_l", "[J/kg]", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[19].h_v", "[J/kg]", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareVariable("SuctionLine.Cells[19].Q_tot", "Total heat flux exchanged by the thermal port [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].M_tot", "Total mass of the fluid in the component [kg]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[19].alpha", "[1]", "SuctionLine.Summary.alpha[19]", 1,\
 5, 10704, 0)
DeclareAlias2("SuctionLine.Cells[19].rho_l", "[kg/m3|g/cm3]", "SuctionLine.sat.dl", 1,\
 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[19].rho_v", "[kg/m3|g/cm3]", "SuctionLine.sat.dv", 1,\
 5, 10747, 0)
DeclareVariable("SuctionLine.Cells[19].mu_l", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].mu_v", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].G", "Mass Flow rate per unit of area [Pa.m-1.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[19].drvdp", "Derivative of density of dewpoint by pressure [s2/m2]",\
 "SuctionLine.Cells[19].fluidStateDewPoint.ddph", 1, 5, 14020, 0)
DeclareAlias2("SuctionLine.Cells[19].drldp", "Derivative of density of bublepoint by pressure [s2/m2]",\
 "SuctionLine.Cells[19].fluidStateBubblePoint.ddph", 1, 5, 14035, 0)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.T", "temperature [K|degC]",\
 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.d", "density [kg/m3|g/cm3]",\
 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.p", "pressure [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[19].fluidStateDewPoint.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[19].fluidStateBubblePoint.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].dalphadp_h", "Derivative of the void fraction with respect to pressure at constant enthalpy [N.kg-2.s4]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].dalphadh_p", "Derivative of the void fraction with respect to enthalpy at constant pressure [s2/m2]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateB_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].sat_fluidStateA_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].deltaP", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[19].fluidStateB_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[19].fluidStateA_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[19].deltaH", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[20].InFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "SuctionLine.Cells[19].OutFlow.m_flow", -1, 5, 13961, 132)
DeclareAlias2("SuctionLine.Cells[20].InFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareAlias2("SuctionLine.Cells[20].InFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "SuctionLine.Summary.hnode[20]", 1, 5, 10627, 4)
DeclareAlias2("SuctionLine.Cells[20].OutFlow.m_flow", "Mass flow rate from the connection point into the component [kg/s]",\
 "DischargeTube.Summary.Mdot", -1, 5, 328, 132)
DeclareAlias2("SuctionLine.Cells[20].OutFlow.p", "Thermodynamic pressure in the connection point [Pa|bar]",\
 "Evaporator.Cells[1].InFlow.p", 1, 5, 7055, 4)
DeclareAlias2("SuctionLine.Cells[20].OutFlow.h_outflow", "Specific thermodynamic enthalpy close to the connection point if m_flow < 0 [J/kg]",\
 "SuctionLine.Summary.hnode[21]", 1, 5, 10628, 4)
DeclareAlias2("SuctionLine.Cells[20].Wall_int.T", "Temperature [K|degC]", \
"SuctionLineWall.T_wall[20]", 1, 1, 130, 4)
DeclareAlias2("SuctionLine.Cells[20].Wall_int.phi", "Heat flux [W/m2]", \
"SuctionLineWall.Wall_int.phi[20]", -1, 5, 1360, 132)
DeclareVariable("SuctionLine.Cells[20].Nt", "Number of cells in parallel [:#(type=Integer)]",\
 1, 1.0,1E+100,0.0,0,517)
DeclareVariable("SuctionLine.Cells[20].pi", "pi-greco", 3.141592653589793, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].Vi", "Volume of a single cell [m3]", 0.0,\
 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].Ai", "Lateral surface of a single cell [m2]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].Mdotnom", "Nominal fluid flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].Unom_l", "if HTtype = LiqVap : Heat transfer coefficient, liquid zone  [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].Unom_tp", "if HTtype = LiqVap : heat transfer coefficient, two-phase zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].Unom_v", "if HTtype = LiqVap : heat transfer coefficient, vapor zone [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareParameter("SuctionLine.Cells[20].deltapercentage", "Percentage of absolute pressure to use in numerical derivative",\
 279, 1E-005, 0.0,0.0,0.0,0,560)
DeclareParameter("SuctionLine.Cells[20].g", "Gravity [m/s2]", 280, 9.8, 0.0,0.0,\
0.0,0,560)
DeclareVariable("SuctionLine.Cells[20].Ad", "Cross section area [m2]", 0.0, \
0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].Dtube", "Cross section area [m]", 0.0, \
0.0,1E+100,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].voidFractionChoice", "1 to Homogeneus, 2 to Steiner, 3 to Premoli with clvf [:#(type=Integer)]",\
 0, 0.0,0.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[20].clvf", "clvf to be used in Premoli model",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].voidFractionDerivatives", \
"Set to yes include void fraction derivatives in the calculation [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[20].UseVoidFractionModel", "Set to yes consider the void fraction models [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[20].pstart", "Fluid pressure start value [Pa|bar]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].hstart", "Start value of enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,513)
DeclareVariable("SuctionLine.Cells[20].Discretization", "Selection of the spatial discretization scheme [:#(type=ThermoCycle.Functions.Enumerations.Discretizations)]",\
 4, 1.0,5.0,0.0,0,517)
DeclareVariable("SuctionLine.Cells[20].Mdotconst", "Set to yes to assume constant mass flow rate at each node (easier convergence) [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[20].max_der", "Set to yes to limit the density derivative during phase transitions [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[20].filter_dMdt", "Set to yes to filter dMdt with a first-order filter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[20].max_drhodt", "Maximum value for the density derivative",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].TT", "Integration time of the first-order filter [s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].ComputeSat", "Can be disabled if the flow is single-phase, or if saturation is passed as a parameter [:#(type=Boolean)]",\
 false, 0.0,0.0,0.0,0,515)
DeclareAlias2("SuctionLine.Cells[20].sat_in[1]", "", "SuctionLine.sat.ddldp", 1,\
 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[2]", "", "SuctionLine.sat.ddvdp", 1,\
 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[3]", "", "SuctionLine.sat.dhldp", 1,\
 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[4]", "", "SuctionLine.sat.dhvdp", 1,\
 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[5]", "", "SuctionLine.sat.dTp", 1, 5,\
 10741, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[6]", "", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[7]", "", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[8]", "", "SuctionLine.sat.sigma", 1,\
 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[9]", "", "SuctionLine.sat.sl", 1, 5,\
 10752, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[10]", "", "SuctionLine.sat.sv", 1, 5,\
 10753, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[11]", "", "SuctionLine.sat.dl", 1, 5,\
 10746, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[12]", "", "SuctionLine.sat.dv", 1, 5,\
 10747, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[13]", "", "SuctionLine.sat.psat", 1,\
 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[20].sat_in[14]", "", "SuctionLine.sat.Tsat", 1,\
 5, 10740, 0)
DeclareVariable("SuctionLine.Cells[20].steadystate", "if true, sets the derivative of h (working fluids enthalpy in each cell) to zero during Initialization [:#(type=Boolean)]",\
 true, 0.0,0.0,0.0,0,515)
DeclareVariable("SuctionLine.Cells[20].heatTransfer.n", "Number of heat transfer segments [:#(type=Integer)]",\
 1, 0.0,0.0,0.0,0,517)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].T", \
"temperature [K|degC]", "SuctionLine.Cells[20].fluidState.T", 1, 5, 14163, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].a", \
"velocity of sound [m/s]", "SuctionLine.Cells[20].fluidState.a", 1, 5, 14164, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].beta", \
"isobaric expansion coefficient [1/K]", "SuctionLine.Cells[20].fluidState.beta", 1,\
 5, 14165, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].cp", \
"specific heat capacity cp [J/(kg.K)]", "SuctionLine.Cells[20].fluidState.cp", 1,\
 5, 14166, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].cv", \
"specific heat capacity cv [J/(kg.K)]", "SuctionLine.Cells[20].fluidState.cv", 1,\
 5, 14167, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].d", \
"density [kg/m3|g/cm3]", "SuctionLine.Cells[20].fluidState.d", 1, 5, 14168, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", \
"SuctionLine.Cells[20].fluidState.ddhp", 1, 5, 14169, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", \
"SuctionLine.Cells[20].fluidState.ddph", 1, 5, 14170, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].eta", \
"dynamic viscosity [Pa.s]", "SuctionLine.Cells[20].fluidState.eta", 1, 5, 14171,\
 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].h", \
"specific enthalpy [J/kg]", "SuctionLine.Cells[20].fluidState.h", 1, 5, 14172, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].kappa", \
"compressibility [1/Pa]", "SuctionLine.Cells[20].fluidState.kappa", 1, 5, 14173,\
 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].lambda", \
"thermal conductivity [W/(m.K)]", "SuctionLine.Cells[20].fluidState.lambda", 1, 5,\
 14174, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].p", \
"pressure [Pa|bar]", "SuctionLine.Cells[20].fluidState.p", 1, 5, 14175, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", \
"SuctionLine.Cells[20].fluidState.phase", 1, 5, 14176, 66)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.FluidState[1].s", \
"specific entropy [J/(kg.K)]", "SuctionLine.Cells[20].fluidState.s", 1, 5, 14177,\
 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.q_dot[1]", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[20]", -1, 5, 1360, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.T_fluid[1]", "Temperature of the fluid for the heat transfer process [K|degC]",\
 "SuctionLine.Cells[20].fluidState.T", 1, 5, 14163, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.thermalPortL[1].T", \
"Temperature [K|degC]", "SuctionLineWall.T_wall[20]", 1, 1, 130, 4)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.thermalPortL[1].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[20]", -1, 5, 1360, 132)
DeclareVariable("SuctionLine.Cells[20].heatTransfer.Mdotnom", "Nomnial Mass flow rate [kg/s]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.Unom_l", "Nominal heat transfer coefficient liquid side [W/(m2.K)]",\
 "SuctionLine.Cells[20].Unom_l", 1, 5, 14140, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.Unom_tp", "nominal heat transfer coefficient two phase side [W/(m2.K)]",\
 "SuctionLine.Cells[20].Unom_tp", 1, 5, 14141, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.Unom_v", "nominal heat transfer coefficient vapor side [W/(m2.K)]",\
 "SuctionLine.Cells[20].Unom_v", 1, 5, 14142, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.M_dot", "Inlet massflow [kg/s]",\
 "SuctionLine.Summary.Mdot[20]", 1, 5, 10666, 0)
DeclareAlias2("SuctionLine.Cells[20].heatTransfer.x", "Vapor quality [1]", \
"SuctionLine.Summary.x[20]", 1, 5, 10686, 0)
DeclareVariable("SuctionLine.Cells[20].heatTransfer.Unom", "Nominal heat transfer coefficient- Average of liquid two phase and vapor [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,513)
DeclareVariable("SuctionLine.Cells[20].heatTransfer.U[1]", "Heat transfer coefficient [W/(m2.K)]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.T", "temperature [K|degC]", \
288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.beta", "isobaric expansion coefficient [1/K]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.d", "density [kg/m3|g/cm3]", 1,\
 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.ddhp", "derivative of density wrt enthalpy at constant pressure [kg.s2/m5]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.ddph", "derivative of density wrt pressure at constant enthalpy [s2/m2]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.kappa", "compressibility [1/Pa]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.lambda", "thermal conductivity [W/(m.K)]",\
 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.p", "pressure [Pa|bar]", \
100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidState.phase", "phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]",\
 0, 0.0,2.0,0.0,0,708)
DeclareVariable("SuctionLine.Cells[20].fluidState.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareAlias2("SuctionLine.Cells[20].sat.Tsat", "saturation temperature [K|degC]",\
 "SuctionLine.sat.Tsat", 1, 5, 10740, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.dTp", "derivative of Ts wrt pressure", \
"SuctionLine.sat.dTp", 1, 5, 10741, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.ddldp", "derivative of dls wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddldp", 1, 5, 10742, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.ddvdp", "derivative of dvs wrt pressure [s2/m2]",\
 "SuctionLine.sat.ddvdp", 1, 5, 10743, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.dhldp", "derivative of hls wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhldp", 1, 5, 10744, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.dhvdp", "derivative of hvs wrt pressure [J.m.s2/kg2]",\
 "SuctionLine.sat.dhvdp", 1, 5, 10745, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.dl", "density at bubble line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dl", 1, 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.dv", "density at dew line (for pressure ps) [kg/m3|g/cm3]",\
 "SuctionLine.sat.dv", 1, 5, 10747, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.hl", "specific enthalpy at bubble line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hl", 1, 5, 10748, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.hv", "specific enthalpy at dew line (for pressure ps) [J/kg]",\
 "SuctionLine.sat.hv", 1, 5, 10749, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.psat", "saturation pressure [Pa|bar]", \
"SuctionLine.sat.psat", 1, 5, 10750, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.sigma", "surface tension [N/m]", \
"SuctionLine.sat.sigma", 1, 5, 10751, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.sl", "specific entropy at bubble line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sl", 1, 5, 10752, 0)
DeclareAlias2("SuctionLine.Cells[20].sat.sv", "specific entropy at dew line (for pressure ps) [J/(kg.K)]",\
 "SuctionLine.sat.sv", 1, 5, 10753, 0)
DeclareAlias2("SuctionLine.Cells[20].p", "[Pa|bar]", "Evaporator.Cells[1].InFlow.p", 1,\
 5, 7055, 0)
DeclareAlias2("SuctionLine.Cells[20].der(p)", "[Pa/s]", "Evaporator.Cells[1].der(p)", 1,\
 6, 162, 0)
DeclareAlias2("SuctionLine.Cells[20].M_dot_su", "[kg/s]", "SuctionLine.Summary.Mdot[20]", 1,\
 5, 10666, 0)
DeclareAlias2("SuctionLine.Cells[20].M_dot_ex", "[kg/s]", "SuctionLine.Summary.Mdot[21]", 1,\
 5, 10667, 0)
DeclareState("SuctionLine.Cells[20].h", "Fluid specific enthalpy at the cells [J/kg]",\
 202, 0.0, -10000000000.0,10000000000.0,1000000.0,0,544)
DeclareDerivative("SuctionLine.Cells[20].der(h)", "der(Fluid specific enthalpy at the cells) [m2/s3]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[20].T", "Fluid temperature [K|degC]", \
"SuctionLine.Cells[20].fluidState.T", 1, 5, 14163, 0)
DeclareAlias2("SuctionLine.Cells[20].rho", "Fluid cell density [kg/m3|g/cm3]", \
"SuctionLine.Summary.rho[20]", 1, 5, 10647, 0)
DeclareAlias2("SuctionLine.Cells[20].drdh", "Derivative of density by enthalpy [kg.s2/m5]",\
 "SuctionLine.Cells[20].fluidState.ddhp", 1, 5, 14169, 0)
DeclareAlias2("SuctionLine.Cells[20].drdp", "Derivative of density by pressure [s2/m2]",\
 "SuctionLine.Cells[20].fluidState.ddph", 1, 5, 14170, 0)
DeclareAlias2("SuctionLine.Cells[20].hnode_su", "Enthalpy state variable at inlet node [J/kg]",\
 "SuctionLine.Summary.hnode[20]", 1, 5, 10627, 0)
DeclareAlias2("SuctionLine.Cells[20].hnode_ex", "Enthalpy state variable at outlet node [J/kg]",\
 "SuctionLine.Summary.hnode[21]", 1, 5, 10628, 0)
DeclareVariable("SuctionLine.Cells[20].dMdt", "Time derivative of mass in cell [kg/s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[20].qdot", "heat flux at each cell [W/m2]", \
"SuctionLineWall.Wall_int.phi[20]", -1, 5, 1360, 0)
DeclareAlias2("SuctionLine.Cells[20].x", "Vapor quality [1]", "SuctionLine.Summary.x[20]", 1,\
 5, 10686, 0)
DeclareAlias2("SuctionLine.Cells[20].h_l", "[J/kg]", "SuctionLine.sat.hl", 1, 5,\
 10748, 0)
DeclareAlias2("SuctionLine.Cells[20].h_v", "[J/kg]", "SuctionLine.sat.hv", 1, 5,\
 10749, 0)
DeclareVariable("SuctionLine.Cells[20].Q_tot", "Total heat flux exchanged by the thermal port [W]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].M_tot", "Total mass of the fluid in the component [kg]",\
 0.0, 0.0,1E+100,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[20].alpha", "[1]", "SuctionLine.Summary.alpha[20]", 1,\
 5, 10705, 0)
DeclareAlias2("SuctionLine.Cells[20].rho_l", "[kg/m3|g/cm3]", "SuctionLine.sat.dl", 1,\
 5, 10746, 0)
DeclareAlias2("SuctionLine.Cells[20].rho_v", "[kg/m3|g/cm3]", "SuctionLine.sat.dv", 1,\
 5, 10747, 0)
DeclareVariable("SuctionLine.Cells[20].mu_l", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].mu_v", "[Pa.s]", 0.0, 0.0,1E+100,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].G", "Mass Flow rate per unit of area [Pa.m-1.s]",\
 0.0, 0.0,0.0,0.0,0,512)
DeclareAlias2("SuctionLine.Cells[20].drvdp", "Derivative of density of dewpoint by pressure [s2/m2]",\
 "SuctionLine.Cells[20].fluidStateDewPoint.ddph", 1, 5, 14191, 0)
DeclareAlias2("SuctionLine.Cells[20].drldp", "Derivative of density of bublepoint by pressure [s2/m2]",\
 "SuctionLine.Cells[20].fluidStateBubblePoint.ddph", 1, 5, 14206, 0)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.T", "temperature [K|degC]",\
 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.a", "velocity of sound [m/s]",\
 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.cp", "specific heat capacity cp [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.cv", "specific heat capacity cv [J/(kg.K)]",\
 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.d", "density [kg/m3|g/cm3]",\
 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.eta", "dynamic viscosity [Pa.s]",\
 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.h", "specific enthalpy [J/kg]",\
 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.p", "pressure [Pa|bar]",\
 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[20].fluidStateDewPoint.s", "specific entropy [J/(kg.K)]",\
 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[20].fluidStateBubblePoint.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].dalphadp_h", "Derivative of the void fraction with respect to pressure at constant enthalpy [N.kg-2.s4]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].dalphadh_p", "Derivative of the void fraction with respect to enthalpy at constant pressure [s2/m2]",\
 0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateB_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,708)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderp_h.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.Tsat", \
"saturation temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.dTp", \
"derivative of Ts wrt pressure", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.ddldp", \
"derivative of dls wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.ddvdp", \
"derivative of dvs wrt pressure [s2/m2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.dhldp", \
"derivative of hls wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.dhvdp", \
"derivative of hvs wrt pressure [J.m.s2/kg2]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.dl", \
"density at bubble line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.dv", \
"density at dew line (for pressure ps) [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.hl", \
"specific enthalpy at bubble line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.hv", \
"specific enthalpy at dew line (for pressure ps) [J/kg]", 0.0, -10000000000.0,\
10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.psat", \
"saturation pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.sigma", \
"surface tension [N/m]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.sl", \
"specific entropy at bubble line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].sat_fluidStateA_deralphaderp_h.sv", \
"specific entropy at dew line (for pressure ps) [J/(kg.K)]", 0.0, -10000000.0,\
10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].deltaP", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[20].fluidStateB_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.T", \
"temperature [K|degC]", 288.15, 1.0,10000.0,300.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.a", \
"velocity of sound [m/s]", 1000, 0.0,100000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.beta", \
"isobaric expansion coefficient [1/K]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.cp", \
"specific heat capacity cp [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.cv", \
"specific heat capacity cv [J/(kg.K)]", 1000.0, 0.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.d", \
"density [kg/m3|g/cm3]", 1, 0.0,100000.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.ddhp", \
"derivative of density wrt enthalpy at constant pressure [kg.s2/m5]", 0.0, \
0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.ddph", \
"derivative of density wrt pressure at constant enthalpy [s2/m2]", 0.0, 0.0,0.0,\
0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.eta", \
"dynamic viscosity [Pa.s]", 0.001, 0.0,100000000.0,0.001,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.h", \
"specific enthalpy [J/kg]", 0.0, -10000000000.0,10000000000.0,1000000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.kappa", \
"compressibility [1/Pa]", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.lambda", \
"thermal conductivity [W/(m.K)]", 1, 0.0,500.0,1.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.p", \
"pressure [Pa|bar]", 100000.0, 0.0,100000000.0,100000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.phase", \
"phase flag: 2 for two-phase, 1 for one-phase [:#(type=Integer)]", 0, 0.0,2.0,\
0.0,0,644)
DeclareVariable("SuctionLine.Cells[20].fluidStateA_deralphaderh_p.s", \
"specific entropy [J/(kg.K)]", 0.0, -10000000.0,10000000.0,1000.0,0,512)
DeclareVariable("SuctionLine.Cells[20].deltaH", "", 0.0, 0.0,0.0,0.0,0,512)
DeclareVariable("SuctionLine.thermalPortConverter.N", "[:#(type=Integer)]", 20, \
0.0,0.0,0.0,0,517)
DeclareVariable("SuctionLine.thermalPortConverter.multi.N", "Number of nodes [:#(type=Integer)]",\
 20, 1.0,1E+100,0.0,0,525)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[1]", "Temperature at the nodes [K|degC]",\
 "SuctionLine.Cells[1].Wall_int.T", 1, 5, 10760, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[2]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[2]", 1, 1, 112, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[3]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[3]", 1, 1, 113, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[4]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[4]", 1, 1, 114, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[5]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[5]", 1, 1, 115, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[6]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[6]", 1, 1, 116, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[7]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[7]", 1, 1, 117, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[8]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[8]", 1, 1, 118, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[9]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[9]", 1, 1, 119, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[10]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[10]", 1, 1, 120, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[11]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[11]", 1, 1, 121, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[12]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[12]", 1, 1, 122, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[13]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[13]", 1, 1, 123, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[14]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[14]", 1, 1, 124, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[15]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[15]", 1, 1, 125, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[16]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[16]", 1, 1, 126, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[17]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[17]", 1, 1, 127, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[18]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[18]", 1, 1, 128, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[19]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[19]", 1, 1, 129, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.T[20]", "Temperature at the nodes [K|degC]",\
 "SuctionLineWall.T_wall[20]", 1, 1, 130, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[1]", "Heat flux at the nodes [W/m2]",\
 "SuctionLine.Cells[1].Wall_int.phi", 1, 5, 10761, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[2]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[2]", -1, 5, 1342, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[3]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[3]", -1, 5, 1343, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[4]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[4]", -1, 5, 1344, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[5]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[5]", -1, 5, 1345, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[6]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[6]", -1, 5, 1346, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[7]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[7]", -1, 5, 1347, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[8]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[8]", -1, 5, 1348, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[9]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[9]", -1, 5, 1349, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[10]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[10]", -1, 5, 1350, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[11]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[11]", -1, 5, 1351, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[12]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[12]", -1, 5, 1352, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[13]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[13]", -1, 5, 1353, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[14]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[14]", -1, 5, 1354, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[15]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[15]", -1, 5, 1355, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[16]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[16]", -1, 5, 1356, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[17]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[17]", -1, 5, 1357, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[18]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[18]", -1, 5, 1358, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[19]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[19]", -1, 5, 1359, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.multi.phi[20]", "Heat flux at the nodes [W/m2]",\
 "SuctionLineWall.Wall_int.phi[20]", -1, 5, 1360, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[1].T", "Temperature [K|degC]",\
 "SuctionLine.Cells[1].Wall_int.T", 1, 5, 10760, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[1].phi", "Heat flux [W/m2]",\
 "SuctionLine.Cells[1].Wall_int.phi", -1, 5, 10761, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[2].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[2]", 1, 1, 112, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[2].phi", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[2]", 1, 5, 1342, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[3].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[3]", 1, 1, 113, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[3].phi", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[3]", 1, 5, 1343, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[4].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[4]", 1, 1, 114, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[4].phi", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[4]", 1, 5, 1344, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[5].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[5]", 1, 1, 115, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[5].phi", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[5]", 1, 5, 1345, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[6].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[6]", 1, 1, 116, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[6].phi", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[6]", 1, 5, 1346, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[7].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[7]", 1, 1, 117, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[7].phi", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[7]", 1, 5, 1347, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[8].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[8]", 1, 1, 118, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[8].phi", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[8]", 1, 5, 1348, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[9].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[9]", 1, 1, 119, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[9].phi", "Heat flux [W/m2]",\
 "SuctionLineWall.Wall_int.phi[9]", 1, 5, 1349, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[10].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[10]", 1, 1, 120, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[10].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[10]", 1, 5, 1350, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[11].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[11]", 1, 1, 121, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[11].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[11]", 1, 5, 1351, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[12].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[12]", 1, 1, 122, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[12].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[12]", 1, 5, 1352, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[13].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[13]", 1, 1, 123, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[13].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[13]", 1, 5, 1353, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[14].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[14]", 1, 1, 124, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[14].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[14]", 1, 5, 1354, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[15].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[15]", 1, 1, 125, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[15].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[15]", 1, 5, 1355, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[16].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[16]", 1, 1, 126, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[16].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[16]", 1, 5, 1356, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[17].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[17]", 1, 1, 127, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[17].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[17]", 1, 5, 1357, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[18].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[18]", 1, 1, 128, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[18].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[18]", 1, 5, 1358, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[19].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[19]", 1, 1, 129, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[19].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[19]", 1, 5, 1359, 132)
DeclareAlias2("SuctionLine.thermalPortConverter.single[20].T", "Temperature [K|degC]",\
 "SuctionLineWall.T_wall[20]", 1, 1, 130, 4)
DeclareAlias2("SuctionLine.thermalPortConverter.single[20].phi", \
"Heat flux [W/m2]", "SuctionLineWall.Wall_int.phi[20]", 1, 5, 1360, 132)
DeclareAlias2("SuctionLine.hnode_[1]", "[J/kg]", "SuctionLine.Cells[1].InFlow.h_outflow", 1,\
 5, 10756, 1024)
DeclareAlias2("SuctionLine.hnode_[2]", "[J/kg]", "SuctionLine.Summary.hnode[2]", 1,\
 5, 10609, 1024)
DeclareAlias2("SuctionLine.hnode_[3]", "[J/kg]", "SuctionLine.Summary.hnode[3]", 1,\
 5, 10610, 1024)
DeclareAlias2("SuctionLine.hnode_[4]", "[J/kg]", "SuctionLine.Summary.hnode[4]", 1,\
 5, 10611, 1024)
DeclareAlias2("SuctionLine.hnode_[5]", "[J/kg]", "SuctionLine.Summary.hnode[5]", 1,\
 5, 10612, 1024)
DeclareAlias2("SuctionLine.hnode_[6]", "[J/kg]", "SuctionLine.Summary.hnode[6]", 1,\
 5, 10613, 1024)
DeclareAlias2("SuctionLine.hnode_[7]", "[J/kg]", "SuctionLine.Summary.hnode[7]", 1,\
 5, 10614, 1024)
DeclareAlias2("SuctionLine.hnode_[8]", "[J/kg]", "SuctionLine.Summary.hnode[8]", 1,\
 5, 10615, 1024)
DeclareAlias2("SuctionLine.hnode_[9]", "[J/kg]", "SuctionLine.Summary.hnode[9]", 1,\
 5, 10616, 1024)
DeclareAlias2("SuctionLine.hnode_[10]", "[J/kg]", "SuctionLine.Summary.hnode[10]", 1,\
 5, 10617, 1024)
DeclareAlias2("SuctionLine.hnode_[11]", "[J/kg]", "SuctionLine.Summary.hnode[11]", 1,\
 5, 10618, 1024)
DeclareAlias2("SuctionLine.hnode_[12]", "[J/kg]", "SuctionLine.Summary.hnode[12]", 1,\
 5, 10619, 1024)
DeclareAlias2("SuctionLine.hnode_[13]", "[J/kg]", "SuctionLine.Summary.hnode[13]", 1,\
 5, 10620, 1024)
DeclareAlias2("SuctionLine.hnode_[14]", "[J/kg]", "SuctionLine.Summary.hnode[14]", 1,\
 5, 10621, 1024)
DeclareAlias2("SuctionLine.hnode_[15]", "[J/kg]", "SuctionLine.Summary.hnode[15]", 1,\
 5, 10622, 1024)
DeclareAlias2("SuctionLine.hnode_[16]", "[J/kg]", "SuctionLine.Summary.hnode[16]", 1,\
 5, 10623, 1024)
DeclareAlias2("SuctionLine.hnode_[17]", "[J/kg]", "SuctionLine.Summary.hnode[17]", 1,\
 5, 10624, 1024)
DeclareAlias2("SuctionLine.hnode_[18]", "[J/kg]", "SuctionLine.Summary.hnode[18]", 1,\
 5, 10625, 1024)
DeclareAlias2("SuctionLine.hnode_[19]", "[J/kg]", "SuctionLine.Summary.hnode[19]", 1,\
 5, 10626, 1024)
DeclareAlias2("SuctionLine.hnode_[20]", "[J/kg]", "SuctionLine.Summary.hnode[20]", 1,\
 5, 10627, 1024)
DeclareAlias2("SuctionLine.hnode_[21]", "[J/kg]", "SuctionLine.Summary.hnode[21]", 1,\
 5, 10628, 1024)
DeclareAlias2("SuctionLine.Mdot_[1]", "[kg/s]", "SuctionLine.Cells[1].M_dot_su", 1,\
 5, 10858, 1024)
DeclareAlias2("SuctionLine.Mdot_[2]", "[kg/s]", "SuctionLine.Summary.Mdot[2]", 1,\
 5, 10648, 1024)
DeclareAlias2("SuctionLine.Mdot_[3]", "[kg/s]", "SuctionLine.Summary.Mdot[3]", 1,\
 5, 10649, 1024)
DeclareAlias2("SuctionLine.Mdot_[4]", "[kg/s]", "SuctionLine.Summary.Mdot[4]", 1,\
 5, 10650, 1024)
DeclareAlias2("SuctionLine.Mdot_[5]", "[kg/s]", "SuctionLine.Summary.Mdot[5]", 1,\
 5, 10651, 1024)
DeclareAlias2("SuctionLine.Mdot_[6]", "[kg/s]", "SuctionLine.Summary.Mdot[6]", 1,\
 5, 10652, 1024)
DeclareAlias2("SuctionLine.Mdot_[7]", "[kg/s]", "SuctionLine.Summary.Mdot[7]", 1,\
 5, 10653, 1024)
DeclareAlias2("SuctionLine.Mdot_[8]", "[kg/s]", "SuctionLine.Summary.Mdot[8]", 1,\
 5, 10654, 1024)
DeclareAlias2("SuctionLine.Mdot_[9]", "[kg/s]", "SuctionLine.Summary.Mdot[9]", 1,\
 5, 10655, 1024)
DeclareAlias2("SuctionLine.Mdot_[10]", "[kg/s]", "SuctionLine.Summary.Mdot[10]", 1,\
 5, 10656, 1024)
DeclareAlias2("SuctionLine.Mdot_[11]", "[kg/s]", "SuctionLine.Summary.Mdot[11]", 1,\
 5, 10657, 1024)
DeclareAlias2("SuctionLine.Mdot_[12]", "[kg/s]", "SuctionLine.Summary.Mdot[12]", 1,\
 5, 10658, 1024)
DeclareAlias2("SuctionLine.Mdot_[13]", "[kg/s]", "SuctionLine.Summary.Mdot[13]", 1,\
 5, 10659, 1024)
DeclareAlias2("SuctionLine.Mdot_[14]", "[kg/s]", "SuctionLine.Summary.Mdot[14]", 1,\
 5, 10660, 1024)
DeclareAlias2("SuctionLine.Mdot_[15]", "[kg/s]", "SuctionLine.Summary.Mdot[15]", 1,\
 5, 10661, 1024)
DeclareAlias2("SuctionLine.Mdot_[16]", "[kg/s]", "SuctionLine.Summary.Mdot[16]", 1,\
 5, 10662, 1024)
DeclareAlias2("SuctionLine.Mdot_[17]", "[kg/s]", "SuctionLine.Summary.Mdot[17]", 1,\
 5, 10663, 1024)
DeclareAlias2("SuctionLine.Mdot_[18]", "[kg/s]", "SuctionLine.Summary.Mdot[18]", 1,\
 5, 10664, 1024)
DeclareAlias2("SuctionLine.Mdot_[19]", "[kg/s]", "SuctionLine.Summary.Mdot[19]", 1,\
 5, 10665, 1024)
DeclareAlias2("SuctionLine.Mdot_[20]", "[kg/s]", "SuctionLine.Summary.Mdot[20]", 1,\
 5, 10666, 1024)
DeclareAlias2("SuctionLine.Mdot_[21]", "[kg/s]", "SuctionLine.Summary.Mdot[21]", 1,\
 5, 10667, 1024)
EndNonAlias(16)
PreNonAliasNew(17)
