#include <limits>
#include "BruteForceAlgorithm.h"

using namespace std;

pair<int, int> BruteForceAlgorithm::FindMinMax(const vector<int>& a) const {
	int min = numeric_limits<int>::max();
	int max = numeric_limits<int>::min();

	for (auto element: a) {
		if (element < min) {
			min = element;
		}
		if (element > max) {
			max = element;
		}
	}

	return make_pair(min, max);
}
