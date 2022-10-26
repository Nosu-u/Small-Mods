#include <Geode/Geode.hpp>
#include <Geode/Modify.hpp>

USE_GEODE_NAMESPACE();

class $(PlayerObject) {
	virtual void setRotation(float love) {
	love = 0.0;

	return PlayerObject::setRotation(love);
	}
};
