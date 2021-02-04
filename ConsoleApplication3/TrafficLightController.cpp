#include "TrafficLightController.h"

TrafficLight TrafficLightController::SetActiveColour(TrafficLight& trafficLight, Lamp::lamp_colours colour)
{
	auto lamps = &trafficLight.lamps;
	GlobalFunctions::SetConsoleColour(15);

	for (auto lamp = lamps->begin(); lamp != lamps->end(); ++lamp)
	{
		if (lamp->LampColour != colour)
		{
			lamp->active(false);
			std::cout << "Turned lamp with ID: " << lamp->lampId() << " & colour: " << Lamp::ToString(lamp->LampColour) << " [OFF].\n";
		}
		else
		{
			lamp->active(true);
			std::cout << "Turned lamp with ID: " << lamp->lampId() << " & colour: " << Lamp::ToString(lamp->LampColour) << " [ON].\n";
		}
	}
	return trafficLight;
}

TrafficLight TrafficLightController::SetActiveColours(TrafficLight& trafficLight, std::vector<Lamp::lamp_colours> colours)
{
	auto lamps = &trafficLight.lamps;
	GlobalFunctions::SetConsoleColour(15);

	for (auto lamp = lamps->begin(); lamp != lamps->end(); ++lamp)
	{
		if (std::find(colours.begin(), colours.end(), lamp->LampColour) != colours.end())
		{
			lamp->active(true);
			std::cout << "Turned lamp with ID: " << lamp->lampId() << " & colour: " << Lamp::ToString(lamp->LampColour) << " [ON].\n";
		}
		else
		{
			lamp->active(false);
			std::cout << "Turned lamp with ID: " << lamp->lampId() << " & colour: " << Lamp::ToString(lamp->LampColour) << " [OFF].\n";
		}
	}
	
	return trafficLight;
}

void TrafficLightController::DrawTrafficLight(TrafficLight& trafficLight)
{
	GlobalFunctions::SetConsoleColour(8);
	
	std::cout << " ---" << std::endl;
	
	for (auto lamp : trafficLight.lamps) {
		lamp.DrawLamp();
	}

	std::cout << " ---" << std::endl;
}