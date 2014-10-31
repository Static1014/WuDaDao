#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "Constance.h"

class HelloWorld : public Layer
{
public:
    static Scene* createScene();

    virtual bool init();  

    void menuCloseCallback(Ref* pSender);

    CREATE_FUNC(HelloWorld);
};

#endif // __HELLOWORLD_SCENE_H__
