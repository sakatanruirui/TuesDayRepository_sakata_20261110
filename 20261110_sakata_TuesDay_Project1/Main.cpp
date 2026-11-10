#include <iostream>
#include "Enemy.h"

int main(void)
{
	//Enemy‚ğ¶¬‚µ‚ÄŠÇ—

	std::unique_ptr<Enemy> enemy1 = std::make_unique<Enemy>();

	enemy1->ShowStatus();
	std::unique_ptr<Enemy> enemy2;
	enemy2 = std::move(enemy1);
	std::unique_ptr<Enemy> enemy3;
	enemy3->ShowStatus();
	//   enemy2 = enemy1;
	enemy2->TakeDamage(30);
	enemy2->ShowStatus();
	enemy3->TakeDamage(70);
	return 0;
}