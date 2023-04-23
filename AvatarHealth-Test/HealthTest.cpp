#include "pch.h"
#include "../AvatarHealth/Health.h"

TEST(Constructor, CurrentPoints_HasStartingValue)
{
	auto startingPoints = 12;
	Health health = Health(startingPoints);
	EXPECT_EQ(health.GetCurrentPoints(), 12);
}