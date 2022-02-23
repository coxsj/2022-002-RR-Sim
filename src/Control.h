#pragma once
#include "util_console.h"
class Control
{
private:
	ConsoleTextBlock controlText;
public:
	Control() {	initControl();}
	void runSim();
	
private:
	void displaySchedule();
	void displaySchematic();
	void getUserInput();
	void initControl();
	void loadSchedule();
	void loadSchematic();
	void runDemandManager();
	void runTrainBuilder();
};

