#include<iostream>
#include"EnemySample5.h"

int main(void)
{
	//Player player;
	//Enemy enemy;

	//Character* target = &enemy;

	//target->TakeDamage(30);

	//enemy.ShowStutas();

	Enemy* enemy = new Enemy();

	enemy->TakeDamage(30);
	enemy->ShowStutas();

	delete enemy;
	enemy = nullptr;


	return 0;

}