#include "Location.h"

namespace RRSIM {

	void Location::initSidings(int siding1Len, int siding2Len) {
		sidingLen.push_back(siding1Len);
		sidingLen.push_back(siding2Len);
	}

}