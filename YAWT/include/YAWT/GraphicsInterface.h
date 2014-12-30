#pragma once

#include <YAWT/Renderer.h>
#include <YAWT/Window.h>
#include <YAWT/GraphicsContext.h>

namespace yawt
{
	class RENDERERAPI GraphicsInterface
	{
	public:
		virtual ~GraphicsInterface() {}

		virtual GraphicsContext* createContext(const Window& window) = 0;
	};
}