#pragma once

#include <Renderer/Renderer.h>
#include <Renderer/Window.h>

namespace renderer
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