#pragma once
#include "Lamp.h"
#include <list>

class TrafficLight
{
public:
	std::list<Lamp> lamps;

	void AddLamp(Lamp::lamp_colours colour);

	void RemoveLamp(int lampId);

	explicit TrafficLight();
};
