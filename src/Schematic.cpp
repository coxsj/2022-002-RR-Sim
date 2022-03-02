#include <fstream>


#include "Schematic.h"

namespace RRSIM {

	bool Schematic::build() {
		//Retreive from stored schematic, else build from seed file.
		std::ifstream inFile("schematic.txt", std::ios_base::in);
		if (inFile.fail()) {
			if(!buildFromSeed()) return false;
		}
		else {
			// Build Schematic from file
			std::string line;
			//First tag should be Schematic
			std::getline(inFile, line, '{');
			if (line != "Schematic") return false;
			//Second line should be Location
			while (std::getline(inFile, line)) {
				if (line != "Location") return false;
				//Get location attribute value pairs
				while (std::getline(inFile, line)) {

				}

			}



		}

		return true;
	}
	bool Schematic::buildFromSeed() {


		return true;
	}
	void Schematic::display() {

	}
	void Schematic::load() {

	}

}