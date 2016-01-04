#include "MainScene.h"

USING_NS_CC;

Scene* Main::createScene()
{
    auto scene = Scene::create();
    auto layer = Main::create();
    scene->addChild(layer);
    return scene;
};

bool Main::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    // add "obj character" splash screen"
    auto sprite = Sprite3D::create("models/chr_sword.obj");
    sprite->setTexture("models/chr_sword.png");
    auto rotation = RotateBy::create(10, Vec3(0, 360, 0));
    sprite->runAction(RepeatForever::create(rotation));

    // position the sprite on the center of the screen
    sprite->setPosition(Vec2(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
    
    // set scale
    sprite->setScale(3.0);
    
    // add the sprite as a child to this layer
    this->addChild(sprite, 1);
    this->scheduleUpdate();
    
    return true;
};

void Main::update(float dt)
{
    log("%f", dt);
};