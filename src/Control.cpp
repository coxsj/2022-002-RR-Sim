#include <conio.h>
#include <iostream>

#include "Control.h"
namespace RRSIM {

	void Control::buildSchematic() {

	}
	void Control::getUserInput() {

	}
	void Control::initControl() {
		controlText.setHlen(35);
		controlText.setVlen(3);
	}
	bool Control::processInput() {
		getUserInput();
		return _kbhit() ? true : false;
	}
	void Control::render() {
		std::string loopStr("Loop ");
		static long long loopCtr{ 0 };
		controlText.print_At(2, loopStr + std::to_string(loopCtr++));
	}
	void Control::runSim() {
		controlText.print_At(0, "RR Sim");

		//Set up sim environment
		buildSchematic();

		inventory.load();
		inventory.display();
		schematic.load();
		schematic.display();
		schedule.load();
		schedule.display();

		controlText.print_At(1, "Running Sim. Any key to exit...");
		while (1) {
			if (processInput()) break;;
			update();
			render();
		}
		controlText.blankLine(1);
		controlText.blankLine(2);
		controlText.print_At(1, "RR Sim ended");
	}
	void Control::update() {
		demandManager.run();
		trainBuilder.run();

	}

}