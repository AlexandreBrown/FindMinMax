#ifndef FindMinMax_MinMaxFinder_H
#define FindMinMax_MinMaxFinder_H

#include <string>
#include <vector>

class MinMaxFinderAlgorithm {
	public:

		virtual ~MinMaxFinderAlgorithm() = default;

		virtual std::pair<int, int> FindMinMax(const std::vector<int>&) const = 0;
};

#endif
