#include "GameCore.h"

void InitializeGame(PlayerState& playerState, WorldState& worldState)
{
	std::cout << "??? ���� ���Ű��� ȯ���մϴ�." << std::endl;
	std::cout << "�� ���� ���� �߰� ������ �Է����ּ���." << std::endl;

	playerState.CurrentPosition.posX = playerState.NewPosition.posX = 3;
	playerState.CurrentPosition.posY = playerState.NewPosition.posY = 3;

	// ù��° �ʿ� ���� ����
	// 0
	{
		std::string MapInfo =
			"###..###"
			"#......#"
			"#......#"
			"#......#"
			"########";

		MapData map = MapData("�ʿ�", "��ġ�� �Ƹ��ٿ� ���̴�. �տ� �̵��� �� �ִ� ���� ���̴� �� ����.", MapInfo);
		map.MapPosition.posX = 0;
		map.MapPosition.posY = 0;

		worldState.Mapdatas.push_back(map);
	}
	//

	//
}
