#include <limits>
#include <iostream>
#include "DivideAndConquerAlgorithm.h"

using namespace std;

pair<int, int> DivideAndConquerAlgorithm::FindMinMax(const vector<int>& a) const {

	int min = numeric_limits<int>::max();
	int max = numeric_limits<int>::min();

	if (a.size()==1) {
		min = a[0];
		max = a[0];
	} else if (a.size()==2) {
		if (a[0] < a[1]) {
			min = a[0];
			max = a[1];
		} else {
			min = a[1];
			max = a[0];
		}
	} else if (a.size() > 2) {
		auto left_min_max = FindMinMax(vector<int>{a.cbegin(), (a.cbegin() + static_cast<int>(a.size())/2)});
		auto right_min_max = FindMinMax(vector<int>{(a.cbegin() + static_cast<int>(a.size())/2), a.cend()});

		auto min_pair = FindMinMax(vector<int>{left_min_max.first, right_min_max.first});
		auto max_pair = FindMinMax(vector<int>{left_min_max.second, right_min_max.second});

		min = min_pair.first;
		max = max_pair.second;
	}

	return make_pair(min, max);
}
