#include "DxLib.h"
#include "ModeBase.h"
#include "Game.h"

ModeBase::ModeBase(Game& game)
	: _game(game)
	, _dead(false)
{
}

ModeBase::~ModeBase()
{
}

// XV
void ModeBase::Update() {
}

// •`‰æ
void ModeBase::Render() {
}