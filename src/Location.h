#pragma once

#include <string>
#include <vector>

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
	int yardCapy;		//in cars
	int engineCapy;		//in locomotives
	TrackTypes trackEast;
	TrackTypes trackWest;

public:
	Location() : name(""), yardCapy(0), engineCapy(0), trackEast(TrackTypes::eNO_TRACK),
		trackWest(TrackTypes::eNO_TRACK) {}
	Location(const std::string& newName, int newYC=0, int newEC=0, 
		TrackTypes newE=TrackTypes::eNO_TRACK, TrackTypes newW= TrackTypes::eNO_TRACK) 
		: name(newName), yardCapy(newYC), engineCapy(newEC), trackEast(newE), trackWest(newW) {}
	void draw();
};




