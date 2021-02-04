#pragma once
#include "Lamp.h"
#include "TrafficLight.h"
#include <vector>

class TrafficLightController
{
public:
	static TrafficLight SetActiveColour(TrafficLight& trafficLight, Lamp::lamp_colours colour);

	static TrafficLight SetActiveColours(TrafficLight& trafficLight, std::vector<Lamp::lamp_colours> colours);

	static void DrawTrafficLight(TrafficLight& trafficLight);
};
