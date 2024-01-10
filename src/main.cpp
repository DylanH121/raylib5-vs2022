#include "raylib.h"
#include "Math.h"

Vector2 Seek(Vector2 target, Vector2 position, Vector2 velocity, float speed)
{
    return Normalize(target - position) * speed - velocity;
}

class Table {

public:
    float x, y;
    Color color;
    float length, width, height;
    float weight;
    int legs;

};



int main()
{
    const int screenWidth = 1280;
    const int screenHeight = 720;
    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");
    SetTargetFPS(60);

    float radius = 25.0f;
    Vector2 position{ screenWidth * 0.5f, screenHeight * 0.5f };
    Vector2 velocity{ Random(-10.0f, 10.0f), Random(-10.0f, 10.0f) };

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Some text", 100, 100, 40, RED);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
