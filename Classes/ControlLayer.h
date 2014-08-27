#pragma once

#include "cocos2d.h"

class ControlLayer : public cocos2d::Layer
{
public:
	ControlLayer();
	~ControlLayer();

	CREATE_FUNC(ControlLayer);

	virtual void onEnter() override;
	virtual void onExit() override;

	bool onTouchBegan(cocos2d::Touch* touch, cocos2d::Event* event);
	void onTouchMoved(cocos2d::Touch* touch, cocos2d::Event* event);
	void onTouchEnded(cocos2d::Touch* touch, cocos2d::Event* event);
	void onTouchCancelled(cocos2d::Touch* touch, cocos2d::Event* event);

private:
	cocos2d::EventListenerTouchOneByOne* _pTouchListener;
};

