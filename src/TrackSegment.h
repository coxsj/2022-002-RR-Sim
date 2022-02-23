#pragma once

#include <memory>
#include "Location.h"

class TrackSegment {
public:
	TrackSegment() : name("") { initTrackSegment() }
	TrackSegment(const std::string& newName) : name(newName) { initTrackSegment() }
	
	const std::string& getName() { return name; }
	void initTrackSegment();
	void setName(const std::string& newName) { name = newName; }

private:
	std::string name;
	int length;
	
	std::shared_ptr<Location> westEnd;
	std::shared_ptr<Location> eastEnd;
};

