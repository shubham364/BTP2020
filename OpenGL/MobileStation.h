#pragma once
#include "Station.h"

class MobileStation : public Station {
public:
	bool connected = false;
	unsigned int power = 0;
	Station* station;
	int initial_start_time;
	int start_time;
	int end_time;
	double bitrate = 0.0;
	double throughput = 0.0;
	double interference = INT_MAX;

	MobileStation() {}
	MobileStation(const int& id) : Station(id) {}
	MobileStation(const int& id, std::string name) : Station(id, name) {}
	MobileStation(const int& id, const Point<int>& location) : Station(id, location) {}

	std::string getInfo();
	bool connect(MobileStation* mobile);
	void disconnect();
	void disconnect(MobileStation* mobile);
	double powerAt(const Point<int>& p);
	double powerAtUnbiased(const Point<int>& p);
	std::ostream& info(std::ostream& stream) const;
	friend std::ostream& operator<<(std::ostream& stream, const MobileStation& station);
};