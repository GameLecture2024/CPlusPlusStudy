#pragma once
#include <string>

class Player
{
private:
	// ü��, ���ݷ�
public:
	// ������
	// �Ҹ���
	
	void Attack(Monster* monster);
	// �����ϴ�
	// ���ݹ޴�.
};

// ���� ���� �Լ�
class Monster	   
{
private:
	int HP;
	int AttkckPower;
	std::string Name;
	// ����
	Reward* monsterReward;

public:
	// ������
	// �Ҹ���
	// Attack
	// Be_Attacked
	// DropReward
};

class Slime : public Monster
{

};


class Reward
{
	int exp;
	int money;
	// ������
	Item* item;
};

class Item 
{

};
