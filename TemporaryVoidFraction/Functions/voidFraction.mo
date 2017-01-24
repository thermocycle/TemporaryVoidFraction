within TemporaryVoidFraction.Functions;
function voidFraction
  input Modelica.SIunits.Diameter Dtube "Tube diameter";
  input Modelica.SIunits.SpecificEnthalpy h "specific enthalpy";
  input Modelica.SIunits.SpecificEnthalpy h_l "specific enthalpy at bubble line";
  input Modelica.SIunits.SpecificEnthalpy h_v "specific enthalpy at dew line";
  input Real G "mass flow rate per unit of area";
  input Modelica.SIunits.Temperature T "temperature";
  input Modelica.SIunits.Density rho_l "Density at bubble point";
  input Modelica.SIunits.Density rho_v "Density and dew point";
  input Modelica.SIunits.DynamicViscosity mu_l "Viscosity at bubble point";
  input Modelica.SIunits.DynamicViscosity mu_v "Viscosity at dew point";
  input Integer voidFractionChoice "1 to Homogeneus, 2 to Steiner, 3 to Premoli with clvf and 4 to use Butherworth general equation";
  input Real clvf "clvf to be used in Premoli model";
  output Real alpha "value of the void fraction";
protected
  Real x "Quality";
  Modelica.SIunits.ReynoldsNumber Re "Reynolds number";
  Modelica.SIunits.SurfaceTension sigma "Surface tension";
  Modelica.SIunits.Acceleration g "Gravity";
  Modelica.SIunits.WeberNumber We "Reynolds number";
  Real K;
  Real C;
  //Real clvf;
  Real y;
  Real Slip;
  Real beta;
  Real a;
  Real b;
  Real c;
  Real d;
algorithm
  x := (h - h_l)/(h_v - h_l);
  sigma :=-0.01639*(1 - min(T, 390)/407.817)^(2.102) + 0.06121*(1 - min(T, 390)/407.817)^(1.304);
  if noEvent( x>0 and x<1) then
    if voidFractionChoice == 1 then
    // ******************** Homogeneus formulations - Used for validation of numerical scheme ***************************************************************
       a := 1;
       b := 1;
       c := 1;
       d := 0;
       alpha := max(0, 1/(1+a*((1-x)/x)^b*(rho_v/rho_l)^c*(mu_l/mu_v)^d));
    elseif voidFractionChoice == 2 then
    // ***************** Steiner (2006) horizontal tube version of the vertical tube expression of Rouhani-Axelsson (see El Hajal (2003)) ****************
       alpha :=max(0,x/rho_v*((1 + 0.12*(1 - x))*(x/rho_v + (1 - x)/rho_l) + (1.18*(1 - x)*(g*sigma*(rho_l - rho_v))^0.25)/(G*rho_l^0.5))^(-1));
    elseif voidFractionChoice == 3 then
    // ******************* My version of Premoli, with the original We and Re but with the clvf correction *************************************************
    // Premoli modified equation - reference is Heinrich and Berthold (2006) - some remarks about the reference below
    // 1 - The Weber equation presented seems wrong.
    // 2 - The Reynolds number used by the author seems adapted.I opted to use th Reynolds of the original premoli paper
    // 3 - Heinrich and Berthold (2006) cite Janssen (1992) but I didn't find reference there to the values of the correction factors
        We := G^2*Dtube/(sigma*rho_l);
        Re := G*Dtube/(mu_l);
        K :=1.578*Re^(-0.19)*(rho_l/rho_v)^(0.22);
        C :=0.0273*We*Re^(-0.51)*(rho_l/rho_v)^(-0.08);
        beta :=1/(1 + ((1 - x)/x)*(rho_v/rho_l));
        y :=beta/(1 - beta);
        Slip :=1 + K*max(0,(y/(1 + C*y) - C*y))^(1/2);
        alpha := max(0, 1-clvf*(1-(1+((1-x)/x)*(rho_v/rho_l)*Slip)^(-1)));
    elseif voidFractionChoice == 4 then
    // ******************** Generic equation proposed by Butherworth (1975) - See Table 46 of Hermes (2006) - Constants below ******************************
        a := 1;
        b := 0.72;
        c := 0.40;
        d := 0.08;
        alpha := max(0, 1/(1+a*((1-x)/x)^b*(rho_v/rho_l)^c*(mu_l/mu_v)^d));
    else
      alpha := 0.5;
    end if;
  elseif (x>=1) then
    alpha :=1;
  else
    alpha :=0;
  end if;
end voidFraction;
