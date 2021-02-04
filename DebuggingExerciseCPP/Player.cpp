#include "Player.h"

Player::Player(const char* name, float health, float damage, float defense)
{
    m_name = name;
    m_health = health;
    m_damage = damage;
    m_defense = defense;
}

float Player::takeDamage(float damage)
{
    float totalDamage = damage - m_shield.getStatusBoost();
    m_health -= totalDamage;
    return totalDamage;
}

float Player::attack(Character* other)
{
    return other->takeDamage(getDamage());
}

float Player::getDamage()
{
    return Character::getDamage() + m_weapon.getStatusBoost();
}

float Player::getDefense()
{
    return Character::getDefense() + m_shield.getStatusBoost();
}


