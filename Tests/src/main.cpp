#include <YAWT/Interfaces/OpenGL/OpenGLGraphicsInterface.h>
#include <YAWT/Interfaces/DirectX/DirectXGraphicsInterface.h>
#include <YAWT/Window.h>

#include <chrono>
#include <thread>

using namespace yawt;
using namespace yawt::interfaces::opengl;
using namespace yawt::interfaces::directx;

int main()
{
	Window window(1280, 720, false);
	window.create();
	window.show();

	OpenGLGraphicsInterface* oglInterface = new OpenGLGraphicsInterface();
	OpenGLGraphicsContext* oglContext = oglInterface->createContext(&window);

	DirectXGraphicsInterface* dxInterface = new DirectXGraphicsInterface();
	DirectXGraphicsContext* dxContext = dxInterface->createContext(&window);

	std::this_thread::sleep_for(std::chrono::milliseconds(2000));
	return 0;
}
