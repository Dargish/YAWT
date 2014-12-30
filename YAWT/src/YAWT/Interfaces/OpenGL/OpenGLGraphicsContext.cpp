#pragma once

#include <YAWT/Interfaces/OpenGL/OpenGLGraphicsContext.h>

namespace yawt
{
	namespace interfaces
	{
		namespace opengl
		{
			OpenGLGraphicsContext::OpenGLGraphicsContext(const Window& window) :
				GraphicsContext(window)
			{

			}

			OpenGLGraphicsContext::~OpenGLGraphicsContext()
			{

			}
		}
	}
}