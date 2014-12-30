#if defined _WIN32
#include "WindowsWindow.h"

namespace yawt
{
	namespace interfaces
	{
		namespace windows
		{
			WindowsWindow::WindowsWindow(long width, long height, bool fullScreen) :
				AbstractPrivateWindow(width, height, fullScreen)
			{
				
			}

			WindowsWindow::~WindowsWindow()
			{

			}

			bool WindowsWindow::create()
			{
				WNDCLASS wc;
				DWORD dwExStyle;
				DWORD dwStyle;

				RECT windowRect;
				windowRect.left = 0;
				windowRect.right = m_width;
				windowRect.top = 0;
				windowRect.bottom = m_height;

				m_hInstance = GetModuleHandle(NULL);
				wc.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
				wc.lpfnWndProc = (WNDPROC)WndProc;
				wc.cbClsExtra = 0;
				wc.cbWndExtra = 0;
				wc.hInstance = m_hInstance;
				wc.hIcon = LoadIcon(NULL, IDI_WINLOGO);
				wc.hCursor = LoadCursor(NULL, IDC_ARROW);
				wc.hbrBackground = NULL;
				wc.lpszMenuName = NULL;
				wc.lpszClassName = (LPCSTR)"Renderer";

				if (!RegisterClass(&wc))
				{
					return false;
				}

				if (m_fullScreen)
				{
					DEVMODE dmScreenSettings;
					memset(&dmScreenSettings, 0, sizeof(dmScreenSettings));
					dmScreenSettings.dmSize = sizeof(dmScreenSettings);
					dmScreenSettings.dmPelsWidth = (DWORD)m_width;
					dmScreenSettings.dmPelsHeight = (DWORD)m_height;
					dmScreenSettings.dmBitsPerPel = 32;
					dmScreenSettings.dmFields = DM_BITSPERPEL | DM_PELSWIDTH | DM_PELSHEIGHT;
					if (ChangeDisplaySettings(&dmScreenSettings, CDS_FULLSCREEN) != DISP_CHANGE_SUCCESSFUL)
					{
						m_fullScreen = false;
					}
				}

				if (m_fullScreen)
				{
					dwExStyle = WS_EX_APPWINDOW;
					dwStyle = WS_POPUP;
				}
				else
				{
					dwExStyle = WS_EX_APPWINDOW | WS_EX_WINDOWEDGE;
					dwStyle = WS_OVERLAPPEDWINDOW;
				}

				AdjustWindowRectEx(&windowRect, dwStyle, FALSE, dwExStyle);

				m_hWnd = CreateWindowEx(
					dwExStyle,
					(LPCSTR)"Renderer",
					(LPCSTR)"Render Window",
					WS_CLIPSIBLINGS | WS_CLIPCHILDREN | dwStyle,
					0, 0,  // position
					windowRect.right - windowRect.left,  // width
					windowRect.bottom - windowRect.top,  // height
					NULL,
					NULL,
					m_hInstance,
					this);

				if (!m_hWnd)
				{
					return false;
				}

				return true;
			}

			void WindowsWindow::show()
			{
				ShowWindow(m_hWnd, SW_SHOW);
				SetForegroundWindow(m_hWnd);
				SetFocus(m_hWnd);
			}

			void* WindowsWindow::handle() const
			{
				return m_hWnd;
			}
			
			LRESULT CALLBACK WindowsWindow::WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
			{
				WindowsWindow* pThis;

				if (msg == WM_NCCREATE)
				{
					pThis = static_cast<WindowsWindow*>(reinterpret_cast<CREATESTRUCT*>(lParam)->lpCreateParams);

					SetLastError(0);
					if (!SetWindowLongPtr(hwnd, GWL_USERDATA, reinterpret_cast<LONG_PTR>(pThis)))
					{
						if (GetLastError() != 0)
						{
							return FALSE;
						}
					}
				}
				else
				{
					pThis = reinterpret_cast<WindowsWindow*>(GetWindowLongPtr(hwnd, GWL_USERDATA));
				}

				if (pThis)
				{
					// use pThis->member as needed...
				}

				return DefWindowProc(hwnd, msg, wParam, lParam);
			}
		}
	}
}
#endif
