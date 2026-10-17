#include <Geode/Geode.hpp>
#include <Geode/modify/EndLevelLayer.hpp>

using namespace geode::prelude;

class $modify(NoEndScreenLayer, EndLevelLayer) {
	void customSetup() {
		EndLevelLayer::customSetup();
		this->setVisible(false);
		this->schedule(schedule_selector(NoEndScreenLayer::keepHidden));
	}

	void keepHidden(float) {
		this->setVisible(false);
	}
};
