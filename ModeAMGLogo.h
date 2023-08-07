#pragma once
#include "ModeBase.h"
class Game;

class ModeAMGLogo : public ModeBase {
	typedef ModeBase base;
public:
	ModeAMGLogo(Game& game);
	virtual ~ModeAMGLogo();
	virtual void Update();  // çXêV
	virtual void Render();	// ï`âÊ

protected:
	int		AMGLogo;
	int     AMGLogocnt{ 0 };
};