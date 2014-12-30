#include <YAWT/Window.h>

#if defined _WIN32
#include <YAWT/Interfaces/Windows/WindowsWindow.h>
#elif defined _GCC
#include <YAWT/Interfaces/Linux/LinuxWindow.h>
#endif

#include <memory>

namespace renderer
{
#if defined _WIN32
	namespace pvt = interfaces::windows;
	typedef pvt::WindowsWindow PvtWindow;
#elif defined _GCC
	namespace pvt = interfaces::linux;
	typedef pvt::LinuxWindow PvtWindow;
#endif

	struct Window::Detail
	{
		std::unique_ptr<PvtWindow> window;
	};

	Window::Window(long width, long height, bool fullScreen) :
		m_detail(new Detail)
	{
		m_detail->window.reset(new PvtWindow(width, height, fullScreen));
	}

	bool Window::create()
	{
		return m_detail->window->create();
	}

	void Window::show()
	{
		m_detail->window->show();
	}

	void* Window::handle() const
	{
		return m_detail->window->handle();
	}
}