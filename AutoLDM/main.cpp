#include <Geode/Geode.hpp>
#include <Geode/Modify.hpp>

USE_GEODE_NAMESPACE();

class $modify(LevelInfoLayer) {
  static LevelInfoLayer* create(GJGameLevel* gg) {
    gg->m_lowDetailModeToggled = true;
    return LevelInfoLayer::create(gg);
  }
};

class $modify(EditLevelLayer) {
	static EditLevelLayer* create(GJGameLevel* gl) {
		gl->m_lowDetailModeToggled = true;
		return EditLevelLayer::create(gl);
	}
};
