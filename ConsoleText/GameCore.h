#pragma once
#include <string>
#include <vector>
#include <iostream>

class Position
{
public:
	int posX;
	int posY;

	// ������ �����ε� ����ϼ���. ��ȯ�� bool, true, false ���� ��������
	// operator !=,  == 
	bool operator == (const Position& otherPos) const
	{
		return posX == otherPos.posX && posY == otherPos.posY;
	}

	bool operator != (const Position& otherPos) const
	{
		return !(*this == otherPos);
	}
};

// GetInput();       ->
// Commanparse();	 ->	 �Է�Ű�� �޴� �Լ� -> Commandparse
// if(CommandType== North) PlayerState.currentPosY ��ǥ�� �̵�


class PlayerState
{
public:
	Position CurrentPosition;     // ���� �÷��̾��� ��ġ
	Position NewPosition;         // �Է� ���� �÷��̾��� ��ġ
};

// Console Text. �� �̵� ���.
// ���� �� ����, ���� �ʿ� ���� ����
class MapData
{
	std::string Name;			// Name = "�ʿ�";	
	std::string Description;	// �� ���� ������ �ۼ��Ѵ�.
	std::string MapInfo;
	unsigned int MapWidth; 
public:
	Position MapPosition;       // �� ���� �����ϴ� ��ġ �ٸ����ϱ� ���ؼ� (x,y)
	MapData();
	MapData(std::string Name, std::string Description, std::string MapInfo)
	{
		this->Name = Name;
		this->Description = Description;
		this->MapInfo = MapInfo;
	}
};

class WorldState  // ���� ������ �ִ� World <- �÷��̾ ��ġ�ؾ��� ������ ��� �ִ� Ŭ����
{
public:
	std::vector<MapData> Mapdatas;
};

void InitializeGame(PlayerState& playerState, WorldState& worldState);
