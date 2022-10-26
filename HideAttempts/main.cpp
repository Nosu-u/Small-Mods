#include <Geode/Geode.hpp>
#include <Geode/Modify.hpp>

USE_GEODE_NAMESPACE();

CCLabelBMFont* m_attemptLabel;

class $(PlayLayer) {
    virtual void update(float dt) {
        m_attemptLabel->setVisible(false);
    PlayLayer::update(dt);
    
    }
};
