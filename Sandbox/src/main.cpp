
#include <DarkBishop.hpp>

class Sandbox : public DarkBishop::Application
{
public:
    Sandbox()
    {
        
    }
    
    ~Sandbox() override
    {
        
    }
};

DarkBishop::Application* DarkBishop::createApplication()
{
    return new Sandbox();
}
