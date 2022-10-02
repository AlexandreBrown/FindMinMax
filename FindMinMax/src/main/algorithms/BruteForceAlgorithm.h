#ifndef FINDMINMAX_SRC_MAIN_ALGORITHMS_BRUTEFORCEALGORITHM_H_
#define FINDMINMAX_SRC_MAIN_ALGORITHMS_BRUTEFORCEALGORITHM_H_

#include "MinMaxFinderAlgorithm.h"
class BruteForceAlgorithm : public MinMaxFinderAlgorithm {

	public:
		std::pair<int, int> FindMinMax(const std::vector<int>&) const override;
};

#endif
