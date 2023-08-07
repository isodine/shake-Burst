#pragma once
#include "ModeBase.h"
#include "SubJadge.h"
#include "BackGround.h"
#include "timer.h"
#include "Item1.h"
#include "Item2.h"
#include "Item3.h"
#include "Player.h"
#include "PlayerBeam.h"
#include <memory>
#include <vector>
class Game;

class ModeGame : public ModeBase {
	typedef ModeBase base;
public:
	ModeGame(Game& game);
	virtual ~ModeGame();

	void Input();
	virtual void Update();  // çXêV
	virtual void Render();	// ï`âÊ
	void ItemSelect();

	bool	_stopObjectProcess;
public:
	int score{ 20 };
	int _pad[4];
	int item_number;
	bool musicflag = true;
	Item item;
	Timer timer;
	Item1 item1;
	Item2 item2;
	Item3 item3;
	SubJadge Jadge;

	std::vector<std::unique_ptr<Item>> items;
protected:
	BackGround	_bg;
	Player		_player1;
	Player		_player2;
	Player		_player3;
	Player		_player4;
};