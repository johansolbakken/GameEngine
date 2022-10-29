#pragma once

namespace DarkBishop
{
    class Application
    {
    public:
        Application();
        virtual ~Application();
        
        void run();
    };
    
    Application* createApplication();
}
