#include <YAWT/Interfaces/DirectX/DirectXGraphicsInterface.h>

namespace renderer
{
	namespace interfaces
	{
		namespace directx
		{
			DirectXGraphicsInterface::DirectXGraphicsInterface()
			{

			}

			DirectXGraphicsInterface::~DirectXGraphicsInterface()
			{

			}

			DirectXGraphicsContext* DirectXGraphicsInterface::createContext(const Window& window)
			{
				return new DirectXGraphicsContext(window);
			}
		}
	}
}
