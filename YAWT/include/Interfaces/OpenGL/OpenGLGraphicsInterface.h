#pragma once

#include <Renderer/GraphicsInterface.h>
#include <Renderer/Interfaces/OpenGL/OpenGLGraphicsContext.h>

namespace renderer
{
	namespace interfaces
	{
		namespace opengl
		{
			class RENDERERAPI OpenGLGraphicsInterface : public GraphicsInterface
			{
			public:
				OpenGLGraphicsInterface();
				virtual ~OpenGLGraphicsInterface();

				virtual OpenGLGraphicsContext* createContext(const Window& window);
			};
		}
	}
}
