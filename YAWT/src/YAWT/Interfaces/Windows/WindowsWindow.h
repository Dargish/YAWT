#pragma once

#include "../../AbstractPrivateWindow.h"

#if defined _WIN32
#include <Windows.h>

namespace yawt
{
	namespace interfaces
	{
		namespace windows
		{
			class WindowsWindow : public AbstractPrivateWindow
			{
			public:
				WindowsWindow(long width, long height, bool fullScreen);
				virtual ~WindowsWindow();

				virtual bool create();
				virtual void show();

				virtual void* handle() const;

				static LRESULT CALLBACK WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam);

			private:
				HINSTANCE m_hInstance;
				HWND m_hWnd;
			};
		}
	}
}
#endif
