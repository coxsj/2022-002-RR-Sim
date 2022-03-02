#pragma once

namespace RRSIM {

	class RollingStock
	{
	protected:


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
		//RailcarType type;
		bool isMTY;
		int destID;		//When car gets new assignment, set destID
		int originID;	//When car reaches its destination, set originID to current(destination)
	public:
		Railcar() {}
		~Railcar() override = default;
	};

}