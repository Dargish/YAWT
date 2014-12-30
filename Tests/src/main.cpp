#include <YAWT/Interfaces/OpenGL/OpenGLGraphicsInterface.h>
#include <YAWT/Interfaces/DirectX/DirectXGraphicsInterface.h>
#include <YAWT/Window.h>

using namespace renderer;
using namespace renderer::interfaces::opengl;
using namespace renderer::interfaces::directx;

int main()
{
	Window window(1280, 720, false);
	window.create();
	window.show();

	OpenGLGraphicsInterface* oglInterface = new OpenGLGraphicsInterface();
	OpenGLGraphicsContext* oglContext = oglInterface->createContext(window);

	DirectXGraphicsInterface* dxInterface = new DirectXGraphicsInterface();
	DirectXGraphicsContext* dxContext = dxInterface->createContext(window);
	return 0;
}
