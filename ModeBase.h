#pragma once
class Game;

class ModeBase
{
public:
	ModeBase(Game& game);
	virtual ~ModeBase();
	virtual void Update();  // XV
	virtual void Render();	// •`‰æ
	virtual bool	IsDead() { return _dead; }
	virtual void	Dead() { _dead = true; }

private:

protected:
	Game& _game;
	bool	_dead;
};