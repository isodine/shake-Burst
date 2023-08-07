#pragma once
#include <memory>
#include <vector>
#include "DxLib.h"
#include "ModeBase.h"

class Game;

class ModeServer {
public:
	ModeServer(Game& game);
	~ModeServer();

	typedef std::vector<std::unique_ptr<ModeBase>>		TypeModes;	// ���[�h���X�g���`
	TypeModes& GetModes() { return _vModes; }

	void	Clear();
	void	Add(std::unique_ptr<ModeBase> mode);
	void	Del(ModeBase& mode);

	void Update();  // �X�V
	void Render();	// �`��

protected:
	Game& _game;
	TypeModes _vModes;
	TypeModes _vPendingModes;
	bool	_updating;

	void	DeleteModes();
	void	AddPendingModes();


};