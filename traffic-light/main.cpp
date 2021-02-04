#include <iostream>
#include "TrafficLight.h"
#include "TrafficLightController.h"

int main()
{
	auto trafficLight = TrafficLight();

	// ===================================
	// Setting one traffic light at a time
	// ===================================
		
	trafficLight = TrafficLightController::SetActiveColour(trafficLight, Lamp::lamp_colours::red);
	TrafficLightController::DrawTrafficLight(trafficLight);
	trafficLight = TrafficLightController::SetActiveColour(trafficLight, Lamp::lamp_colours::orange);
	TrafficLightController::DrawTrafficLight(trafficLight);
	trafficLight = TrafficLightController::SetActiveColour(trafficLight, Lamp::lamp_colours::green);
	TrafficLightController::DrawTrafficLight(trafficLight);

	// =======================================
	// Setting multiple traffic lights at once
	// =======================================
	
	auto colours = new std::vector<Lamp::lamp_colours>();
	colours->push_back(Lamp::lamp_colours::red);
	colours->push_back(Lamp::lamp_colours::orange);
	colours->push_back(Lamp::lamp_colours::green);
	trafficLight = TrafficLightController::SetActiveColours(trafficLight, *colours);
	TrafficLightController::DrawTrafficLight(trafficLight);
}