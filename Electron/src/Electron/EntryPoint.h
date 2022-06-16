#pragma once

#ifdef EL_PLATFORM_WINDOWS

extern Electron::Application* Electron::CreateApplication();

int main(int argc, char** argv)
{
	printf("Electron Engine\n");
	auto app = Electron::CreateApplication();
	app->Run();
	delete app;
}

#endif