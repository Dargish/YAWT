#include "AbstractPrivateWindow.h"

namespace yawt
{
	AbstractPrivateWindow::AbstractPrivateWindow(long width, long height, bool fullScreen) :
		m_width(width), m_height(height), m_fullScreen(fullScreen)
	{

	}

	AbstractPrivateWindow::~AbstractPrivateWindow()
	{

	}
}