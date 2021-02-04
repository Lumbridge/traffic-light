#include "TrafficLight.h"

void TrafficLight::AddLamp(Lamp::lamp_colours colour)
{
	auto lamp = Lamp(lamps.size(), colour);
	lamps.emplace_back(lamp);
	GlobalFunctions::SetConsoleColour(15);
	std::cout << "Added Lamp with ID: " << lamp.lampId() << " and colour: " << Lamp::ToString(colour) << ".\n";
}

TrafficLight::TrafficLight()
{
	AddLamp(Lamp::lamp_colours::red);
	AddLamp(Lamp::lamp_colours::orange);
	AddLamp(Lamp::lamp_colours::green);
}
