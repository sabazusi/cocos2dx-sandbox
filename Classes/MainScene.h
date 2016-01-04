#ifndef __MAIN_SCENE_H__
#define __MAIN_SCENE_H__

#include "cocos2d.h"

class Main : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    bool init() override;
    
    void update(float dt) override;
    
    CREATE_FUNC(Main);
};

#endif /* __MAIN_SCENE_H__ */