#include <time.h>
#include <stdlib.h>
#include "Enemy.h"

Enemy::Enemy(const char* name, float health, float damage, float defense)
{
    name = "Enemy";
    health = 100;
    damage = 10;
    defense = 2;
}

float Enemy::attack(Character* other)
{
    /* initialize random seed: */
    srand(time(NULL));
    /* generate secret number between 1 and 10: */
    float randomDamage = rand() % 10 + 1;

    return takeDamage(other->getDamage() + randomDamage);
}
