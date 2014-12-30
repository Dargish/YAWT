#pragma once

namespace yawt
{
	class AbstractPrivateWindow
	{
	public:
		AbstractPrivateWindow(long width, long height, bool fullScreen);
		virtual ~AbstractPrivateWindow();

		virtual bool create() = 0;
		virtual void show() = 0;

		virtual void* handle() const = 0;

	protected:
		long m_width, m_height;
		bool m_fullScreen;
	};
}