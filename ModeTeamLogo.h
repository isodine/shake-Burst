#pragma once
#include "ModeBase.h"
class Game;

class ModeTeamLogo : public ModeBase {
	typedef ModeBase base;
public:
	ModeTeamLogo(Game& game);
	virtual ~ModeTeamLogo();
	virtual void Update();  // �X�V
	virtual void Render();	// �`��

protected:
	int		TeamLogo;
	int     TeamLogocnt{ 0 };
};