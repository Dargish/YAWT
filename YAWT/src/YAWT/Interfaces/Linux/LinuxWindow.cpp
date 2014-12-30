#if defined _GCC
#include "Window.h"

namespace yawt
{
	namespace interfaces
	{
		namespace linux
		{
			LinuxWindow::LinuxWindow(long width, long height, bool fullScreen) :
				AbstractPrivateWindow(width, height, fullScreen)
			{

			}

			LinuxWindow::~LinuxWindow()
			{

			}

			bool LinuxWindow::create()
			{
				return false;
			}

			void LinuxWindow::show()
			{

			}

			void* LinuxWindow::handle() const
			{
				return null;
			}
		}
	}
}
#endif
