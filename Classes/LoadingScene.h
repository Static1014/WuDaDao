//
//  LoadingScene.h
//  MyGame
//
//  Created by XiongJian on 14-10-31.
//
//

#ifndef __MyGame__LoadingScene__
#define __MyGame__LoadingScene__

#include "Constance.h"
#include "HelloWorldScene.h"

class LoadingScene : public Layer {
public:
    LoadingScene();
    ~LoadingScene();

    static Scene* createScene();
    virtual bool init();

    CREATE_FUNC(LoadingScene);

    void loadingCallBack(Texture2D* texture);

    void gotoHomeScene();
};

#endif /* defined(__MyGame__LoadingScene__) */
