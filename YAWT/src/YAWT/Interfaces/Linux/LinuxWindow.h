#pragma once

#include "../../AbstractPrivateWindow.h"

#if defined _GCC
namespace yawt
{
	namespace interfaces
	{
		namespace linux
		{
			class LinuxWindow : public AbstractPrivateWindow
			{
			public:
				LinuxWindow(long width, long height, bool fullScreen);
				virtual ~LinuxWindow();

				virtual bool create();
				virtual void show();

				virtual void* handle() const;
			};
		}
	}
}
#endif
