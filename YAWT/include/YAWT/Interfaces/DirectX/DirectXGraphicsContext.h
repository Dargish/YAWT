#pragma once

#include <YAWT/GraphicsContext.h>

namespace yawt
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