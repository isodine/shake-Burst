#include "ModeAMGLogo.h"
#include "ModeTeamLogo.h"
#include "Game.h"

ModeAMGLogo::ModeAMGLogo(Game& game)
	: base(game)
{
	AMGLogo = LoadGraph("picture/Others/AMG-LOGO.png");
}

ModeAMGLogo::~ModeAMGLogo()
{
}

//XV
void ModeAMGLogo::Update() {
	base::Update();

	if (AMGLogocnt>=50) {
		_game.GetModeServer().Del(*this);

		auto mdteamlogo = std::make_unique<ModeTeamLogo>(_game);
		_game.GetModeServer().Add(std::move(mdteamlogo));
	}
	if (AMGLogocnt <= 49) { AMGLogocnt++; }
}

// •`‰æ
void ModeAMGLogo::Render() {
	base::Render();
	DrawGraph(320, 438, AMGLogo, TRUE);
}