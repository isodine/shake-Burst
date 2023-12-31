#include "DxLib.h"
#include "Game.h"
#include "ModeAMGLogo.h"
#include <memory>
#include <vector>

Game::Game()
	: _modeServer(*this)
{
	auto mdAMGlogo = std::make_unique<ModeAMGLogo>(*this);
	_modeServer.Add(std::move(mdAMGlogo));
}
Game::~Game() {}

void Game::Input() {
}
void Game::Update() {

	_modeServer.Update();

}
void Game::Render() {
	ClearDrawScreen();		// 画面を初期化する
	_modeServer.Render();
	ScreenFlip();			// 裏画面の内容を表画面に反映させる
}