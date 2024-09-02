#pragma once

#include <iostream>
#include <cstdlib>
#include <string>

// ƽ���� ����
// ������    3x3 �������� �������Ѵ�. -> Ŭ������ ǥ�� class Board -> 2���� �迭 

// ���1 : �÷��̾ ���� �׸���.   X �Ǵ� O insert_X insert_O 
// ���2 : x_Win,  o_Win
// �¸����� :������ �ϼ�,  ������ �ϼ�, �밢��(���� ������ �Ʒ�), �밢��(������ ���� �Ʒ�)

// ����ϸ� ���� �Լ���
// std::cin >> input;   �������� �ƴ��� �Ǻ�, std::isdigit()
// std::setw() ������ ���̸� �����ϰ� ���߾� �ִ� �Լ�
// �����͸� Ŭ������ ǥ���� �� -> iterator
// ���ڿ��� Ŭ������ ǥ���� �� -> string

class board
{
private:
	int size;            // ũ�Ⱑ 3
	std::string** bMap; // 2���� �迭  [����][����]
public:
	board();

	void GamePlay();

	// 2���� �迭�� ������ �ִ� �Լ�
	void insert_x(int pos);
	void insert_y(int pos);
	// 2���� �迭 �ȿ� �����Ͱ� �ִ��� ������ üũ �ϴ� �Լ�
	std::string get_item(int pos);

	bool x_win();
	bool o_win();

	int GetSize() { return size; }

};

// std::cout �Լ��� �̿��ؼ� Ŭ������ ����ϰڴ�.
std::ostream& operator<< (std::ostream& out, const board& b);


