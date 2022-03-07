#pragma once
#include "EnemiesStructures.h"

class Enemy
{
private:
    Point location;
    int health;

public:
    void Init(Point intitialLocation, int initialHealh);
    void Move(EnemyDirection direction, int step);

    bool IsDead();
    void Shoot(int damage); 
};#pragma once
