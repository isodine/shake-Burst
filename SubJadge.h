#pragma once
#include <memory>
#include <vector>
#include "Item.h"
#include "PlayerBeam.h"

class Game;
class Player;

class SubJadge
{
public:
	SubJadge();
	~SubJadge();
	void Update(Player& p, PlayerBeam& pb);

	int _distanceX;
	int _distanceY;
	int _sizeplusX{ 90 };
	int _sizeplusY{ 100 };
	int _beamsizeplusX;
	int _beamsizeplusY;
	int crashS{ 0 };

	std::vector<std::unique_ptr<PlayerBeam>> beamAll;
};

