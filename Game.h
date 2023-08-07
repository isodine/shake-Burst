#pragma once

#include    "ModeServer.h"

// 画面設定
constexpr auto STAGE_Ws = 150;		///< 画面の横解像度
constexpr auto STAGE_Hs = 110;		///< 画面の縦解像度
constexpr auto STAGE_We = 1630;		///< 画面の横解像度
constexpr auto STAGE_He = 970;		///< 画面の縦解像度
constexpr auto SCREEN_DEPTH = 32;   ///< １ドットあたりのビット数
constexpr auto PI = 3.1415926535897932384626433832795f;

class Game {
public:
	Game();			// コンストラクタ
	~Game();		// デストラクタ
	void Input();	// 入力
	void Update();  // 更新
	void Render();	// 描画
	//void ItemSelect();
	virtual ModeServer& GetModeServer() { return _modeServer; }
	virtual ModeServer::TypeModes& GetModes() { return _modeServer.GetModes(); }

protected:
	ModeServer		_modeServer;
};