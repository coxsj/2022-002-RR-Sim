#pragma once

#include <vector>

#include "RollingStock.h"

class Inventory
{
	std::vector<RollingStock> rollingStock;
public:
	void addToInventory(const RollingStock& newRollingStock);
	void display();
	void load();
};

