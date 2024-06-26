#pragma once
#include"Object.h"

class Player :public Object
{
private:
    double Ypos = 256;
    bool inJump = false;
    // new MECHANICS
    double speed = -7;
    double a = 0.35;
    double angle = -20;
    int ang = 0;
    /////////////////
    SDL_Texture* Tex1;
    SDL_Texture* Tex2;
    int animationTimer1;
    int animationTimer2;
    const SDL_Point bird_position = {10, int(Ypos/2)};
public:
    void Gravity();
    void Fall(SDL_Renderer * ren);
    void ArmorGravity();
    void Jump();
    void Reset();
    bool JumpState();
    int getYpos();
    void CreateTexture1(const char* address, SDL_Renderer* ren);
    void CreateTexture2(const char* address, SDL_Renderer* ren);
    void Render(SDL_Renderer* ren);
    void RenderShield(SDL_Renderer* ren);
    void RenderFall(SDL_Renderer* ren);
    
};