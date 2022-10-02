#ifndef FINDMINMAX_SRC_MAIN_ALGORITHMS_DIVIDEANDCONQUERALGORITHM_H_
#define FINDMINMAX_SRC_MAIN_ALGORITHMS_DIVIDEANDCONQUERALGORITHM_H_

#include "MinMaxFinderAlgorithm.h"

class DivideAndConquerAlgorithm : public MinMaxFinderAlgorithm {
	public:
		std::pair<int, int> FindMinMax(const std::vector<int>&) const override;
};

#endif