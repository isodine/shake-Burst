#pragma once
#include "ModeBase.h"
class Game;

class ModeAMGLogo : public ModeBase {
	typedef ModeBase base;
public:
	ModeAMGLogo(Game& game);
	virtual ~ModeAMGLogo();
	virtual void Update();  // �X�V
	virtual void Render();	// �`��

protected:
	int		AMGLogo;
	int     AMGLogocnt{ 0 };
};