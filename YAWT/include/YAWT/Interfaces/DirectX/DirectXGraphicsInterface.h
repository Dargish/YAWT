#pragma once

#include <YAWT/GraphicsInterface.h>
#include <YAWT/Interfaces/DirectX/DirectXGraphicsContext.h>

namespace yawt
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

				virtual DirectXGraphicsContext* createContext(const Window* window);
			};
		}
	}
}
