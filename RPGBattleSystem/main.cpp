#include <iostream>
#include "GameObjects.h"

// monster class - �߻� Ŭ������ ǥ���� �ѹ� �غ��ϴ�.
// reward class - ����ġ(int), ��ȭ(int)(money), ������(������ ��ȣ, (Item)), Quest Item
// Is-A, Has-A

// player <-> monster battle System
// battle class.  public : bool End() : �÷��̾ �׾��� ��, ���Ͱ� �׾��� �� , �÷��̾ ���� ���� ��..
// ���� �ݺ�(������ �� bool)
// 1. playerTurn.  (1)����, (2)���, (3)���� 
// NextTurn
// 2. MonsterTurn (1)����  

// ���Ͱ� ������ monster Class  Has, Is => Reward Drop Item()
// Player.GetItem(monster* m1); 


int main(void)
{
	std::cout << "RPG BATTLE SYSTEM" << std::endl;

	// 1. ���� ���� ȭ��

	// 2. ���� ���� �÷���

	// Phase 1. Map Adventure (���� ���ƴٴϴ� ���) ( Step++ RandomEncount : SRand( 5 ~ 25)) 
	// Ư�� Ÿ���� ������ ���Ͷ� �������� ������ ���� �Լ��� ������.

	// Phase 2. Player vs Monster (���͸� �ϳ� �����, �� ���� ������ �ٸ� varitaion�� ���͸� ����) 

	// player ��ü ����	      Initialize
	// monster ��ü ����
	// monster Reward ��ü
	// Reward Item ��ü

	// while(true) { }
}