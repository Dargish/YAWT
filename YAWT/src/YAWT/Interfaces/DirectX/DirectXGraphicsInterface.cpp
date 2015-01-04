#include <YAWT/Interfaces/DirectX/DirectXGraphicsInterface.h>

namespace yawt
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

			DirectXGraphicsContext* DirectXGraphicsInterface::createContext(const Window* window)
			{
				return new DirectXGraphicsContext(window);
			}
		}
	}
}
