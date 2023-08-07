///
/// @file WinMain.cpp
///
///
#include <vector>
#include <memory>

#include <DxLib.h>
#include "Player.h"
#include "ModeTitle.h"
#include "Game.h"

// エントリーポイント
// WindowsアプリケーションはWinMain関数から始まる
int CALLBACK WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow) {
	// ウインドウモードに変更
	ChangeWindowMode(TRUE);
	// 画面の解像度を幅1920×高さ1080、カラービット数32bitに設定
	SetGraphMode(1920, 1080, 32);
	// Dxライブラリ初期化
	DxLib_Init();
	SetDrawScreen(DX_SCREEN_BACK);    // 描画先画面を裏にする

	// ゲームのスマートポインタを定義してインスタンスを生成する
	auto game = std::make_unique<Game>();


	// メインループ
	// Windows 特有の面倒な処理をライブラリにやらせる
	// -1 が返ってきたらループを抜ける
	while (ProcessMessage() != -1) {
		// ESCキーが押されてたらループから抜ける
		if (CheckHitKey(KEY_INPUT_ESCAPE)||game_end) {
			break;
		}

		game->Input();        //初期化処理
		game->Update();       //更新処理
		game->Render();       //描画処理

	}
	// Dxライブラリ終了
	DxLib_End();

	return 0;
}
