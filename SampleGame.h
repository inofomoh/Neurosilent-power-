#pragma once
#include "../Engine/CoreEngine.h"
#include <iostream>

class SampleGame {
    CoreEngine* engine;

public:
    SampleGame(CoreEngine* eng) : engine(eng) {}

    void Run() {
        engine->Log("Sample game started.");

        std::cout << "\n🎮 Welcome to NeuroForge Demo!" << std::endl;
        std::cout << "🌍 You are now in a prototype world..." << std::endl;

        engine->Log("Player enters world.");
        std::cout << "👤 You see a glowing crystal in the fog." << std::endl;

        engine->Log("Prototype gameplay ends.");
    }
};
