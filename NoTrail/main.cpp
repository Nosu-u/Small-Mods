#include <Geode/Geode.hpp>
#include <Geode/Modify.hpp>

USE_GEODE_NAMESPACE();

CCMotionStreak* m_regularTrail;

class $modify(PlayerObject) {
	virtual void update(float wa) {
		m_regularTrail->setVisible(false);
		
		PlayerObject::update(wa);
	}
};

class $modify(CCMotionStreak) {
	auto resumeStroke() {
	}
};
