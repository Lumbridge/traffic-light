#include "Lamp.h"


Lamp::Lamp(int lampId)
{
	LampId = lampId;
	LampColour = lamp_colours::none;
}

Lamp::Lamp(int lampId, lamp_colours lampColour)
{
	LampId = lampId;
	LampColour = lampColour;
}

int Lamp::lampId() const
{
	return LampId;
}

bool Lamp::active() const
{
	return IsActive;
}

void Lamp::active(bool isActive)
{
	IsActive = isActive;
}
