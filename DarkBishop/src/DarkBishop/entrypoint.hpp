#pragma once

extern DarkBishop::Application* DarkBishop::createApplication();

int main() {
    auto app = DarkBishop::createApplication();
    app->run();
    delete app;
}
