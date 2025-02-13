#include "raylib.h"
#include <iostream>
#include <string>
#include <vector>

int main(void) {
    // Initialization
    const int SCREEN_WIDTH = 1000;
    const int SCREEN_HEIGHT = 800;
    int FPS = 60;

    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "YAT");
    SetTargetFPS(FPS);

    std::vector<std::string> questions {
        "aa",
        "bb",
        "cc"
    };

    while (!WindowShouldClose()) {
        // Event Handling

        // Update

        // Draw
        BeginDrawing();
        ClearBackground(WHITE);
        EndDrawing();
    }

    // De-Initialization
    CloseWindow();
    return 0;
}