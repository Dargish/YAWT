#pragma once

#include <YAWT/Interfaces/DirectX/DirectXGraphicsContext.h>

namespace yawt
{
	namespace interfaces
	{
		namespace directx
		{
			DirectXGraphicsContext::DirectXGraphicsContext(const Window* window) :
				GraphicsContext(window)
			{

			}

			DirectXGraphicsContext::~DirectXGraphicsContext()
			{

			}
		}
	}
}