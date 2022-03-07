#pragma once

#include "EnemiesStructures.h"
class Enemy; 
#define ENEMY_HEALTH 10 

class EnemyController
{
private:
   
    EnemyDirection dir;  
    int nrofUnits;
    Enemy* enemies;
    int stepSize;
    Point startinLocation;

public:
    void Init(int maximumEnemies, int step, Point initialLocation); 
    void Uninit();
    void Move();
    void DamageAll(); 
    int CountKilledEnemies();
    bool SpawnEnemy(); 
};

