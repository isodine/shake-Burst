#include "ModeTitle.h"
#include "ModeGame.h"
#include "Game.h"
bool game_end = false;

ModeTitle::ModeTitle(Game& game)
	: base(game)
{
	_bg = LoadGraph("picture/Others/stage.png");
	_title = LoadGraph("picture/Others/title.png");
	_gamestart = LoadGraph("picture/character/gamestart.png");
	_gamestartoff = LoadGraph("picture/character/gamestartoff.png");
	_gamequit = LoadGraph("picture/character/quit.png");
	_gamequitoff = LoadGraph("picture/character/quitoff.png");
	_credit = LoadGraph("picture/character/credit.png");
	_creditoff = LoadGraph("picture/character/creditoff.png");
	_rule = LoadGraph("picture/character/rule.png");
	_ruleoff = LoadGraph("picture/character/ruleoff.png");
	_rulepict1 = LoadGraph("picture/Others/a.png");
	_rulepict2 = LoadGraph("picture/Others/a1.png");
	_rulepict3 = LoadGraph("picture/Others/a2.png");
	_rulepict4 = LoadGraph("picture/Others/a3.png");
	_rulepict5 = LoadGraph("picture/Others/a4.png");
	_creditpict1 = LoadGraph("picture/Others/a5.png");
	_creditpict2 = LoadGraph("picture/Others/a6.png");
	cursorS = LoadSoundMem("SE/cursor.mp3");
	dicisionS = LoadSoundMem("sound/burst sound.mp3");
	PlaySoundFile("sound/in super.mp3", DX_PLAYTYPE_LOOP);
}

ModeTitle::~ModeTitle()
{
}

void ModeTitle::Input() {
	int keyold = pad;
	pad = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	_trg = (pad ^ keyold) & pad;	// キーのトリガ情報生成（押した瞬間しか反応しないキー情報)
}

//更新
void ModeTitle::Update() {
	base::Update();
	Input();
	if (credit && _trg & PAD_INPUT_DOWN) {
		credit = false;
		gamequit = true;
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
	}
	if (rule && _trg & PAD_INPUT_DOWN) {
		rule = false;
		credit = true;
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
	}
	if (gamestart && _trg & PAD_INPUT_DOWN) {
		gamestart = false;
		rule = true;
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
	}
	if (rule && _trg & PAD_INPUT_UP) {
		rule = false;
		gamestart = true;
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
	}
	if (credit && _trg & PAD_INPUT_UP) {
		credit = false;
		rule = true;
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
	}
	if (gamequit && _trg & PAD_INPUT_UP) {
		gamequit = false;
		credit = true;
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
	}
	if (gamequit && _trg & PAD_INPUT_1) {
		PlaySoundMem(dicisionS, DX_PLAYTYPE_BACK);
		game_end = true;
	}
	if (explanation5 && _trg & PAD_INPUT_1) {
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
		explanation5 = false;
		rule = true;
		explanationdouble = true;
	}
	if (explanation4 && _trg & PAD_INPUT_1) {
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
		explanation4 = false;
		explanation5 = true;
	}
	if (explanation3 && _trg & PAD_INPUT_1) {
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
		explanation3 = false;
		explanation4 = true;
	}
	if (explanation2 && _trg & PAD_INPUT_1) {
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
		explanation2 = false;
		explanation3 = true;
	}
	if (explanation1 && _trg & PAD_INPUT_1) {
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
		explanation1 = false;
		explanation2 = true;
	}
	if (!explanationdouble && rule && _trg & PAD_INPUT_1) {
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
		explanation1 = true;
		rule = false;
	}
	if (member2 && _trg & PAD_INPUT_1) {
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
		member2 = false;
		credit = true;
		explanationdouble = true;
	}
	if (member1 && _trg & PAD_INPUT_1) {
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
		member1 = false;
		member2 = true;
	}
	if (!explanationdouble && credit && _trg & PAD_INPUT_1) {
		PlaySoundMem(cursorS, DX_PLAYTYPE_BACK);
		member1 = true;
		credit = false;
	}
	if (gamestart && _trg & PAD_INPUT_1) {
		_game.GetModeServer().Del(*this);
		StopSoundFile();
		PlaySoundMem(dicisionS, DX_PLAYTYPE_BACK);

		auto mdgame = std::make_unique<ModeGame>(_game);
		_game.GetModeServer().Add(std::move(mdgame));
	}
	explanationdouble = false;
}

// 描画
void ModeTitle::Render() {
	base::Render();
	DrawGraph(0, 0, _bg, TRUE);
	DrawExtendGraph(460, 0, 1460, 310, _title, TRUE);
	if (gamestart) { DrawExtendGraph(702, 400, 1178, 536, _gamestart, TRUE); }
	else { DrawExtendGraph(702, 400, 1178, 536, _gamestartoff, TRUE); }
	if (rule) { DrawExtendGraph(692, 536, 1168, 672, _rule, TRUE); }
	else { DrawExtendGraph(692, 536, 1168, 672, _ruleoff, TRUE); }
	if (credit) { DrawExtendGraph(722, 672, 1198, 808, _credit, TRUE); }
	else { DrawExtendGraph(722, 672, 1198, 808, _creditoff, TRUE); }
	if (gamequit) { DrawExtendGraph(722, 808, 1198, 944, _gamequit, TRUE); }
	else { DrawExtendGraph(722, 808, 1198, 944, _gamequitoff, TRUE); }
	if (explanation1) { DrawExtendGraph(0, 0, 1920, 1080, _rulepict1, TRUE); }
	if (explanation2) { DrawExtendGraph(0, 0, 1920, 1080, _rulepict2, TRUE); }
	if (explanation3) { DrawExtendGraph(0, 0, 1920, 1080, _rulepict3, TRUE); }
	if (explanation4) { DrawExtendGraph(0, 0, 1920, 1080, _rulepict4, TRUE); }
	if (explanation5) { DrawExtendGraph(0, 0, 1920, 1080, _rulepict5, TRUE); }
	if (member1) { DrawExtendGraph(0, 0, 1920, 1080, _creditpict1, TRUE); }
	if (member2) { DrawExtendGraph(0, 0, 1920, 1080, _creditpict2, TRUE); }
}