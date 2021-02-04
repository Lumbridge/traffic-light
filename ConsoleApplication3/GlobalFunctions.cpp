#include "GlobalFunctions.h"
#include <windows.h>

void GlobalFunctions::SetConsoleColour(int colourId)
{
	const auto hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, colourId);
}
