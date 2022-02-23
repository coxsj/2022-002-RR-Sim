#include <conio.h>
#include <iostream>

#include "Control.h"

void Control::displaySchedule() {

}
void Control::displaySchematic() {

}
void Control::getUserInput() {

}
void Control::initControl() {
	controlText.setHlen(20);
	controlText.setVlen(3);
}
void Control::loadSchedule() {

}
void Control::loadSchematic() {

}
void Control::runDemandManager() {

}
void Control::runSim() {
	controlText.print_At(0, "RR Sim");
	
	//Set up control environment
	getUserInput();
	loadSchematic();
	displaySchematic();
	loadSchedule();
	displaySchedule();

	controlText.print_At(1, "Running Sim. Any key to exit...");
	std::string loopStr("Loop ");
	long long loopCtr{ 0 };
	while (1) {
		controlText.print_At(2,  loopStr + std::to_string(loopCtr++));
		runDemandManager();
		runTrainBuilder();
		if (_kbhit()) break;
	}
	controlText.blankLine(1);
	controlText.blankLine(2);
	controlText.print_At(1, "RR Sim ended");
}
void Control::runTrainBuilder() {

}
