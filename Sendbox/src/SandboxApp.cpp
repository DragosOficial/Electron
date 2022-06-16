#include <Electron.h>

class Sandbox : public Electron::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Electron::Application* Electron::CreateApplication()
{
	return new Sandbox();
}