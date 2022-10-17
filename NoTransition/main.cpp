#include <Geode.hpp>

USE_GEODE_NAMESPACE();

class $(CCTransitionFade) {
    static CCTransitionFade* create(float, CCScene* scene) {
            return CCTransitionFade::create(0, scene);
    }
};
