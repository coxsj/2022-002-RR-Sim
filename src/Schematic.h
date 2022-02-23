#pragma once

#include "Location.h"
#include "TrackSegment.h"

class Schematic
{
	std::vector<const Location*> timetable;	//A list of locations in the schematic

public:
	void addTrackSegment(TrackSegment& newTrackSegment);
	void display();
	void load();
};

