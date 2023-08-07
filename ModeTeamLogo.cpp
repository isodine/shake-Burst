#include "ModeTeamLogo.h"
#include "ModeTitle.h"
#include "Game.h"

ModeTeamLogo::ModeTeamLogo(Game& game)
	: base(game)
{
	TeamLogo = LoadGraph("picture/Others/2_720.png");
}

ModeTeamLogo::~ModeTeamLogo()
{
}

//XV
void ModeTeamLogo::Update() {
	base::Update();

	if (TeamLogocnt >= 100) {
		_game.GetModeServer().Del(*this);

		auto mdtitle = std::make_unique<ModeTitle>(_game);
		_game.GetModeServer().Add(std::move(mdtitle));
	}
	if (TeamLogocnt <= 99) { TeamLogocnt++; }
}

// •`‰æ
void ModeTeamLogo::Render() {
	base::Render();
	DrawGraph(600, 180, TeamLogo, TRUE);
}