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
	ClearDrawScreen();		// ‰æ–Ê‚ğ‰Šú‰»‚·‚é
	_modeServer.Render();
	ScreenFlip();			// — ‰æ–Ê‚Ì“à—e‚ğ•\‰æ–Ê‚É”½‰f‚³‚¹‚é
}