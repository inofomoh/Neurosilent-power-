#include <iostream>
#include "Engine/CoreEngine.h"
#include "Games/SampleGame.h"

int main() {
    CoreEngine engine;
    engine.Init("NeuroForge - Core Engine");

    SampleGame game(&engine);
    game.Run();

    engine.Shutdown();
    return 0;
}
