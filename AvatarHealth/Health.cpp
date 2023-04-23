#include "Health.h"

Health::Health(int startingPoints)
{
	Health::currentPoints = startingPoints;
}

int Health::GetCurrentPoints()
{
	return currentPoints;
}