#include "ModeResult.h"
#include "ModeTitle.h"
#include "Player.h"
#include "Game.h"
#include "timer.h"

ModeResult::ModeResult(Game& game)
	: base(game)
{
	result = LoadGraph("picture/Others/result.png");
	crown = LoadGraph("picture/Others/crown1.png");
	number[0] = LoadGraph("picture/number/0.png");
	number[1] = LoadGraph("picture/number/1.png");
	number[2] = LoadGraph("picture/number/2.png");
	number[3] = LoadGraph("picture/number/3.png");
	number[4] = LoadGraph("picture/number/4.png");
	number[5] = LoadGraph("picture/number/5.png");
	number[6] = LoadGraph("picture/number/6.png");
	number[7] = LoadGraph("picture/number/7.png");
	number[8] = LoadGraph("picture/number/8.png");
	number[9] = LoadGraph("picture/number/9.png");
	if (g_score1Pall >= g_score2Pall && g_score1Pall >= g_score3Pall && g_score1Pall >= g_score4Pall) { win1P = true; }
	if (g_score2Pall >= g_score1Pall && g_score2Pall >= g_score3Pall && g_score2Pall >= g_score4Pall) { win2P = true; }
	if (g_score3Pall >= g_score2Pall && g_score3Pall >= g_score1Pall && g_score3Pall >= g_score4Pall) { win3P = true; }
	if (g_score4Pall >= g_score2Pall && g_score4Pall >= g_score3Pall && g_score4Pall >= g_score1Pall) { win4P = true; }
	PlaySoundFile("sound/result.mp3", DX_PLAYTYPE_LOOP);
}

ModeResult::~ModeResult()
{
}

void ModeResult::Input() {
	int keyold = pad;
	pad = GetJoypadInputState(DX_INPUT_KEY_PAD1);
	_trg = (pad ^ keyold) & pad;	// キーのトリガ情報生成（押した瞬間しか反応しないキー情報)
}

void ModeResult::Update() {
	base::Update();

	cnt++;
	if(cnt>max){
		framecnt++;
		if (framecnt >= 10) {
			framecnt = 0;
		}
	cnt = 0;
	}

	Input();
	if (_trg & PAD_INPUT_1) {
		_game.GetModeServer().Del(*this);
		timeup = false;
		g_ready1P = false;
		g_ready2P = false;
		g_ready3P = false;
		g_ready4P = false;
		g_score1P1 = 0;
		g_score1P10 = 0;
		g_score1Pall = 0;
		g_score2P1 = 0;
		g_score2P10 = 0;
		g_score2Pall = 0;
		g_score3P1 = 0;
		g_score3P10 = 0;
		g_score3Pall = 0;
		g_score4P1 = 0;
		g_score4P10 = 0;
		g_score4Pall = 0;
		StopSoundFile();

		auto mdtitle = std::make_unique<ModeTitle>(_game);
		_game.GetModeServer().Add(std::move(mdtitle));
	}
}
void ModeResult::Render() {
	base::Render();
	DrawGraph(0, 0, result, TRUE);
	DrawExtendGraph( 50, 750, 242, 942, number[g_score1P10], TRUE);
	DrawExtendGraph(222, 750, 414, 942, number[g_score1P1] , TRUE);
	DrawExtendGraph(100, 492, 352, 744, kan1Pchargefront[framecnt], TRUE);

	DrawExtendGraph(526, 750, 718, 942, number[g_score2P10], TRUE);
	DrawExtendGraph(698, 750, 890, 942, number[g_score2P1], TRUE);
	DrawExtendGraph(576, 492, 828, 744, kan2Pchargefront[framecnt], TRUE);

	DrawExtendGraph(1002, 750, 1194, 942, number[g_score3P10], TRUE);
	DrawExtendGraph(1174, 750, 1366, 942, number[g_score3P1], TRUE);
	DrawExtendGraph(1072, 492, 1324, 744, kan3Pchargefront[framecnt], TRUE);

	DrawExtendGraph(1508, 750, 1700, 942, number[g_score4P10], TRUE);
	DrawExtendGraph(1680, 750, 1872, 942, number[g_score4P1], TRUE);
	DrawExtendGraph(1578, 492, 1830, 744, kan4Pchargefront[framecnt], TRUE);

	if (win1P) { DrawGraph(130, 365, crown, TRUE); }
	if (win2P) { DrawGraph(606, 365, crown, TRUE); }
	if (win3P) { DrawGraph(1102, 365, crown, TRUE); }
	if (win4P) { DrawGraph(1608, 365, crown, TRUE); }
}