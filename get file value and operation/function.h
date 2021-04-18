#pragma once
#include <vector>
#include "student.h"

namespace cod {
	// get average
	double getAvg ( std::vector<cod::Student> para_vec );

	// get max information
	cod::Student getMax ( std::vector<cod::Student> para_vec );
}
