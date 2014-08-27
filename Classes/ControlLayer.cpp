#include "ControlLayer.h"

USING_NS_CC;

ControlLayer::ControlLayer()
: _pTouchListener(nullptr)
{
}


ControlLayer::~ControlLayer()
{
}

void ControlLayer::onEnter()
{
	Layer::onEnter();

	_pTouchListener = EventListenerTouchOneByOne::create();
	_pTouchListener->onTouchBegan = CC_CALLBACK_2(ControlLayer::onTouchBegan, this);
	_pTouchListener->onTouchMoved = CC_CALLBACK_2(ControlLayer::onTouchMoved, this);
	_pTouchListener->onTouchEnded = CC_CALLBACK_2(ControlLayer::onTouchEnded, this);
	_pTouchListener->onTouchCancelled = CC_CALLBACK_2(ControlLayer::onTouchCancelled, this);

	Director::getInstance()->getEventDispatcher()->addEventListenerWithSceneGraphPriority(_pTouchListener, this);
}

void ControlLayer::onExit()
{
	Director::getInstance()->getEventDispatcher()->removeEventListener(_pTouchListener);

	Layer::onExit();
}

bool ControlLayer::onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event)
{
	CCLOG("onTouchBegan");
	return true;
}

void ControlLayer::onTouchMoved(cocos2d::Touch* touch, cocos2d::Event* event)
{
	CCLOG("onTouchMoved");
}

void ControlLayer::onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* event)
{
	CCLOG("onTouchEnded");
}

void ControlLayer::onTouchCancelled(cocos2d::Touch* touch, cocos2d::Event* event)
{
	CCLOG("onTouchCancelled");
}

