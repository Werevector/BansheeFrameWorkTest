#include "BsApplication.h"
using namespace bs;
int main()
{
	Application::startUp(VideoMode(1280, 720), "My app", false);
	SPtr<RenderWindow> window = gApplication().getPrimaryWindow();
	HSceneObject sceneCameraSO = SceneObject::create("SceneCamera");
	HCamera sceneCamera = sceneCameraSO->addComponent<CCamera>(window);
	sceneCameraSO->setPosition(Vector3(40.0f, 30.0f, 230.0f));
	sceneCameraSO->lookAt(Vector3(0, 0, 0));
	Application::runMainLoop();
	Application::shutDown();
	return 0;
}