#pragma once

class ModeGame;

// �w�i�N���X
class BackGround{
public:
	BackGround(ModeGame& mg);
	~BackGround();

	void	Render();             //�w�i�`��

private:
	int		_bg;		// �w�i�摜
	
};
