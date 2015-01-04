#include <YAWT/Interfaces/OpenGL/OpenGLGraphicsInterface.h>

namespace yawt
{
	namespace interfaces
	{
		namespace opengl
		{
			OpenGLGraphicsInterface::OpenGLGraphicsInterface()
			{

			}

			OpenGLGraphicsInterface::~OpenGLGraphicsInterface()
			{

			}

			OpenGLGraphicsContext* OpenGLGraphicsInterface::createContext(const Window* window)
			{
				return new OpenGLGraphicsContext(window);
			}
		}
	}
}
