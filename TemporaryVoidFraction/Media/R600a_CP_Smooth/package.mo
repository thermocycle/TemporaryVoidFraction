within TemporaryVoidFraction.Media;
package R600a_CP_Smooth "R600a, Isobutane properties using CoolProp with Smoothing"
  extends ExternalMedia.Media.CoolPropMedium(
  mediumName="Isobutane",
  substanceNames={"IsoButane|calc_transport=1|debug=1|rho_smoothing_xend=0.00|enable_TTSE=1"},
  ThermoStates=Modelica.Media.Interfaces.PartialMedium.Choices.IndependentVariables.ph);
  //substanceNames={"IsoButane|calc_transport=0|debug=1|rho_smoothing_xend=0.10|enable_TTSE=1"},


  annotation ();
end R600a_CP_Smooth;
