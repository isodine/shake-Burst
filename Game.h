#pragma once

#include    "ModeServer.h"

// ��ʐݒ�
constexpr auto STAGE_Ws = 150;		///< ��ʂ̉��𑜓x
constexpr auto STAGE_Hs = 110;		///< ��ʂ̏c�𑜓x
constexpr auto STAGE_We = 1630;		///< ��ʂ̉��𑜓x
constexpr auto STAGE_He = 970;		///< ��ʂ̏c�𑜓x
constexpr auto SCREEN_DEPTH = 32;   ///< �P�h�b�g������̃r�b�g��
constexpr auto PI = 3.1415926535897932384626433832795f;

class Game {
public:
	Game();			// �R���X�g���N�^
	~Game();		// �f�X�g���N�^
	void Input();	// ����
	void Update();  // �X�V
	void Render();	// �`��
	//void ItemSelect();
	virtual ModeServer& GetModeServer() { return _modeServer; }
	virtual ModeServer::TypeModes& GetModes() { return _modeServer.GetModes(); }

protected:
	ModeServer		_modeServer;
};