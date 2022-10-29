#pragma once

#include "DarkBishop/core.hpp"
#include <spdlog/spdlog.h>
#include <spdlog/fmt/ostr.h>

#include <memory>

namespace DarkBishop {

    class Log
    {
    public:
        static void init();

        static std::shared_ptr<spdlog::logger>& getCoreLogger() { return s_coreLogger; }
        static std::shared_ptr<spdlog::logger>& getClientLogger() { return s_clientLogger; }
    private:
        static std::shared_ptr<spdlog::logger> s_coreLogger;
        static std::shared_ptr<spdlog::logger> s_clientLogger;
    };
    
}

// Core log macros
#define DB_CORE_TRACE(...)    ::DarkBishop::Log::getCoreLogger()->trace(__VA_ARGS__)
#define DB_CORE_INFO(...)     ::DarkBishop::Log::getCoreLogger()->info(__VA_ARGS__)
#define DB_CORE_WARN(...)     ::DarkBishop::Log::getCoreLogger()->warn(__VA_ARGS__)
#define DB_CORE_ERROR(...)    ::DarkBishop::Log::getCoreLogger()->error(__VA_ARGS__)
#define DB_CORE_CRITICAL(...) ::DarkBishop::Log::getCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define DB_TRACE(...)         ::DarkBishop::Log::getClientLogger()->trace(__VA_ARGS__)
#define DB_INFO(...)          ::DarkBishop::Log::getClientLogger()->info(__VA_ARGS__)
#define DB_WARN(...)          ::DarkBishop::Log::getClientLogger()->warn(__VA_ARGS__)
#define DB_ERROR(...)         ::DarkBishop::Log::getClientLogger()->error(__VA_ARGS__)
#define DB_CRITICAL(...)      ::DarkBishop::Log::getClientLogger()->critical(__VA_ARGS__)
