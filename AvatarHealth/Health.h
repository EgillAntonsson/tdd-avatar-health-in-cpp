#pragma once

class Health
{
public:
	Health(int startingPoints);
	int GetCurrentPoints();

private:
	int currentPoints;
};