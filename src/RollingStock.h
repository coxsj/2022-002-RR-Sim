#pragma once

#include "Location.h"

class RollingStock
{
protected:
	std::shared_ptr<Location> locationPtr;

public:
	RollingStock();
	virtual ~RollingStock();


};

class Locomotive : public RollingStock
{
public:
	Locomotive();
	~Locomotive() override = default;

};

class Railcar : public RollingStock
{
public:
	Railcar();
	~Railcar() override = default;
};