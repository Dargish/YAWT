#pragma once

#include <Renderer/GraphicsContext.h>

namespace renderer
{
	namespace interfaces
	{
		namespace opengl
		{
			class RENDERERAPI OpenGLGraphicsContext : public GraphicsContext
			{
			public:
				OpenGLGraphicsContext(const Window& window);
				virtual ~OpenGLGraphicsContext();
			};
		}
	}
}