#include "Enemy.h"
#include <iostream>

Enemy::Enemy() :hp(100) {}
void Enemy::TakeDamage(int damage)
{
	hp -= damage;
	if (hp < 0) hp = 0;
}
void Enemy::ShowStatus() const
{
	std::cout << "Enemy HP:" << hp << std::endl;
}