#pragma once
#include <YAWT/Renderer.h>

namespace yawt
{
	class RENDERERAPI Window
	{
	public:
		Window(long width, long height, bool fullScreen);

		bool create();
		void show();

		void* handle() const;

	private:
		struct Detail;
		Detail* m_detail;
	};
}