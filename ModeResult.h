#pragma once
#include "ModeBase.h"

class Game;

class ModeResult : public ModeBase {
	typedef ModeBase base;
public:
	ModeResult(Game& game);
	virtual ~ModeResult();
	void Input();
	virtual void Update();  // çXêV
	virtual void Render();	// ï`âÊ
private:
	int result{ 0 };
	int number[10];
	int pad{ 0 };
	int _trg{ 0 };
	int cnt{ 0 };
	int framecnt{ 0 };
	int max = 2;
	int posX{ 30 };
	int posY{ 30 };
	int crown{ 0 };
	bool win1P = false;
	bool win2P = false;
	bool win3P = false;
	bool win4P = false;
};