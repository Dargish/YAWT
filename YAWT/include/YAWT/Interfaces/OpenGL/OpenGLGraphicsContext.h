#pragma once

#include <YAWT/GraphicsContext.h>

namespace yawt
{
	namespace interfaces
	{
		namespace opengl
		{
			class RENDERERAPI OpenGLGraphicsContext : public GraphicsContext
			{
			public:
				OpenGLGraphicsContext(const Window* window);
				virtual ~OpenGLGraphicsContext();
			};
		}
	}
}