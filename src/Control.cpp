#include <conio.h>
#include <iostream>

#include "Control.h"

void Control::getUserInput() {

}
void Control::initControl() {
	controlText.setHlen(35);
	controlText.setVlen(3);
}
void Control::runSim() {
	controlText.print_At(0, "RR Sim");
	
	//Set up control environment
	inventory.load();
	inventory.display();
	schematic.load();
	schematic.display();
	schedule.load();
	schedule.display();

	controlText.print_At(1, "Running Sim. Any key to exit...");
	std::string loopStr("Loop ");
	long long loopCtr{ 0 };
	while (1) {
		getUserInput();
		controlText.print_At(2,  loopStr + std::to_string(loopCtr++));
		demandManager.run();
		trainBuilder.run();

		if (_kbhit()) break;
	}
	controlText.blankLine(1);
	controlText.blankLine(2);
	controlText.print_At(1, "RR Sim ended");
}

