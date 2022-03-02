#pragma once

#include "Location.h"

namespace RRSIM {

	class Schematic
	{
		std::vector<Location> locations;	//A list of locations in the schematic

	public:
		void addLocation(const Location& newLocaton);
		bool build();
		bool buildFromSeed();
		void display();
		void load();
	};

}