#include <Geode.hpp>

USE_GEODE_NAMESPACE();

class $modify(EditLevelLayer) {
	static EditLevelLayer* create(GJGameLevel* ok) {
		ok->m_isVerifiedRand = 11;
		ok->m_isVerifiedSeed = 10;
		return EditLevelLayer::create(ok);
	} 
};
