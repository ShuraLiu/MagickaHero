#include "cocos2d.h"

#pragma once
class GameScene
	: public cocos2d::Layer
{
public:
	GameScene();
	~GameScene();

	CREATE_FUNC(GameScene);

	virtual bool init() override;
};

