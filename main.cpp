#include <iostream>
#include "raylib.h"

int main(void)
{
    constexpr auto screenWidth = 800U;
    constexpr auto screenHeight = 450U;

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    SetTargetFPS(60U);

    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Update
        // TODO: Update your variables here

        // Draw
        BeginDrawing();
            ClearBackground(RAYWHITE);
            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    // De-Initialization
    CloseWindow();

    return 0;
}
