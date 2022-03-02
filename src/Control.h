#pragma once

#include "DemandManager.h"
#include "Inventory.h"
#include "Schedule.h"
#include "Schematic.h"
#include "TrainBuilder.h"
#include "util_console.h"

namespace RRSIM {

	class Control
	{
	private:
		ConsoleTextBlock controlText;
		DemandManager demandManager;
		Inventory inventory;
		Schedule schedule;
		Schematic schematic;
		TrainBuilder trainBuilder;

	public:
		Control() { initControl(); }
		void runSim();

	private:
		void buildSchematic();
		void getUserInput();
		void initControl();
		bool processInput();
		void render();
		void update();
	};

}

