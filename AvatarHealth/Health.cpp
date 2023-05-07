#include "Health.h"
#include <format>

using namespace std;

Health::Health(int startingPoints)
{
	auto lowestValidValue = 1;
	if (startingPoints < lowestValidValue)
	{
		auto msg = format("Value {} is invalid, it should be equal or higher than {}", startingPoints, lowestValidValue);
		throw out_of_range(msg);
	}

	Health::currentPoints = startingPoints;
}

int Health::GetCurrentPoints()
{
	return currentPoints;
}