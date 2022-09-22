#include <Geode.hpp>

USE_GEODE_NAMESPACE();

class $(PlayerObject) {
	virtual void setRotation(float love) {
	love = 0.0;

	return PlayerObject::setRotation(love);
	}
};
