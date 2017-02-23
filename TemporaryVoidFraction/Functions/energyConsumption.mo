within TemporaryVoidFraction.Functions;
function energyConsumption
  input Modelica.SIunits.Energy PreviousEnergyConsumption "Acumulated Energy Consumption";
  input Modelica.SIunits.Energy InstantaneousEnergyConsumption "Inst. Energy Consumption";
  output Modelica.SIunits.Energy ActualEnergyConsumption "Actual Energy Consumption";
algorithm
  ActualEnergyConsumption :=PreviousEnergyConsumption +
    InstantaneousEnergyConsumption;
end energyConsumption;
