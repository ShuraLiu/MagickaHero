#include "cocos2d.h"

#pragma once
class GameSceneController
	: public cocos2d::Node
{
public:
	GameSceneController();
	~GameSceneController();

	CREATE_FUNC(GameSceneController);

	static cocos2d::Scene* createScene();
};

