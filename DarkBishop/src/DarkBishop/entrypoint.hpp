#pragma once

extern DarkBishop::Application* DarkBishop::createApplication();

int main() {
    DarkBishop::Log::init();
    
    auto app = DarkBishop::createApplication();
    app->run();
    delete app;
}
