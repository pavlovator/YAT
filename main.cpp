#include "raylib.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>


const int SCREEN_WIDTH = 1000;
const int SCREEN_HEIGHT = 800;

void read_questions(std::string questions_path, 
                    std::vector<std::string>& questions) {
    std::ifstream file(questions_path);
    std::string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            std::cout << line << std::endl;
            questions.push_back(line);
        }

        file.close();
    }
    else {
        std::cerr << "Unable to open file!" << std::endl;
    }

}

void draw_questions(std::vector<std::string>& questions, const int index) {
    DrawText(questions.at(index).c_str(), 20, 20, 30, RED);
}


int main(void) {
    // Initialization
    int FPS = 60;
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "YAT");
    SetTargetFPS(FPS);

    // this should have class of its own
    int idx = 0;
    std::string questions_path = "../questions.txt";
    std::vector<std::string> questions;
    read_questions(questions_path, questions);

    while (!WindowShouldClose()) {
        // Event Handling
        if (IsKeyPressed(KEY_ENTER)) {
            idx++;
        }
        // Update


        // Draw
        BeginDrawing();
        ClearBackground(WHITE);
        draw_questions(questions, idx);
        EndDrawing();
    }

    // De-Initialization
    CloseWindow();
    return 0;
}