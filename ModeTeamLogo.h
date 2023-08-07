#pragma once
#include "ModeBase.h"
class Game;

class ModeTeamLogo : public ModeBase {
	typedef ModeBase base;
public:
	ModeTeamLogo(Game& game);
	virtual ~ModeTeamLogo();
	virtual void Update();  // çXêV
	virtual void Render();	// ï`âÊ

protected:
	int		TeamLogo;
	int     TeamLogocnt{ 0 };
};