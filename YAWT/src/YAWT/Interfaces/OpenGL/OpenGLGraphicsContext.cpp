#pragma once

#include <YAWT/Interfaces/OpenGL/OpenGLGraphicsContext.h>

#if defined _WIN32
#include <Windows.h>
#endif

namespace yawt
{
	namespace interfaces
	{
		namespace opengl
		{
			OpenGLGraphicsContext::OpenGLGraphicsContext(const Window* window) :
				GraphicsContext(window)
			{
#if defined _WIN32
				PIXELFORMATDESCRIPTOR pfd =
				{
					sizeof(PIXELFORMATDESCRIPTOR),
					1,
					PFD_DRAW_TO_WINDOW | PFD_SUPPORT_OPENGL | PFD_DOUBLEBUFFER,
					PFD_TYPE_RGBA,
					32,
					0, 0, 0, 0, 0, 0,
					0,
					0,
					0,
					0, 0, 0, 0,
					32,
					0,
					0,
					PFD_MAIN_PLANE,
					0,
					0, 0, 0
				};

				HDC hdc = GetDC((HWND)window->handle());

				int pf = ChoosePixelFormat(hdc, &pfd);

				int result = SetPixelFormat(hdc, pf, &pfd);
#endif
			}

			OpenGLGraphicsContext::~OpenGLGraphicsContext()
			{

			}
		}
	}
}