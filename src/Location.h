#pragma once

#include <string>
#include <vector>

#include "RollingStock.h"

namespace RRSIM {

	class Location
	{
		enum class TrackTypes {
			eNO_TRACK,
			eSINGLE_TRACK,
			eDOUBLE_TRACK,
			eTRIPLE_TRACK,
			eQUAD_TRACK
		};
		std::string name;
		uint64_t locationID;	//Must be unique ID for each location and ID must not change session to session
		std::string subdivision;
		uint64_t subdivisionID;
		int milepost;
		int yardCapy;							//in cars
		std::vector<uint64_t> railcarIDs;		//cars in the yard at present
		int engineCapy;							//in locomotives
		std::vector<uint64_t> locomotiveIDs;	//units in the yard at present
		TrackTypes trackEast;
		std::vector<int> sidingLen;				//in feet

	public:
		Location() = delete;
		Location(const std::string& newName, int newMP = 0, int newYC = 0, int newEC = 0,
			TrackTypes newE = TrackTypes::eNO_TRACK, int siding1Len = 0, int siding2Len = 0)
			: name(newName), milepost(newMP), yardCapy(newYC), engineCapy(newEC), trackEast(newE) {
			initSidings(siding1Len, siding2Len);
		}
		void draw();
		void initSidings(int siding1Len = 0, int siding2Len = 0);
	};

}


