#pragma once
#include "Lamp.h"
#include "TrafficLight.h"
#include <vector>

class TrafficLightController
{
public:
	static void SetActiveColour(TrafficLight& trafficLight, Lamp::lamp_colours colour);

	static void SetActiveColours(TrafficLight& trafficLight, std::vector<Lamp::lamp_colours> colours);

	static void DrawTrafficLight(TrafficLight& trafficLight);
};
