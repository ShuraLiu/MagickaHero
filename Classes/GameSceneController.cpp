#include "GameSceneController.h"
#include "GameScene.h"

USING_NS_CC;


GameSceneController::GameSceneController()
{
}


GameSceneController::~GameSceneController()
{
}

Scene* GameSceneController::createScene()
{
	Scene* pScene = Scene::create();
	GameScene* pLayer = GameScene::create();
	GameSceneController* controller = GameSceneController::create();
	pScene->addChild(controller);
	controller->addChild(pLayer);
	return pScene;
}
