#include <Geode/Geode.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

class $modify(SimpleNoclipPlayLayer, PlayLayer) {
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) {
        if (!PlayLayer::init(level, useReplay, dontCreateObjects)) return false;

        if (Mod::get()->getSettingValue<bool>("show-indicator")) {
            bool enabled = Mod::get()->getSettingValue<bool>("noclip-enabled");

            auto label = CCLabelBMFont::create(
                enabled ? "NOCLIP ON" : "NOCLIP OFF",
                "bigFont.fnt"
            );

            if (label) {
                auto size = CCDirector::sharedDirector()->getWinSize();
                label->setScale(0.35f);
                label->setAnchorPoint({0.f, 1.f});
                label->setPosition({8.f, size.height - 8.f});
                label->setColor(
                    enabled ? ccColor3B{255, 90, 90} : ccColor3B{100, 255, 100}
                );
                this->addChild(label, 1000);
            }
        }
        return true;
    }

    void destroyPlayer(PlayerObject* player, GameObject* object) {
        if (Mod::get()->getSettingValue<bool>("noclip-enabled")) return;
        PlayLayer::destroyPlayer(player, object);
    }
};
