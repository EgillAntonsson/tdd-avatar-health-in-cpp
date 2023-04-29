#include "pch.h"
#include "../AvatarHealth/Health.h"
#include "HealthTest.h"

TEST(Constructor, CurrentPoints_HasStartingValue)
{
	auto startingPoints = 12;
	Health health = Health(startingPoints);
	EXPECT_EQ(health.GetCurrentPoints(), startingPoints);
}

TEST(Constructor, ThrowsError_WhenStartingPointsIsInvalid)
{
	EXPECT_THROW(
		{
			Health health = Health(0);
		}, std::out_of_range);
}