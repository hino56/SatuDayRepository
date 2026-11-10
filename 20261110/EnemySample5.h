#pragma once
class EnemySample5
{
};

class Character
{
private:
	int hp;

public:
	Character();
	void TakeDamage(int damaege);
	void ShowStutas()const;

};

class Player :public Character
{
};
class Enemy :public Character
{
};
