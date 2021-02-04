#pragma once
#include <iostream>
#include <windows.h>
#include "GlobalFunctions.h"

class Lamp
{
private:
	bool IsActive;
	int LampId;

public:
	enum class lamp_colours { none, red, orange, green };
	lamp_colours LampColour;

	Lamp(int lampId);

	Lamp(int lampId, lamp_colours lampColour);

	int lampId() const;

	bool active() const;

	void active(bool);

	static const char* ToString(lamp_colours colours)
	{
		switch (colours)
		{
			case lamp_colours::none:
				return "None";
			case lamp_colours::red:
				return "Red";
			case lamp_colours::orange:
				return "Orange";
			case lamp_colours::green:
				return "Green";
			default:
				return "Unknown";
		}
	}

	void DrawLamp() const
	{
		GlobalFunctions::SetConsoleColour(8);

		std::cout << "|";

		switch (LampColour)
		{
			case lamp_colours::none:
				GlobalFunctions::SetConsoleColour(8);
				break;
			case lamp_colours::red:
				GlobalFunctions::SetConsoleColour(12);
				break;
			case lamp_colours::orange:
				GlobalFunctions::SetConsoleColour(14);
				break;
			case lamp_colours::green:
				GlobalFunctions::SetConsoleColour(10);
				break;
			default:
				GlobalFunctions::SetConsoleColour(8);
				break;
		}

		if (IsActive == false) {
			GlobalFunctions::SetConsoleColour(8);
		}

		std::cout << " O ";

		GlobalFunctions::SetConsoleColour(8);

		std::cout << "|" << std::endl;
	}
};
