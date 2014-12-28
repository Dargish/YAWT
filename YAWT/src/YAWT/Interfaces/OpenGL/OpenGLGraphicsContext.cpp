#pragma once

#include <Renderer/Interfaces/OpenGL/OpenGLGraphicsContext.h>

namespace renderer
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