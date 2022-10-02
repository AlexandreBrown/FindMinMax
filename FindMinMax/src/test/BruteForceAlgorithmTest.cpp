#include <gtest/gtest.h>
#include "../main/algorithms/BruteForceAlgorithm.h"

using namespace std;

namespace {
	class BruteForceAlgorithmTest : public testing::Test,
	                                      public testing::WithParamInterface<tuple<int, int, vector<int>>> {

		public:
			MinMaxFinderAlgorithm* algo = new BruteForceAlgorithm{};
		protected:
			void SetUp() override {
				Test::SetUp();
			}

			void TearDown() override {
				Test::TearDown();
				delete algo;
			}

	};
}

TEST_P(BruteForceAlgorithmTest, FindMinMax_returns_min_and_max_of_array) {
	auto expected_min = get<0>(GetParam());
	auto expected_max = get<1>(GetParam());
	auto array = get<2>(GetParam());

	auto result = algo->FindMinMax(array);

	ASSERT_EQ(make_pair(expected_min, expected_max), result);
}

INSTANTIATE_TEST_SUITE_P
(
	BruteForceAlgorithmTest,
	BruteForceAlgorithmTest,
	::testing::Values(
		std::make_tuple(numeric_limits<int>::max(), numeric_limits<int>::min(), vector<int>{}),
		std::make_tuple(42, 42, vector<int>{42}),
		std::make_tuple(1, 2, vector<int>{1, 2}),
		std::make_tuple(1, 2, vector<int>{2, 1}),
		std::make_tuple(2, 50, vector<int>{3, 50, 4, 2}),
		std::make_tuple(0, 5, vector<int>{3, 1, 5, 4, 0}),
		std::make_tuple(-157, 56, vector<int>{3, 17, -100, 55, 56, 22, -15, 0, 2, -157, 8, 10, 5, 25, 26}),
		std::make_tuple(3, 3, vector<int>{3, 3, 3, 3, 3, 3}),
		std::make_tuple(3, 32, vector<int>{3, 3, 3, 32, 3, 3}),
		std::make_tuple(-1, 5, vector<int>{3, 1, 4, 2, -1, 0, 1, 5, 0})
	)
);