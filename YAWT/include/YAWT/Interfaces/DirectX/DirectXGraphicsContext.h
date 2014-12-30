#pragma once

#include <Renderer/GraphicsContext.h>

namespace renderer
{
	namespace interfaces
	{
		namespace directx
		{
			class RENDERERAPI DirectXGraphicsContext : public GraphicsContext
			{
			public:
				DirectXGraphicsContext(const Window& window);
				virtual ~DirectXGraphicsContext();
			};
		}
	}
}