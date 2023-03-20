#include "pch.h"
#include "../AvatarHealth/Health.h"

TEST(Constructor, HasStartingValue) {
	Health health;
	EXPECT_EQ(health.points, 12);
}