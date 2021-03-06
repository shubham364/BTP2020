#include "Station.h"

bool Station::canConnect(MobileStation* mobile) {
	return false;
}

std::ostream& Station::info(std::ostream& stream) const {
	stream << "Station: " << id << "( " << location.x << ", " << location.y << ")";
	return stream;
}
std::ostream& operator<<(std::ostream& stream, const Station& station) {
	return station.info(stream);
}