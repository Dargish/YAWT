#pragma once

#include <Renderer/GraphicsInterface.h>
#include <Renderer/Interfaces/DirectX/DirectXGraphicsContext.h>

namespace renderer
{
	namespace interfaces
	{
		namespace directx
		{
			class RENDERERAPI DirectXGraphicsInterface : public GraphicsInterface
			{
			public:
				DirectXGraphicsInterface();
				virtual ~DirectXGraphicsInterface();

				virtual DirectXGraphicsContext* createContext(const Window& window);
			};
		}
	}
}
