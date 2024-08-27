#pragma once
#include <string>

class Player
{
private:
	// 체력, 공격력
public:
	// 생성자
	// 소멸자
	
	void Attack(Monster* monster);
	// 공격하다
	// 공격받다.
};

// 순수 가상 함수
class Monster	   
{
private:
	int HP;
	int AttkckPower;
	std::string Name;
	// 보상
	Reward* monsterReward;

public:
	// 생성자
	// 소멸자
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
	// 아이템
	Item* item;
};

class Item 
{

};
