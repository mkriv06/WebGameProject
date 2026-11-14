#include <raylib.h>


int main() {
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Web Game");
    SetTargetFPS(60);

    Vector2 ballPosition = { screenWidth/2.0f, screenHeight/2.0f };

    while(!WindowShouldClose()) {
        if (IsKeyDown(KEY_RIGHT)) ballPosition.x += 5.0f;
        if (IsKeyDown(KEY_LEFT)) ballPosition.x -= 5.0f;
        if (IsKeyDown(KEY_UP)) ballPosition.y -= 5.0f;
        if (IsKeyDown(KEY_DOWN)) ballPosition.y += 5.0f;

    
    BeginDrawing();

    ClearBackground(RAYWHITE);
    DrawCircleV(ballPosition, 50, DARKBLUE);

    EndDrawing();


    }

    CloseWindow();
    return 0;
}
