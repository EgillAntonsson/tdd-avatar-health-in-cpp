#include "pch.h"
#include "../AvatarHealth/Health.h"

using namespace std;
using ::testing::TestWithParam;
using ::testing::Values;

class CurrentPointsHasStartingValues : public TestWithParam<int> { };
INSTANTIATE_TEST_CASE_P(Constructor, CurrentPointsHasStartingValues,
	Values(1, 12)
);
TEST_P(CurrentPointsHasStartingValues, Value)
{
	auto param = GetParam();
	Health health = Health(param);
	EXPECT_EQ(health.GetCurrentPoints(), param);
}

class ThrowsExWhenStartingPoints : public TestWithParam<int> { };
INSTANTIATE_TEST_CASE_P(Constructor, ThrowsExWhenStartingPoints,
	Values(0, -1)
);
TEST_P(ThrowsExWhenStartingPoints, Value)
{
	EXPECT_THROW(
		{
			Health health = Health(GetParam());
		}, out_of_range);
}