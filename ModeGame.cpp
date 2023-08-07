#include "DxLib.h"
#include "ModeGame.h"
#include "ModeResult.h"
#include "Game.h"
#include <memory>
#include <vector>

ModeGame::ModeGame(Game& game)
	: base(game)
	, _stopObjectProcess(false)
	, _bg(*this)
	, _player1(*this, 260, 200)
	, _player2(*this, 1500, 200)
	, _player3(*this, 250, 700)
	, _player4(*this, 1500, 700)
	, item(*this, item1, item2, item3)
	, item1(*this)
	, item2(*this)
	, item3(*this)
{
	PlaySoundFile("sound/in super.mp3", DX_PLAYTYPE_BACK);
}

ModeGame::~ModeGame()
{
}

void ModeGame::Input() {
	_pad[0] = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	_pad[1] = GetJoypadInputState(DX_INPUT_PAD2);
	_pad[2] = GetJoypadInputState(DX_INPUT_PAD3);
	_pad[3] = GetJoypadInputState(DX_INPUT_PAD4);
}

// çXêV
void ModeGame::Update() {
	base::Update();
	Input();
	if (!_stopObjectProcess) {
		if ((g_ready1P && g_ready2P && g_ready3P && g_ready4P)) {
			if(musicflag){
				musicflag = false;
				PlaySoundFile("sound/battle music.mp3", DX_PLAYTYPE_LOOP);
			}
			item.Update(*this);
			for (int i = 0; i < items.size(); i++)
			{
				if (items[i]->itemdaeth)
				{
					items.erase(items.begin() + i);
					g_icnt--;
				}
			}
			timer.Update();
		}
		if (timeup) {
			if (!items.empty())
			{
				items.pop_back();
			}
			g_icnt = 0;
			_game.GetModeServer().Del(*this);
			StopSoundFile();

			auto mdresult = std::make_unique<ModeResult>(_game);
			_game.GetModeServer().Add(std::move(mdresult));
		}
		g_p1 = 1;
		_player1.Respawn();
		if (g_p1death == false)
		{
			_player1.Update(*this, 0);
		}
		for (int i = 0; i < items.size(); i++)
		{
			items[i]->ItemHit(_player1);
		}
		g_p1 = 0;
		g_p2 = 1;
		_player2.Respawn();
		if (g_p2death == false)
		{
			_player2.Update(*this, 1);
		}
		for (int i = 0; i < items.size(); i++)
		{
			items[i]->ItemHit(_player2);
		}
		g_p2 = 0;
		g_p3 = 1;
		_player3.Respawn();
		if (g_p3death == false)
		{
			_player3.Update(*this, 2);
		}
		for (int i = 0; i < items.size(); i++)
		{
			items[i]->ItemHit(_player3);
		}
		g_p3 = 0;
		g_p4 = 1;
		_player4.Respawn();
		if (g_p4death == false)
		{
			_player4.Update(*this, 3);
		}
		for (int i = 0; i < items.size(); i++)
		{
			items[i]->ItemHit(_player4);
		}
		g_p4 = 0;
	}
}

// ï`âÊ
void ModeGame::Render() {
	base::Render();
	ClearDrawScreen();		// âÊñ Çèâä˙âªÇ∑ÇÈ
	_bg.Render();
	//mapchip.MapChipsDraw();
	if ((g_ready1P && g_ready2P && g_ready3P && g_ready4P)) {
		timer.Render();
		for (auto&& Items : items) {
			Items->Render();
		}
	}
	g_p1 = 1;
	if (g_p1death == false)
	{
		_player1.Render();
	}
	_player1.BlowAway();
	g_p1 = 0;
	g_p2 = 1;
	if (g_p2death == false)
	{
		_player2.Render();
	}
	_player2.BlowAway();
	g_p2 = 0;
	g_p3 = 1;
	if (g_p3death == false)
	{
		_player3.Render();
	}
	_player3.BlowAway();
	g_p3 = 0;
	g_p4 = 1;
	if (g_p4death == false)
	{
		_player4.Render();
	}
	_player4.BlowAway();
	g_p4 = 0;
	_player1.GageRender();
	_player2.GageRender();
	_player3.GageRender();
	_player4.GageRender();
	ScreenFlip();			// ó†âÊñ ÇÃì‡óeÇï\âÊñ Ç…îΩâfÇ≥ÇπÇÈ
}

void ModeGame::ItemSelect() {
	item_number = GetRand(2);
	if (item_number == 0) {
		auto item1 = std::make_unique<Item1>(*this);
		item1->Init();
		items.emplace_back(std::move(item1));
	}
	if (item_number == 1) {
		auto item2 = std::make_unique<Item2>(*this);
		item2->Init();
		items.emplace_back(std::move(item2));
	}
	if (item_number == 2) {
		auto item3 = std::make_unique<Item3>(*this);
		item3->Init();
		items.emplace_back(std::move(item3));
	}
}