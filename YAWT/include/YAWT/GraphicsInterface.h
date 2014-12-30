#pragma once

#include <Renderer/Renderer.h>
#include <Renderer/Window.h>
#include <Renderer/GraphicsContext.h>

namespace renderer
{
	class RENDERERAPI GraphicsInterface
	{
	public:
		virtual ~GraphicsInterface() {}

		virtual GraphicsContext* createContext(const Window& window) = 0;
	};
}