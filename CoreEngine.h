#pragma once
#include <iostream>
#include <string>

class CoreEngine {
public:
    void Init(const std::string& name) {
        std::cout << "🧠 Initializing " << name << "..." << std::endl;
    }

    void Shutdown() {
        std::cout << "🛑 Shutting down engine..." << std::endl;
    }

    void Log(const std::string& message) {
        std::cout << "🧾 [LOG]: " << message << std::endl;
    }
};
