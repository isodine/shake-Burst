#pragma once

class ModeGame;

// ”wŒiƒNƒ‰ƒX
class BackGround{
public:
	BackGround(ModeGame& mg);
	~BackGround();

	void	Render();             //”wŒi•`‰æ

private:
	int		_bg;		// ”wŒi‰æ‘œ
	
};
