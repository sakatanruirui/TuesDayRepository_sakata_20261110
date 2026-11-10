#pragma once
class EnemySample5
{};

class Character
{
private:
	int hp;
public:
	Character(int hp);
	void TakeDamage(int damage);
	void ShowStatus() const;
};

class Player :public Character
{};
class Enemy :public Character
{};