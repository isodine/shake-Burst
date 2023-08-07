#include "timer.h"
#include "Player.h"
#include "DxLib.h"

bool timeup=false;

Timer::Timer()
{
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
	UI1P = LoadGraph("picture/player/UI1.png");
	UI2P = LoadGraph("picture/player/UI2.png");
	UI3P = LoadGraph("picture/player/UI3.png");
	UI4P = LoadGraph("picture/player/UI4.png");
}

Timer::~Timer()
{
}

void Timer::Update() {                      //XV
	if (secondcnt >= 30) {
		count1--;
		if (count1 == -1 && count10 == 0) {
			count10 = 6;
			count1 = 0;
			timeup = true;
		}
		if (count1 <= -1) {
			count10--;
			count1 = 9;
		}
		secondcnt = 0;
	}
	secondcnt++;

	if (g_score1P1 >= 10) {
		g_score1P10++;
		if (g_score1P1 == 11){
			g_score1P1keep = 1;
		}
		if (g_score1P1 == 10) {
			g_score1P1keep = 0;
		}
		g_score1P1 = g_score1P1keep;
	}
	if (g_score1P1 <= -1) {
		g_score1P10--;
		g_score1P1 = 9;
		if (g_score1P10 <= -1) {
			g_score1P10 = 0;
			g_score1P1 = 0;
		}
	}

	if (g_score2P1 >= 10) {
		g_score2P10++;
		if (g_score2P1 == 11) {
			g_score2P1keep = 1;
		}
		if (g_score2P1 == 10) {
			g_score2P1keep = 0;
		}
		g_score2P1 = g_score2P1keep;
	}
	if (g_score2P1 <= -1) {
		g_score2P10--;
		g_score2P1 = 9;
		if (g_score2P10 <= -1) {
			g_score2P10 = 0;
			g_score2P1 = 0;
		}
	}

	if (g_score3P1 >= 10) {
		g_score3P10++;
		if (g_score3P1 == 11) {
			g_score3P1keep = 1;
		}
		if (g_score3P1 == 10) {
			g_score3P1keep = 0;
		}
		g_score3P1 = g_score3P1keep;
	}
	if (g_score3P1 <= -1) {
		g_score3P10--;
		g_score3P1 = 9;
		if (g_score3P10 <= -1) {
			g_score3P10 = 0;
			g_score3P1 = 0;
		}
	}

	if (g_score4P1 >= 10) {
		g_score4P10++;
		if (g_score4P1 == 11) {
			g_score4P1keep = 1;
		}
		if (g_score4P1 == 10) {
			g_score4P1keep = 0;
		}
		g_score4P1 = g_score4P1keep;
	}
	if (g_score4P1 <= -1) {
		g_score4P10--;
		g_score4P1 = 9;
		if (g_score4P10 <= -1) {
			g_score4P10 = 0;
			g_score4P1 = 0;
		}
	}
}

void Timer::Render() {                   //•`‰æ
	if ((count10 <= -1) == false) { DrawExtendGraph(848, 0, 978, 130, number[count10], TRUE);}
	if ((count1  <= -1) == false) {	DrawExtendGraph(948, 0, 1078, 130, number[count1], TRUE);}
	DrawExtendGraph(50, 0, 453, 130, UI1P, TRUE);
	DrawExtendGraph(453, 0, 856, 130, UI2P, TRUE);
	DrawExtendGraph(1064, 0, 1467, 130, UI3P, TRUE);
	DrawExtendGraph(1467, 0, 1870, 130, UI4P, TRUE);
	DrawExtendGraph( 230, 35,  320, 115, number[g_score1P10], TRUE);
	DrawExtendGraph( 300, 35,  390, 115, number[g_score1P1] , TRUE);
	DrawExtendGraph( 633, 35,  723, 115, number[g_score2P10], TRUE);
	DrawExtendGraph( 703, 35,  793, 115, number[g_score2P1] , TRUE);
	DrawExtendGraph(1240, 35, 1330, 115, number[g_score3P10], TRUE);
	DrawExtendGraph(1310, 35, 1400, 115, number[g_score3P1] , TRUE);
	DrawExtendGraph(1643, 35, 1733, 115, number[g_score4P10], TRUE);
	DrawExtendGraph(1713, 35, 1803, 115, number[g_score4P1] , TRUE);
}