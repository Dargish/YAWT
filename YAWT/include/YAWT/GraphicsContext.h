#pragma once

#include <YAWT/Renderer.h>
#include <YAWT/Window.h>

namespace yawt
{
	class RENDERERAPI GraphicsContext
	{
	public:
		GraphicsContext(const Window& window) : m_window(window) {}
		virtual ~GraphicsContext() {}

	protected:
		Window m_window;
	};
}