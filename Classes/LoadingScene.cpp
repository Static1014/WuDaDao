//
//  LoadingScene.cpp
//  MyGame
//
//  Created by XiongJian on 14-10-31.
//
//

#include "LoadingScene.h"


LoadingScene::LoadingScene(){}
LoadingScene::~LoadingScene(){}

Scene* LoadingScene::createScene() {
    auto scene = Scene::create();
    auto layer = LoadingScene::create();
    scene->addChild(layer);

    return scene;
}

bool LoadingScene::init() {
    if (!Layer::init()) {
        return false;
    }

    Director::getInstance()->getTextureCache()->addImageAsync("big_res.plist", CC_CALLBACK_1(LoadingScene::loadingCallBack, this));

    return true;
}

void LoadingScene::loadingCallBack(Texture2D* texture) {
    SpriteFrameCache::getInstance()->addSpriteFramesWithFile("big_res.plist", "big_res.png");
}

void LoadingScene::gotoHomeScene() {
    auto home = HelloWorld::createScene();
    auto homeTran = TransitionProgress::create(0.6, home);
    Director::getInstance()->replaceScene(homeTran);
}