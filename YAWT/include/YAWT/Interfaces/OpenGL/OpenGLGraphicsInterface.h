#pragma once

#include <YAWT/GraphicsInterface.h>
#include <YAWT/Interfaces/OpenGL/OpenGLGraphicsContext.h>

namespace yawt
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

				virtual OpenGLGraphicsContext* createContext(const Window* window);
			};
		}
	}
}
