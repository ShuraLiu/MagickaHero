#include "GameScene.h"
#include "ControlLayer.h"

USING_NS_CC;

GameScene::GameScene()
{
}


GameScene::~GameScene()
{
}

bool GameScene::init() 
{
	if (!Layer::init())
	{
		return false;
	}

	this->addChild(ControlLayer::create());

	return true;
}
