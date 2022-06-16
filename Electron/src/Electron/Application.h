#pragma once

#include "Core.h"

namespace Electron {

	class ELECTRON_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	Application* CreateApplication();

}
