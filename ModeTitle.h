#pragma once
#include "ModeBase.h"
extern bool game_end;
class Game;

class ModeTitle : public ModeBase {
	typedef ModeBase base;
public:
	ModeTitle(Game& game);
	virtual ~ModeTitle();
	void Input();
	virtual void Update();  // çXêV
	virtual void Render();	// ï`âÊ
private:
	bool gamestart = true;
	bool rule = false;
	bool gamequit = false;
	bool credit = false;
	bool explanation1 = false;
	bool explanation2 = false;
	bool explanation3 = false;
	bool explanation4 = false;
	bool explanation5 = false;
	bool member1 = false;
	bool member2 = false;

	bool explanationdouble = false;

	int cursorS{ 0 };
	int dicisionS{ 0 };
	int pad{ 0 };

	int _gamestart{ 0 };
	int _gamestartoff{ 0 };
	int _gamequit{ 0 };
	int _gamequitoff{ 0 };
	int _credit{ 0 };
	int _creditoff{ 0 };
	int _rule{ 0 };
	int _ruleoff{ 0 };
	int _bg{ 0 };
	int _title{ 0 };
	int _rulepict1{ 0 };
	int _rulepict2{ 0 };
	int _rulepict3{ 0 };
	int _rulepict4{ 0 };
	int _rulepict5{ 0 };
	int _creditpict1{ 0 };
	int _creditpict2{ 0 };
	int _trg{ 0 };
};