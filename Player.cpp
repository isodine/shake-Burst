#include "Player.h"
#include "Game.h"
#include "ModeGame.h"
#include "DxLib.h"

int g_p1 = 0;
int g_p1X = 0;
int g_p1Y = 0;
int g_p1BX = 0;
int g_p1BY = 0;
int g_p1BSX = 0;
int g_p1BSY = 0;
int g_p2 = 0;
int g_p2X = 0;
int g_p2Y = 0;
int g_p2BX = 0;
int g_p2BY = 0;
int g_p2BSX = 0;
int g_p2BSY = 0;
int g_p3 = 0;
int g_p3X = 0;
int g_p3Y = 0;
int g_p3BX = 0;
int g_p3BY = 0;
int g_p3BSX = 0;
int g_p3BSY = 0;
int g_p4 = 0;
int g_p4X = 0;
int g_p4Y = 0;
int g_p4BX = 0;
int g_p4BY = 0;
int g_p4BSX = 0;
int g_p4BSY = 0;
bool g_rightshoot = false;
bool g_leftshoot = false;
bool g_upshoot = false;
bool g_downshoot = false;
bool g_p1rightshoot = false;
bool g_p1leftshoot = false;
bool g_p1upshoot = false;
bool g_p1downshoot = false;
bool g_p2rightshoot = false;
bool g_p2leftshoot = false;
bool g_p2upshoot = false;
bool g_p2downshoot = false;
bool g_p3rightshoot = false;
bool g_p3leftshoot = false;
bool g_p3upshoot = false;
bool g_p3downshoot = false;
bool g_p4rightshoot = false;
bool g_p4leftshoot = false;
bool g_p4upshoot = false;
bool g_p4downshoot = false;
bool g_p1death = false;
bool g_p1deathright = false;
bool g_p1deathleft = false;
bool g_p1deathfront = false;
bool g_p1deathback = false;
bool g_p2death = false;
bool g_p2deathright = false;
bool g_p2deathleft = false;
bool g_p2deathfront = false;
bool g_p2deathback = false;
bool g_p3death = false;
bool g_p3deathright = false;
bool g_p3deathleft = false;
bool g_p3deathfront = false;
bool g_p3deathback = false;
bool g_p4death = false;
bool g_p4deathright = false;
bool g_p4deathleft = false;
bool g_p4deathfront = false;
bool g_p4deathback = false;
bool g_p1Bdeath = false;
bool g_p2Bdeath = false;
bool g_p3Bdeath = false;
bool g_p4Bdeath = false;
bool g_ready1P = false;
bool g_ready2P = false;
bool g_ready3P = false;
bool g_ready4P = false;
int g_score1P1 = 0;
int g_score2P1 = 0;
int g_score3P1 = 0;
int g_score4P1 = 0;
int g_score1P1keep = 0;
int g_score2P1keep = 0;
int g_score3P1keep = 0;
int g_score4P1keep = 0;
int g_score1P10 = 0;
int g_score2P10 = 0;
int g_score3P10 = 0;
int g_score4P10 = 0;
int g_score1Pall = 0;
int g_score2Pall = 0;
int g_score3Pall = 0;
int g_score4Pall = 0;
int g_1Prank = 0;
int g_2Prank = 0;
int g_3Prank = 0;
int g_4Prank = 0;
bool g_p1invincible = false;
bool g_p2invincible = false;
bool g_p3invincible = false;
bool g_p4invincible = false;
int g_p1beamGR;
int g_p2beamGR;
int g_p3beamGR;
int g_p4beamGR;
int g_p1beam2GR;
int g_p2beam2GR;
int g_p3beam2GR;
int g_p4beam2GR;

int kan1Pmovefront[25];
int kan1Pmoveright[25];
int kan1Pmoveleft[25];
int kan1Pmoveback[25];
int kan1Pchargeright[10];
int kan1Pchargeleft[10];
int kan1Pchargefront[10];
int kan1Pchargeback[10];
int kan1Pattackright[16];
int kan1Pattackleft[16];
int kan1Pattackfront[16];
int kan1Pattackback[16];
int kan1PLv2attackright[17];
int kan1PLv2attackleft[17];
int kan1PLv2attackfront[17];
int kan1PLv2attackback[17];
int kan1Pmoveattackback[28];
int kan1Pmoveattackright[28];
int kan1Pmoveattackleft[28];
int kan1Pmoveattackfront[28];
int kan2Pmovefront[25];
int kan2Pmoveright[25];
int kan2Pmoveleft[25];
int kan2Pmoveback[25];
int kan2Pchargeright[10];
int kan2Pchargeleft[10];
int kan2Pchargefront[10];
int kan2Pchargeback[10];
int kan2Pattackright[16];
int kan2Pattackleft[16];
int kan2Pattackfront[16];
int kan2Pattackback[16];
int kan2PLv2attackright[17];
int kan2PLv2attackleft[17];
int kan2PLv2attackfront[17];
int kan2PLv2attackback[17];
int kan2Pmoveattackback[28];
int kan2Pmoveattackright[28];
int kan2Pmoveattackleft[28];
int kan2Pmoveattackfront[28];
int kan3Pmovefront[25];
int kan3Pmoveright[25];
int kan3Pmoveleft[25];
int kan3Pmoveback[25];
int kan3Pchargeright[10];
int kan3Pchargeleft[10];
int kan3Pchargefront[10];
int kan3Pchargeback[10];
int kan3Pattackright[16];
int kan3Pattackleft[16];
int kan3Pattackfront[16];
int kan3Pattackback[16];
int kan3PLv2attackright[17];
int kan3PLv2attackleft[17];
int kan3PLv2attackfront[17];
int kan3PLv2attackback[17];
int kan3Pmoveattackback[28];
int kan3Pmoveattackright[28];
int kan3Pmoveattackleft[28];
int kan3Pmoveattackfront[28];
int kan4Pmovefront[25];
int kan4Pmoveright[25];
int kan4Pmoveleft[25];
int kan4Pmoveback[25];
int kan4Pchargeright[10];
int kan4Pchargeleft[10];
int kan4Pchargefront[10];
int kan4Pchargeback[10];
int kan4Pattackright[16];
int kan4Pattackleft[16];
int kan4Pattackfront[16];
int kan4Pattackback[16];
int kan4PLv2attackright[17];
int kan4PLv2attackleft[17];
int kan4PLv2attackfront[17];
int kan4PLv2attackback[17];
int kan4Pmoveattackback[28];
int kan4Pmoveattackright[28];
int kan4Pmoveattackleft[28];
int kan4Pmoveattackfront[28];
int kan1PchargerightLv2[10];
int kan1PchargeleftLv2[10];
int kan1PchargefrontLv2[10];
int kan1PchargebackLv2[10];
int kan2PchargerightLv2[10];
int kan2PchargeleftLv2[10];
int kan2PchargefrontLv2[10];
int kan2PchargebackLv2[10];
int kan3PchargerightLv2[10];
int kan3PchargeleftLv2[10];
int kan3PchargefrontLv2[10];
int kan3PchargebackLv2[10];
int kan4PchargerightLv2[10];
int kan4PchargeleftLv2[10];
int kan4PchargefrontLv2[10];
int kan4PchargebackLv2[10];
int kan1Pdeathfront[15];
int kan1Pdeathright[15];
int kan1Pdeathleft[15];
int kan1Pdeathback[15];
int kan2Pdeathfront[15];
int kan2Pdeathright[15];
int kan2Pdeathleft[15];
int kan2Pdeathback[15];
int kan3Pdeathfront[15];
int kan3Pdeathright[15];
int kan3Pdeathleft[15];
int kan3Pdeathback[15];
int kan4Pdeathfront[15];
int kan4Pdeathright[15];
int kan4Pdeathleft[15];
int kan4Pdeathback[15];
int kanchargelimit[6];
int kanrespawn[40];
int kandeath[12];

// コンストラクタ
Player::Player(ModeGame& mg, int x,int y)
{
	Init(x,y);
	Abutton= LoadGraph("picture/character/a.png");
	OK = LoadGraph("picture/character/OK.png");
	Push = LoadGraph("picture/character/PUSH.png");
	Ready = LoadGraph("picture/character/READY.png");
	burstsound = LoadSoundMem("sound/burst sound.mp3");
	respawnS = LoadSoundMem("SE/respawn.mp3");
	chargeS = LoadSoundMem("SE/charge.wav");
	LvupS = LoadSoundMem("SE/Lvup.mp3");
	jadge = &mg.Jadge;
}
// デストラクタ
Player::~Player() {
}
// 初期化
void Player::Init(int x, int y) {

	//プレイヤーの座標
	_posX = x;
	_posY = y;
	//プレイヤーの大きさ
	_sizeX = 105;
	_sizeY = 210;
	//プレイヤーの当たり判定
	_colPosX = _posX + 70;
	_colPosY = _posY + 90;
	_colSizeX = 70;
	_colSizeY = 70;
	_kancenterX = _colPosX + (_colSizeX / 2);
	_kancenterY = _colPosY + (_colSizeY / 2);
	_beamcenterX = 3000;
	_beamcenterY = 3000;
	_rangeX = 25;
	_rangeY = 25;
	_sizeplusX = (_colSizeX + _rangeX*2) / 2;
	_sizeplusY = (_colSizeY + _rangeY*2) / 2;
	_beamsizeplusX = _rangeX*2;
	_beamsizeplusY = _rangeY*2;
	_cnt = 0;
	max = 1;
	movecnt = 0;
	downlast = true;
}

// 更新
void Player::Update(ModeGame& mg, int z) {
	int pad{ 0 };
	pad = mg._pad[z];
	pad = mg._pad[z];

	//4人全員Aボタン入力でスタート
	if (!(g_ready1P && g_ready2P && g_ready3P && g_ready4P)) {
		if (mg._pad[0] && !g_ready1P) {
			if (pad & PAD_INPUT_8) {
				g_ready1P = true;
				g_ready2P = true;
				g_ready3P = true;
				g_ready4P = true;
				PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
			}
			if (pad & PAD_INPUT_1) {
				g_ready1P = true;
				PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
			}
		}
		if (mg._pad[1] && !g_ready2P) {
			if (pad & PAD_INPUT_1) {
				g_ready2P = true;
				PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
			}
		}
		if (mg._pad[2] && !g_ready3P) {
			if (pad & PAD_INPUT_1) {
				g_ready3P = true;
				PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
			}
		}
		if (mg._pad[3] && !g_ready4P) {
			if (pad & PAD_INPUT_1) {
				g_ready4P = true;
				PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
			}
		}
	}

	if (g_ready1P && g_ready2P && g_ready3P && g_ready4P) {

		//移動入力
		int spd{ 9 };
		if (_stop == 1) { spd = 0; }
		if (_wait == 1) { spd = 0; }
		if (nowLv2) { spd = 9; }
		if(nowdownLv1||nowupLv1||nowleftLv1||nowrightLv1){ spd = 0; }
		if(nowrightLv2 || nowleftLv2 || nowupLv2 || nowdownLv2){ spd = 0; }
		if (nowLv3) { spd = 9; }

		if ((pad & PAD_INPUT_1) == false) {
			if ((rightmove | leftmove | upmove) == false && pad & PAD_INPUT_DOWN)    // 下入力
			{
				_posY += spd, _colPosY = _posY + 90, _kancenterY = _colPosY + (_colSizeY / 2), _beamcenterY += spd, movecnt++, Lv3movecnt++, downmove = true, downlast = true, leftlast = false, rightlast = false, uplast = false;
			}
			else { downmove = false; }
			if ((leftmove | rightmove | downmove) == false && pad & PAD_INPUT_UP)    // 上入力
			{
				_posY -= spd, _colPosY = _posY + 90, _kancenterY = _colPosY + (_colSizeY / 2), _beamcenterY -= spd, movecnt++, Lv3movecnt++, upmove = true, uplast = true, leftlast = false, downlast = false, rightlast = false;
			}
			else { upmove = false; }
			if ((leftmove | downmove | upmove) == false && pad & PAD_INPUT_RIGHT)    // 右入力
			{
				_posX += spd, _colPosX = _posX + 70, _kancenterX = _colPosX + (_colSizeX / 2), _beamcenterX += spd, movecnt++, Lv3movecnt++, rightmove = true, rightlast = true, leftlast = false, downlast = false, uplast = false;
			}
			else { rightmove = false; }
			if ((rightmove | downmove | upmove) == false && pad & PAD_INPUT_LEFT)    // 左入力
			{
				_posX -= spd, _colPosX = _posX + 70, _kancenterX = _colPosX + (_colSizeX / 2), _beamcenterX -= spd, movecnt++, Lv3movecnt++, leftmove = true, leftlast = true, rightlast = false, downlast = false, uplast = false;
			}
			else { leftmove = false; }
		}

		//画面外突出防止
		if (_posX < STAGE_Ws) { _posX = STAGE_Ws; }
		if (_posX + _sizeX > STAGE_We) { _posX = STAGE_We - _sizeX; }
		if (_posY < STAGE_Hs) { _posY = STAGE_Hs; }
		if (_posY + _sizeY > STAGE_He) { _posY = STAGE_He - _sizeY; }



		SetPlayerRank();

		//チャージの処理
		if ((pad & PAD_INPUT_1) && (nowLv3 | nowLv2 | nowLv1 | nowrightLv2 | nowleftLv2 | nowupLv2 | nowdownLv2 | nowrightLv1 | nowleftLv1 | nowupLv1 | nowdownLv1) == false) {
			_stop = 1;
			if (pad & PAD_INPUT_UP) { upflag = true; }
			if (pad & PAD_INPUT_DOWN) { downflag = true; }
			if ((pad & PAD_INPUT_UP) && (pad & PAD_INPUT_DOWN)) {
				_power = 0;
			}

			if (upflag && downflag) {
				// ポイントゲット
				_power++;
				if (g_p1) {
					if (_power == chargeArray[g_1Prank - 1][0]) {
						PlaySoundMem(LvupS, DX_PLAYTYPE_BACK);
					}
					if (_power == chargeArray[g_1Prank - 1][1]) {
						PlaySoundMem(LvupS, DX_PLAYTYPE_BACK);
					}
				}
				if (g_p2) {
					if (_power == chargeArray[g_2Prank - 1][0]) {
						PlaySoundMem(LvupS, DX_PLAYTYPE_BACK);
					}
					if (_power == chargeArray[g_2Prank - 1][1]) {
						PlaySoundMem(LvupS, DX_PLAYTYPE_BACK);
					}
				}
				if (g_p3) {
					if (_power == chargeArray[g_3Prank - 1][0]) {
						PlaySoundMem(LvupS, DX_PLAYTYPE_BACK);
					}
					if (_power == chargeArray[g_3Prank - 1][1]) {
						PlaySoundMem(LvupS, DX_PLAYTYPE_BACK);
					}
				}
				if (g_p4) {
					if (_power == chargeArray[g_4Prank - 1][0]) {
						PlaySoundMem(LvupS, DX_PLAYTYPE_BACK);
					}
					if (_power == chargeArray[g_4Prank - 1][1]) {
						PlaySoundMem(LvupS, DX_PLAYTYPE_BACK);
					}
				}
				upflag = false;
				downflag = false;
				PlaySoundMem(chargeS, DX_PLAYTYPE_BACK);
				//Lv3強制発動
				if (g_p1) {
					if (_power >= chargeArray[g_1Prank - 1][2]) {
						nowLv3 = true;
						nowupLv3 = true;
						_power = 0;
					}
				}
				if (g_p2) {
					if (_power >= chargeArray[g_2Prank - 1][2]) {
						nowLv3 = true;
						nowupLv3 = true;
						_power = 0;
					}
				}
				if (g_p3) {
					if (_power >= chargeArray[g_3Prank - 1][2]) {
						nowLv3 = true;
						nowupLv3 = true;
						_power = 0;
					}
				}
				if (g_p4) {
					if (_power >= chargeArray[g_4Prank - 1][2]) {
						nowLv3 = true;
						nowupLv3 = true;
						_power = 0;
					}
				}
			}
			if (nowLv3) { PlaySoundMem(burstsound, DX_PLAYTYPE_BACK); }
		}
		else {
			// Bボタンが押されていない時
			SetChargeLv();
			StopSoundMem(chargeS);
			_power = 0;
			_stop = 0;
			upflag = false;
			downflag = false;
		}

		if (_chargeLv == 1) {
			nowLv1 = true;
			_chargeLv = 0;
		}
		if (_chargeLv == 2) {
			nowLv2 = true;
			_chargeLv = 0;
		}
		if (nowLv1) { chargelimit++; }
		if (nowLv2&&(nowrightLv2 || nowleftLv2 || nowupLv2 || nowdownLv2)==false) { chargelimit++; }
		if (chargelimit >= 180) {
			if (nowLv1) { nowLv1 = false; }
			if (nowLv2) { nowLv2 = false; }
			chargelimit = 0;
		}
		//Lv1の発射方向選択
		if (nowLv1 && pad & PAD_INPUT_2 && rightlast) {
			nowrightLv1 = true;
			nowLv1 = false;
			_wait = 1;
			PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
		}
		if (nowLv1 && pad & PAD_INPUT_2 && leftlast) {
			nowleftLv1 = true;
			nowLv1 = false;
			_wait = 1;
			PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
		}
		if (nowLv1 && pad & PAD_INPUT_2 && uplast) {
			nowupLv1 = true;
			nowLv1 = false;
			_wait = 1;
			PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
		}
		if (nowLv1 && pad & PAD_INPUT_2 && downlast) {
			nowdownLv1 = true;
			nowLv1 = false;
			_wait = 1;
			PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
		}

		//Lv2の発射入力
		if (nowLv2 && (pad & PAD_INPUT_2) && rightlast) {
			nowrightLv2 = true;
			nowLv2 = false;
			_wait = 1;
			PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
		}
		if (nowLv2 && (pad & PAD_INPUT_2) && leftlast) {
			nowleftLv2 = true;
			nowLv2 = false;
			_wait = 1;
			PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
		}
		if (nowLv2 && (pad & PAD_INPUT_2) && uplast) {
			nowupLv2 = true;
			nowLv2 = false;
			_wait = 1;
			PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
		}
		if (nowLv2 && (pad & PAD_INPUT_2) && downlast) {
			nowdownLv2 = true;
			nowLv2 = false;
			_wait = 1;
			PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
		}

		//Lv2の方向切り替え
		if ((nowrightLv2 || nowleftLv2 || nowupLv2 || nowdownLv2)&& pad & PAD_INPUT_RIGHT) {
			nowrightLv2 = true;
			nowleftLv2 = false;
			nowupLv2 = false;
			nowdownLv2 = false;
			if (g_p1 == 1) { g_p1rightshoot = true, g_p1leftshoot = false, g_p1upshoot = false, g_p1downshoot = false; }
			if (g_p2 == 1) { g_p2rightshoot = true, g_p2leftshoot = false, g_p2upshoot = false, g_p2downshoot = false; }
			if (g_p3 == 1) { g_p3rightshoot = true, g_p3leftshoot = false, g_p3upshoot = false, g_p3downshoot = false; }
			if (g_p4 == 1) { g_p4rightshoot = true, g_p4leftshoot = false, g_p4upshoot = false, g_p4downshoot = false; }
		}
		if ((nowrightLv2 || nowleftLv2 || nowupLv2 || nowdownLv2) && pad & PAD_INPUT_LEFT) {
			nowleftLv2 = true;
			nowrightLv2 = false;
			nowupLv2 = false;
			nowdownLv2 = false;
			if (g_p1 == 1) { g_p1rightshoot = false, g_p1leftshoot = true, g_p1upshoot = false, g_p1downshoot = false; }
			if (g_p2 == 1) { g_p2rightshoot = false, g_p2leftshoot = true, g_p2upshoot = false, g_p2downshoot = false; }
			if (g_p3 == 1) { g_p3rightshoot = false, g_p3leftshoot = true, g_p3upshoot = false, g_p3downshoot = false; }
			if (g_p4 == 1) { g_p4rightshoot = false, g_p4leftshoot = true, g_p4upshoot = false, g_p4downshoot = false; }
		}
		if ((nowrightLv2 || nowleftLv2 || nowupLv2 || nowdownLv2) && pad & PAD_INPUT_UP) {
			nowupLv2 = true;
			nowrightLv2 = false;
			nowleftLv2 = false;
			nowdownLv2 = false;
			if (g_p1 == 1) { g_p1rightshoot = false, g_p1leftshoot = false, g_p1upshoot = true, g_p1downshoot = false; }
			if (g_p2 == 1) { g_p2rightshoot = false, g_p2leftshoot = false, g_p2upshoot = true, g_p2downshoot = false; }
			if (g_p3 == 1) { g_p3rightshoot = false, g_p3leftshoot = false, g_p3upshoot = true, g_p3downshoot = false; }
			if (g_p4 == 1) { g_p4rightshoot = false, g_p4leftshoot = false, g_p4upshoot = true, g_p4downshoot = false; }
		}
		if ((nowrightLv2 || nowleftLv2 || nowupLv2 || nowdownLv2) && pad & PAD_INPUT_DOWN) {
			nowdownLv2 = true;
			nowrightLv2 = false;
			nowleftLv2 = false;
			nowupLv2 = false;
			if (g_p1 == 1) { g_p1rightshoot = false, g_p1leftshoot = false, g_p1upshoot = false, g_p1downshoot = true; }
			if (g_p2 == 1) { g_p2rightshoot = false, g_p2leftshoot = false, g_p2upshoot = false, g_p2downshoot = true; }
			if (g_p3 == 1) { g_p3rightshoot = false, g_p3leftshoot = false, g_p3upshoot = false, g_p3downshoot = true; }
			if (g_p4 == 1) { g_p4rightshoot = false, g_p4leftshoot = false, g_p4upshoot = false, g_p4downshoot = true; }
		}


		//Lv3の方向切り替え
		if (nowLv3 && (pad & PAD_INPUT_RIGHT) && rightlast) {
			nowrightLv3 = true;
			nowleftLv3 = false;
			nowupLv3 = false;
			nowdownLv3 = false;
			if (g_p1 == 1) { g_p1rightshoot = true, g_p1leftshoot = false, g_p1upshoot = false, g_p1downshoot = false; }
			if (g_p2 == 1) { g_p2rightshoot = true, g_p2leftshoot = false, g_p2upshoot = false, g_p2downshoot = false; }
			if (g_p3 == 1) { g_p3rightshoot = true, g_p3leftshoot = false, g_p3upshoot = false, g_p3downshoot = false; }
			if (g_p4 == 1) { g_p4rightshoot = true, g_p4leftshoot = false, g_p4upshoot = false, g_p4downshoot = false; }
		}
		if (nowLv3 && pad & PAD_INPUT_LEFT && leftlast) {
			nowleftLv3 = true;
			nowrightLv3 = false;
			nowupLv3 = false;
			nowdownLv3 = false;
			if (g_p1 == 1) { g_p1rightshoot = false, g_p1leftshoot = true, g_p1upshoot = false, g_p1downshoot = false; }
			if (g_p2 == 1) { g_p2rightshoot = false, g_p2leftshoot = true, g_p2upshoot = false, g_p2downshoot = false; }
			if (g_p3 == 1) { g_p3rightshoot = false, g_p3leftshoot = true, g_p3upshoot = false, g_p3downshoot = false; }
			if (g_p4 == 1) { g_p4rightshoot = false, g_p4leftshoot = true, g_p4upshoot = false, g_p4downshoot = false; }
		}
		if (nowLv3 && pad & PAD_INPUT_UP && uplast) {
			nowupLv3 = true;
			nowrightLv3 = false;
			nowleftLv3 = false;
			nowdownLv3 = false;
			if (g_p1 == 1) { g_p1rightshoot = false, g_p1leftshoot = false, g_p1upshoot = true, g_p1downshoot = false; }
			if (g_p2 == 1) { g_p2rightshoot = false, g_p2leftshoot = false, g_p2upshoot = true, g_p2downshoot = false; }
			if (g_p3 == 1) { g_p3rightshoot = false, g_p3leftshoot = false, g_p3upshoot = true, g_p3downshoot = false; }
			if (g_p4 == 1) { g_p4rightshoot = false, g_p4leftshoot = false, g_p4upshoot = true, g_p4downshoot = false; }
		}
		if (nowLv3 && pad & PAD_INPUT_DOWN && downlast) {
			nowdownLv3 = true;
			nowrightLv3 = false;
			nowleftLv3 = false;
			nowupLv3 = false;
			if (g_p1 == 1) { g_p1rightshoot = false, g_p1leftshoot = false, g_p1upshoot = false, g_p1downshoot = true; }
			if (g_p2 == 1) { g_p2rightshoot = false, g_p2leftshoot = false, g_p2upshoot = false, g_p2downshoot = true; }
			if (g_p3 == 1) { g_p3rightshoot = false, g_p3leftshoot = false, g_p3upshoot = false, g_p3downshoot = true; }
			if (g_p4 == 1) { g_p4rightshoot = false, g_p4leftshoot = false, g_p4upshoot = false, g_p4downshoot = true; }
		}


		//ビームの位置決め
		if (_cnt > max) {
			if (nowrightLv1 || nowrightLv2 || nowrightLv3) {
				if (shootdelay >= 6) {
					_beamcenterX = _colPosX + _colSizeX + 60 + _rangeX;
					_beamcenterY = _posY + 100;
					_beamsizeX = _rangeX * 2;
					_beamsizeY = 100;
					_sizeplusX = (_colSizeX + _rangeX * 2) / 2;
					_sizeplusY = (_colSizeY + 100) / 2;
					if (g_p1 == 1) { g_p1rightshoot = true; }
					if (g_p2 == 1) { g_p2rightshoot = true; }
					if (g_p3 == 1) { g_p3rightshoot = true; }
					if (g_p4 == 1) { g_p4rightshoot = true; }
					AddBeam();
				}
				shootdelay++;
			}
			if (nowleftLv1 || nowleftLv2 || nowleftLv3) {
				if (shootdelay >= 6) {
					_beamcenterX = _colPosX - 60 - _rangeX;
					_beamcenterY = _posY + 100;
					_beamsizeX = _rangeX * 2;
					_beamsizeY = 100;
					_sizeplusX = (_colSizeX + _rangeX * 2) / 2;
					_sizeplusY = (_colSizeY + 100) / 2;
					if (g_p1 == 1) { g_p1leftshoot = true; }
					if (g_p2 == 1) { g_p2leftshoot = true; }
					if (g_p3 == 1) { g_p3leftshoot = true; }
					if (g_p4 == 1) { g_p4leftshoot = true; }
					AddBeam();
				}
				shootdelay++;
			}
			if (nowupLv1 || nowupLv2 || nowupLv3) {
				if (shootdelay >= 6) {
					_beamcenterX = _kancenterX;
					_beamcenterY = _kancenterY - 100 - _rangeY;
					_beamsizeX = 100;
					_beamsizeY = _rangeY * 2;
					_sizeplusX = (_colSizeX + 100) / 2;
					_sizeplusY = (_colSizeY + _rangeY * 2) / 2;
					if (g_p1 == 1) { g_p1upshoot = true; }
					if (g_p2 == 1) { g_p2upshoot = true; }
					if (g_p3 == 1) { g_p3upshoot = true; }
					if (g_p4 == 1) { g_p4upshoot = true; }
					AddBeam();
				}
				shootdelay++;
			}
			
			if (nowdownLv1 || nowdownLv2 || nowdownLv3) {
				if (shootdelay >= 6) {
					_beamcenterX = _kancenterX;
					_beamcenterY = _kancenterY + 100 + _rangeY;
					_beamsizeX = 100;
					_beamsizeY = _rangeY * 2;
					_sizeplusX = (_colSizeX + 100) / 2;
					_sizeplusY = (_colSizeY + _rangeY * 2) / 2;
					if (g_p1 == 1) { g_p1downshoot = true; }
					if (g_p2 == 1) { g_p2downshoot = true; }
					if (g_p3 == 1) { g_p3downshoot = true; }
					if (g_p4 == 1) { g_p4downshoot = true; }
					AddBeam();
				}
				shootdelay++;
			}
			_cnt = 0;
		}
		_cnt++;

		//当たり判定用の変数に代入
		if (g_p1 == 1) { g_p1X = _kancenterX, g_p1Y = _kancenterY, g_p1BX = _beamcenterX, g_p1BY = _beamcenterY; }
		if (g_p2 == 1) { g_p2X = _kancenterX, g_p2Y = _kancenterY, g_p2BX = _beamcenterX, g_p2BY = _beamcenterY; }
		if (g_p3 == 1) { g_p3X = _kancenterX, g_p3Y = _kancenterY, g_p3BX = _beamcenterX, g_p3BY = _beamcenterY; }
		if (g_p4 == 1) { g_p4X = _kancenterX, g_p4Y = _kancenterY, g_p4BX = _beamcenterX, g_p4BY = _beamcenterY; }


		//無敵時間の処理
		if (g_p1 == 1 && g_p1invincible) {
			invinciblecnt++;
			effectcnt++;
			if (effectcnt >= 40) {
				effectcnt = 0;
			}
			if(invinciblecnt>=110){
				g_p1invincible = false;
				invinciblecnt = 0;
			}
		}

		if (g_p2 == 1 && g_p2invincible) {
			invinciblecnt++;
			effectcnt++;
			if (effectcnt >= 40) {
				effectcnt = 0;
			}
			if (invinciblecnt >= 110) {
				g_p2invincible = false;
				invinciblecnt = 0;
			}
		}
		if (g_p3 == 1 && g_p3invincible) {
			invinciblecnt++;
			effectcnt++;
			if (effectcnt >= 40) {
				effectcnt = 0;
			}
			if (invinciblecnt >= 110) {
				g_p3invincible = false;
				invinciblecnt = 0;
			}
		}
		if (g_p4 == 1 && g_p4invincible) {
			invinciblecnt++;
			effectcnt++;
			if (effectcnt >= 40) {
				effectcnt = 0;
			}
			if (invinciblecnt >= 110) {
				g_p4invincible = false;
				invinciblecnt = 0;
			}
		}

		//プレイヤーのビームの更新
		for (auto&& Beam : jadge->beamAll) {
			Beam->Update();
		}

		//消去するプレイヤーのビームがあれば消去
		for (int i = 0; i < jadge->beamAll.size(); ++i)
		{
			if (jadge->beamAll[i]->beamdeath)
			{
				jadge->beamAll.erase(jadge->beamAll.begin() + i);
			}
		}

		//当たり判定
		jadge->Update(*this,pb);

		//プレイヤーが吹っ飛ばされたらビームの発射を終了
		if (g_p1 == 1 && g_p1Bdeath) {
			_burstcountLv1 = Lv1count;
			_burstcountLv2 = Lv2count;
			_burstcountLv3 = Lv3count;
		}
		if (g_p2 == 1 && g_p2Bdeath) {
			_burstcountLv1 = Lv1count;
			_burstcountLv2 = Lv2count;
			_burstcountLv3 = Lv3count;
		}
		if (g_p3 == 1 && g_p3Bdeath) {
			_burstcountLv1 = Lv1count;
			_burstcountLv2 = Lv2count;
			_burstcountLv3 = Lv3count;
		}
		if (g_p4 == 1 && g_p4Bdeath) {
			_burstcountLv1 = Lv1count;
			_burstcountLv2 = Lv2count;
			_burstcountLv3 = Lv3count;
		}

		//プレイヤーのビーム発射後の初期化処理
		if (Lv1count <= _burstcountLv1) {
			_burstcountLv1 = 0;
			rangeXcount = 0;
			rangeYcount = 0;
			_rangeX = 25;
			_rangeY = 25;
			_chargeLv = 0;
			_wait = 0;
			nowLv1 = false;
			nowleftLv1 = false;
			nowrightLv1 = false;
			nowupLv1 = false;
			nowdownLv1 = false;
			_beamcenterX = 3000;
			_beamcenterY = 3000;
			_beamsizeX = 0;
			_beamsizeY = 0;
			attackcnt = 0;
			shootdelay = 0;
			chargelimit = 0;
			g_p1rightshoot = false;
			g_p1leftshoot = false;
			g_p1upshoot = false;
			g_p1downshoot = false;
			g_p2rightshoot = false;
			g_p2leftshoot = false;
			g_p2upshoot = false;
			g_p2downshoot = false;
			g_p3rightshoot = false;
			g_p3leftshoot = false;
			g_p3upshoot = false;
			g_p3downshoot = false;
			g_p4rightshoot = false;
			g_p4leftshoot = false;
			g_p4upshoot = false;
			g_p4downshoot = false;
			if (g_p1 == 1 && g_p1Bdeath) { g_p1Bdeath = false; }
			if (g_p2 == 1 && g_p2Bdeath) { g_p2Bdeath = false; }
			if (g_p3 == 1 && g_p3Bdeath) { g_p3Bdeath = false; }
			if (g_p4 == 1 && g_p4Bdeath) { g_p4Bdeath = false; }
		}

		if (Lv2count <= _burstcountLv2) {
			_burstcountLv2 = 0;
			rangeXcount = 0;
			rangeYcount = 0;
			_rangeX = 25;
			_rangeY = 25;
			_chargeLv = 0;
			_wait = 0;
			nowLv2 = false;
			nowleftLv2 = false;
			nowrightLv2 = false;
			nowupLv2 = false;
			nowdownLv2 = false;
			_beamcenterX = 3000;
			_beamcenterY = 3000;
			_beamsizeX = 0;
			_beamsizeY = 0;
			attackcnt = 0;
			shootdelay = 0;
			chargelimit = 0;
			g_p1rightshoot = false;
			g_p1leftshoot = false;
			g_p1upshoot = false;
			g_p1downshoot = false;
			g_p2rightshoot = false;
			g_p2leftshoot = false;
			g_p2upshoot = false;
			g_p2downshoot = false;
			g_p3rightshoot = false;
			g_p3leftshoot = false;
			g_p3upshoot = false;
			g_p3downshoot = false;
			g_p4rightshoot = false;
			g_p4leftshoot = false;
			g_p4upshoot = false;
			g_p4downshoot = false;
			if (g_p1 == 1 && g_p1Bdeath) { g_p1Bdeath = false; }
			if (g_p2 == 1 && g_p2Bdeath) { g_p2Bdeath = false; }
			if (g_p3 == 1 && g_p3Bdeath) { g_p3Bdeath = false; }
			if (g_p4 == 1 && g_p4Bdeath) { g_p4Bdeath = false; }
		}

		if (Lv3count <= _burstcountLv3) {
			_burstcountLv3 = 0;
			rangeXcount = 0;
			rangeYcount = 0;
			_rangeX = 25;
			_rangeY = 25;
			_chargeLv = 0;
			_wait = 0;
			nowLv3 = false;
			nowleftLv3 = false;
			nowrightLv3 = false;
			nowupLv3 = false;
			nowdownLv3 = false;
			_beamcenterX = 3000;
			_beamcenterY = 3000;
			_beamsizeX = 0;
			_beamsizeY = 0;
			attackcnt = 0;
			Lv3movecnt = 0;
			shootdelay = 0;
			chargelimit = 0;
			g_p1rightshoot = false;
			g_p1leftshoot = false;
			g_p1upshoot = false;
			g_p1downshoot = false;
			g_p2rightshoot = false;
			g_p2leftshoot = false;
			g_p2upshoot = false;
			g_p2downshoot = false;
			g_p3rightshoot = false;
			g_p3leftshoot = false;
			g_p3upshoot = false;
			g_p3downshoot = false;
			g_p4rightshoot = false;
			g_p4leftshoot = false;
			g_p4upshoot = false;
			g_p4downshoot = false;
			if (g_p1 == 1 && g_p1Bdeath) { g_p1Bdeath = false; }
			if (g_p2 == 1 && g_p2Bdeath) { g_p2Bdeath = false; }
			if (g_p3 == 1 && g_p3Bdeath) { g_p3Bdeath = false; }
			if (g_p4 == 1 && g_p4Bdeath) { g_p4Bdeath = false; }
		}

		//当たり判定用の変数に代入
		if (g_p1 == 1) { g_p1BSX = _beamsizeX, g_p1BSY = _beamsizeY; }
		if (g_p2 == 1) { g_p2BSX = _beamsizeX, g_p2BSY = _beamsizeY; }
		if (g_p3 == 1) { g_p3BSX = _beamsizeX, g_p3BSY = _beamsizeY; }
		if (g_p4 == 1) { g_p4BSX = _beamsizeX, g_p4BSY = _beamsizeY; }

		//リザルト遷移時に各種音声の再生を終了
		if (timeup){
			StopSoundMem(chargeS);
		}

	}    //アップデート終了
}



// 描画
void Player::Render() {

	//4人全員Aボタン入力でスタートの部分の文字表示
	if (!(g_ready1P && g_ready2P && g_ready3P && g_ready4P)) {
		DrawExtendGraph(750, 350, 950, 550, Abutton, TRUE);
		DrawExtendGraph(900, 400, 1250, 500, Push, TRUE);
		if (g_p1) {
			if (g_ready1P) {
				DrawGraph(_posX, _posY, kan1Pchargefront[motioncnt], TRUE);
				DrawExtendGraph(290, 420, 445, 470, OK, TRUE);
			}
			else {
				DrawGraph(_posX, _posY, kan1Pmovefront[0], TRUE);
				DrawExtendGraph(290, 420, 445, 470, Ready, TRUE);
			}
		}
		if (g_p2) {
			if (g_ready2P) {
				DrawGraph(_posX, _posY, kan2Pchargefront[motioncnt], TRUE);
				DrawExtendGraph(1530, 420, 1685, 470, OK, TRUE);
			}
			else {
				DrawGraph(_posX, _posY, kan2Pmovefront[0], TRUE);
				DrawExtendGraph(1530, 420, 1685, 470, Ready, TRUE);
			}
		}
		if (g_p3) {
			if (g_ready3P) {
				DrawGraph(_posX, _posY, kan3Pchargefront[motioncnt], TRUE);
				DrawExtendGraph(270, 920, 435, 970, OK, TRUE);
			}
			else { 
				DrawGraph(_posX, _posY, kan3Pmovefront[0], TRUE);
				DrawExtendGraph(270, 920, 435, 970, Ready, TRUE);
			}
		}
		if (g_p4) {
			if (g_ready4P) {
				DrawGraph(_posX, _posY, kan4Pchargefront[motioncnt], TRUE);
				DrawExtendGraph(1530, 920, 1685, 970, OK, TRUE);
			}
			else { 
				DrawGraph(_posX, _posY, kan4Pmovefront[0], TRUE);
				DrawExtendGraph(1530, 920, 1685, 970, Ready, TRUE);
			}
		}
		framecnt++;
		if (framecnt > max) {
			motioncnt++;
			if (motioncnt >= 10) {
				motioncnt = 0;
			}
			framecnt = 0;
		}
	}

	if (g_ready1P && g_ready2P && g_ready3P && g_ready4P) {

		//プレイヤー毎のビームの色変え
		if (g_p1 == 1) { beam = g_p1beamGR; }
		if (g_p2 == 1) { beam = g_p2beamGR; }
		if (g_p3 == 1) { beam = g_p3beamGR; }
		if (g_p4 == 1) { beam = g_p4beamGR; }

		//無敵時間中の透明度の設定
		if (invinciblecnt >= 1) {
			SetDrawBlendMode(DX_BLENDMODE_ALPHA, GetRand(255));
		}

		//待機モーション
		if (_stop == 0 && _wait == 0) {
			if (nowLv3 == false) {
				if ((rightmove | leftmove | downmove | upmove) == false) {
					if (g_p1 == 1) {
						if (rightlast) { DrawGraph(_posX, _posY, kan1Pmoveright[0], TRUE); }
						if (leftlast) { DrawGraph(_posX, _posY, kan1Pmoveleft[0], TRUE); }
						if (uplast) { DrawGraph(_posX, _posY, kan1Pmoveback[0], TRUE); }
						if (downlast) { DrawGraph(_posX, _posY, kan1Pmovefront[0], TRUE); }
					}
					if (g_p1 == 1 && g_p1death) {}

					if (g_p2 == 1) {
						if (rightlast) { DrawGraph(_posX, _posY, kan2Pmoveright[0], TRUE); }
						if (leftlast) { DrawGraph(_posX, _posY, kan2Pmoveleft[0], TRUE); }
						if (uplast) { DrawGraph(_posX, _posY, kan2Pmoveback[0], TRUE); }
						if (downlast) { DrawGraph(_posX, _posY, kan2Pmovefront[0], TRUE); }
					}
					if (g_p2 == 1 && g_p2death) {}

					if (g_p3 == 1) {
						if (rightlast) { DrawGraph(_posX, _posY, kan3Pmoveright[0], TRUE); }
						if (leftlast) { DrawGraph(_posX, _posY, kan3Pmoveleft[0], TRUE); }
						if (uplast) { DrawGraph(_posX, _posY, kan3Pmoveback[0], TRUE); }
						if (downlast) { DrawGraph(_posX, _posY, kan3Pmovefront[0], TRUE); }
					}
					if (g_p3 == 1 && g_p3death) {}

					if (g_p4 == 1) {
						if (rightlast) { DrawGraph(_posX, _posY, kan4Pmoveright[0], TRUE); }
						if (leftlast) { DrawGraph(_posX, _posY, kan4Pmoveleft[0], TRUE); }
						if (uplast) { DrawGraph(_posX, _posY, kan4Pmoveback[0], TRUE); }
						if (downlast) { DrawGraph(_posX, _posY, kan4Pmovefront[0], TRUE); }
					}
					if (g_p4 == 1 && g_p4death) {}
				}
			}
		}

		//移動モーション
		if (_stop == 0 && _wait == 0) {
			if (nowLv3 == false) {
				if (g_p1 == 1) {
					if (rightmove) { DrawGraph(_posX, _posY, kan1Pmoveright[movecnt], TRUE); }
					if (leftmove) { DrawGraph(_posX, _posY, kan1Pmoveleft[movecnt], TRUE); }
					if (upmove) { DrawGraph(_posX, _posY, kan1Pmoveback[movecnt], TRUE); }
					if (downmove) { DrawGraph(_posX, _posY, kan1Pmovefront[movecnt], TRUE); }
				}
				if (g_p1 == 1 && g_p1death) {}

				if (g_p2 == 1) {
					if (rightmove) { DrawGraph(_posX, _posY, kan2Pmoveright[movecnt], TRUE); }
					if (leftmove) { DrawGraph(_posX, _posY, kan2Pmoveleft[movecnt], TRUE); }
					if (upmove) { DrawGraph(_posX, _posY, kan2Pmoveback[movecnt], TRUE); }
					if (downmove) { DrawGraph(_posX, _posY, kan2Pmovefront[movecnt], TRUE); }
				}
				if (g_p2 == 1 && g_p2death)
				{
				}

				if (g_p3 == 1) {
					if (rightmove) { DrawGraph(_posX, _posY, kan3Pmoveright[movecnt], TRUE); }
					if (leftmove) { DrawGraph(_posX, _posY, kan3Pmoveleft[movecnt], TRUE); }
					if (upmove) { DrawGraph(_posX, _posY, kan3Pmoveback[movecnt], TRUE); }
					if (downmove) { DrawGraph(_posX, _posY, kan3Pmovefront[movecnt], TRUE); }
				}
				if (g_p3 == 1 && g_p3death) {}

				if (g_p4 == 1) {
					if (rightmove) { DrawGraph(_posX, _posY, kan4Pmoveright[movecnt], TRUE); }
					if (leftmove) { DrawGraph(_posX, _posY, kan4Pmoveleft[movecnt], TRUE); }
					if (upmove) { DrawGraph(_posX, _posY, kan4Pmoveback[movecnt], TRUE); }
					if (downmove) { DrawGraph(_posX, _posY, kan4Pmovefront[movecnt], TRUE); }
				}
				if (g_p4 == 1 && g_p4death) {}
			}
		}
		if (movecnt >= 24) { movecnt = 0; }


		//チャージ待ちモーション
		if (_stop == 1 && upflag == false && downflag == false) {
			if (g_p1 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan1Pchargeright[0], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan1Pchargeleft[0], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan1Pchargeback[0], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan1Pchargefront[0], TRUE); }
			}
			if (g_p2 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan2Pchargeright[0], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan2Pchargeleft[0], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan2Pchargeback[0], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan2Pchargefront[0], TRUE); }
			}
			if (g_p3 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan3Pchargeright[0], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan3Pchargeleft[0], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan3Pchargeback[0], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan3Pchargefront[0], TRUE); }
			}
			if (g_p4 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan4Pchargeright[0], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan4Pchargeleft[0], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan4Pchargeback[0], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan4Pchargefront[0], TRUE); }
			}
		}

		//発射可能状態
		if (_wait == 1 && _chargeLv == 1) {
			if (g_p1 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan1Pchargeright[0], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan1Pchargeleft[0], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan1Pchargeback[0], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan1Pchargefront[0], TRUE); }
			}
			if (g_p2 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan2Pchargeright[0], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan2Pchargeleft[0], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan2Pchargeback[0], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan2Pchargefront[0], TRUE); }
			}
			if (g_p3 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan3Pchargeright[0], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan3Pchargeleft[0], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan3Pchargeback[0], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan3Pchargefront[0], TRUE); }
			}
			if (g_p4 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan4Pchargeright[0], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan4Pchargeleft[0], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan4Pchargeback[0], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan4Pchargefront[0], TRUE); }
			}
		}
		if (_wait == 1 && _chargeLv == 2) {
			if (g_p1 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan1PchargerightLv2[0], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan1PchargeleftLv2[0], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan1PchargebackLv2[0], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan1PchargefrontLv2[0], TRUE); }
			}
			if (g_p2 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan2PchargerightLv2[0], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan2PchargeleftLv2[0], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan2PchargebackLv2[0], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan2PchargefrontLv2[0], TRUE); }
			}
			if (g_p3 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan3PchargerightLv2[0], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan3PchargeleftLv2[0], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan3PchargebackLv2[0], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan3PchargefrontLv2[0], TRUE); }
			}
			if (g_p4 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan4PchargerightLv2[0], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan4PchargeleftLv2[0], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan4PchargebackLv2[0], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan4PchargefrontLv2[0], TRUE); }
			}
		}

		//チャージモーション
		if (upflag) {
			if (chargecnt >= 8) { chargecnt = 0; }
			if (chargecnt <= 4) { chargecnt++; }
			if (g_p1 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan1Pchargeright[chargecnt], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan1Pchargeleft[chargecnt], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan1Pchargeback[chargecnt], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan1Pchargefront[chargecnt], TRUE); }
			}
			if (g_p2 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan2Pchargeright[chargecnt], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan2Pchargeleft[chargecnt], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan2Pchargeback[chargecnt], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan2Pchargefront[chargecnt], TRUE); }
			}
			if (g_p3 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan3Pchargeright[chargecnt], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan3Pchargeleft[chargecnt], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan3Pchargeback[chargecnt], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan3Pchargefront[chargecnt], TRUE); }
			}
			if (g_p4 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan4Pchargeright[chargecnt], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan4Pchargeleft[chargecnt], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan4Pchargeback[chargecnt], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan4Pchargefront[chargecnt], TRUE); }
			}
		}
		if (downflag) {
			if (chargecnt <= 4) { chargecnt = 4; }
			if (chargecnt <= 8) { chargecnt++; }
			if (g_p1 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan1Pchargeright[chargecnt], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan1Pchargeleft[chargecnt], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan1Pchargeback[chargecnt], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan1Pchargefront[chargecnt], TRUE); }
			}
			if (g_p2 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan2Pchargeright[chargecnt], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan2Pchargeleft[chargecnt], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan2Pchargeback[chargecnt], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan2Pchargefront[chargecnt], TRUE); }
			}
			if (g_p3 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan3Pchargeright[chargecnt], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan3Pchargeleft[chargecnt], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan3Pchargeback[chargecnt], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan3Pchargefront[chargecnt], TRUE); }
			}
			if (g_p4 == 1) {
				if (rightlast) { DrawGraph(_posX, _posY, kan4Pchargeright[chargecnt], TRUE); }
				if (leftlast) { DrawGraph(_posX, _posY, kan4Pchargeleft[chargecnt], TRUE); }
				if (uplast) { DrawGraph(_posX, _posY, kan4Pchargeback[chargecnt], TRUE); }
				if (downlast) { DrawGraph(_posX, _posY, kan4Pchargefront[chargecnt], TRUE); }
			}
		}

		//Lv1のプレイヤーの描画処理
		if (nowrightLv1) {
			if (Lv1count >= _burstcountLv1) {
				if (g_p1 == 1) {
					DrawGraph(_posX, _posY, kan1Pattackright[attackcnt], TRUE);
				}
				if (g_p2 == 1) {
					DrawGraph(_posX, _posY, kan2Pattackright[attackcnt], TRUE);
				}
				if (g_p3 == 1) {
					DrawGraph(_posX, _posY, kan3Pattackright[attackcnt], TRUE);
				}
				if (g_p4 == 1) {
					DrawGraph(_posX, _posY, kan4Pattackright[attackcnt], TRUE);
				}
				if (attackcnt <= 14) { attackcnt++; }
				_stop = 1;
				_burstcountLv1++;
			}
		}
		if (nowleftLv1) {
			if (Lv1count >= _burstcountLv1) {
				if (g_p1 == 1) {
					DrawGraph(_posX, _posY, kan1Pattackleft[attackcnt], TRUE);
				}
				if (g_p2 == 1) {
					DrawGraph(_posX, _posY, kan2Pattackleft[attackcnt], TRUE);
				}
				if (g_p3 == 1) {
					DrawGraph(_posX, _posY, kan3Pattackleft[attackcnt], TRUE);
				}
				if (g_p4 == 1) {
					DrawGraph(_posX, _posY, kan4Pattackleft[attackcnt], TRUE);
				}
				if (attackcnt <= 14) { attackcnt++; }
				_stop = 1;
				_burstcountLv1++;
			}
		}
		if (nowupLv1) {
			if (Lv1count >= _burstcountLv1) {
				if (g_p1 == 1) {
					DrawGraph(_posX, _posY, kan1Pattackback[attackcnt], TRUE);
				}
				if (g_p2 == 1) {
					DrawGraph(_posX, _posY, kan2Pattackback[attackcnt], TRUE);
				}
				if (g_p3 == 1) {
					DrawGraph(_posX, _posY, kan3Pattackback[attackcnt], TRUE);
				}
				if (g_p4 == 1) {
					DrawGraph(_posX, _posY, kan4Pattackback[attackcnt], TRUE);
				}
				if (attackcnt <= 13) { attackcnt++; }
				_stop = 1;
				_burstcountLv1++;
			}
		}
		if (nowdownLv1) {
			if (Lv1count >= _burstcountLv1) {
				if (g_p1 == 1) {
					DrawGraph(_posX, _posY, kan1Pattackfront[attackcnt], TRUE);
				}
				if (g_p2 == 1) {
					DrawGraph(_posX, _posY, kan2Pattackfront[attackcnt], TRUE);
				}
				if (g_p3 == 1) {
					DrawGraph(_posX, _posY, kan3Pattackfront[attackcnt], TRUE);
				}
				if (g_p4 == 1) {
					DrawGraph(_posX, _posY, kan4Pattackfront[attackcnt], TRUE);
				}
				if (attackcnt <= 14) { attackcnt++; }
				_stop = 1;
				_burstcountLv1++;
			}
		}


		//Lv3のプレイヤーの攻撃描画処理
		if (attackcnt <= 14) {
			if (nowLv3) {
				if (nowrightLv3) {
					if (Lv3count >= _burstcountLv3) {
						if (g_p1 == 1) {
							DrawGraph(_posX, _posY, kan1Pattackright[attackcnt], TRUE);
						}
						if (g_p2 == 1) {
							DrawGraph(_posX, _posY, kan2Pattackright[attackcnt], TRUE);
						}
						if (g_p3 == 1) {
							DrawGraph(_posX, _posY, kan3Pattackright[attackcnt], TRUE);
						}
						if (g_p4 == 1) {
							DrawGraph(_posX, _posY, kan4Pattackright[attackcnt], TRUE);
						}
					}
				}
				if (nowleftLv3) {
					if (Lv3count >= _burstcountLv3) {
						if (g_p1 == 1) {
							DrawGraph(_posX, _posY, kan1Pattackleft[attackcnt], TRUE);
						}
						if (g_p2 == 1) {
							DrawGraph(_posX, _posY, kan2Pattackleft[attackcnt], TRUE);
						}
						if (g_p3 == 1) {
							DrawGraph(_posX, _posY, kan3Pattackleft[attackcnt], TRUE);
						}
						if (g_p4 == 1) {
							DrawGraph(_posX, _posY, kan4Pattackleft[attackcnt], TRUE);
						}
					}
				}
				if (nowupLv3) {
					if (Lv3count >= _burstcountLv3) {
						if (g_p1 == 1) {
							DrawGraph(_posX, _posY, kan1Pattackback[attackcnt], TRUE);
						}
						if (g_p2 == 1) {
							DrawGraph(_posX, _posY, kan2Pattackback[attackcnt], TRUE);
						}
						if (g_p3 == 1) {
							DrawGraph(_posX, _posY, kan3Pattackback[attackcnt], TRUE);
						}
						if (g_p4 == 1) {
							DrawGraph(_posX, _posY, kan4Pattackback[attackcnt], TRUE);
						}
					}
				}
				if (nowdownLv3) {
					if (Lv3count >= _burstcountLv3) {
						if (g_p1 == 1) {
							DrawGraph(_posX, _posY, kan1Pattackfront[attackcnt], TRUE);
						}
						if (g_p2 == 1) {
							DrawGraph(_posX, _posY, kan2Pattackfront[attackcnt], TRUE);
						}
						if (g_p3 == 1) {
							DrawGraph(_posX, _posY, kan3Pattackfront[attackcnt], TRUE);
						}
						if (g_p4 == 1) {
							DrawGraph(_posX, _posY, kan4Pattackfront[attackcnt], TRUE);
						}
					}
				}
				if (attackcnt <= 14) { attackcnt++; }
			}
		}

		//Lv3のプレイヤーの歩き描画処理
		if (attackcnt >= 14) {
			if (nowLv3) {
				if (nowrightLv3) {
					if (Lv3count >= _burstcountLv3) {
						if (g_p1 == 1) {
							DrawGraph(_posX, _posY, kan1Pmoveattackright[Lv3movecnt], TRUE);
						}
						if (g_p2 == 1) {
							DrawGraph(_posX, _posY, kan2Pmoveattackright[Lv3movecnt], TRUE);
						}
						if (g_p3 == 1) {
							DrawGraph(_posX, _posY, kan3Pmoveattackright[Lv3movecnt], TRUE);
						}
						if (g_p4 == 1) {
							DrawGraph(_posX, _posY, kan4Pmoveattackright[Lv3movecnt], TRUE);
						}
					}
				}
				if (nowleftLv3) {
					if (Lv3count >= _burstcountLv3) {
						if (g_p1 == 1) {
							DrawGraph(_posX, _posY, kan1Pmoveattackleft[Lv3movecnt], TRUE);
						}
						if (g_p2 == 1) {
							DrawGraph(_posX, _posY, kan2Pmoveattackleft[Lv3movecnt], TRUE);
						}
						if (g_p3 == 1) {
							DrawGraph(_posX, _posY, kan3Pmoveattackleft[Lv3movecnt], TRUE);
						}
						if (g_p4 == 1) {
							DrawGraph(_posX, _posY, kan4Pmoveattackleft[Lv3movecnt], TRUE);
						}
					}
				}
				if (nowupLv3) {
					if (Lv3count >= _burstcountLv3) {
						if (g_p1 == 1) {
							DrawGraph(_posX, _posY, kan1Pmoveattackback[Lv3movecnt], TRUE);
						}
						if (g_p2 == 1) {
							DrawGraph(_posX, _posY, kan2Pmoveattackback[Lv3movecnt], TRUE);
						}
						if (g_p3 == 1) {
							DrawGraph(_posX, _posY, kan3Pmoveattackback[Lv3movecnt], TRUE);
						}
						if (g_p4 == 1) {
							DrawGraph(_posX, _posY, kan4Pmoveattackback[Lv3movecnt], TRUE);
						}
					}
				}
				if (nowdownLv3) {
					if (Lv3count >= _burstcountLv3) {
						if (g_p1 == 1) {
							DrawGraph(_posX, _posY, kan1Pmoveattackfront[Lv3movecnt], TRUE);
						}
						if (g_p2 == 1) {
							DrawGraph(_posX, _posY, kan2Pmoveattackfront[Lv3movecnt], TRUE);
						}
						if (g_p3 == 1) {
							DrawGraph(_posX, _posY, kan3Pmoveattackfront[Lv3movecnt], TRUE);
						}
						if (g_p4 == 1) {
							DrawGraph(_posX, _posY, kan4Pmoveattackfront[Lv3movecnt], TRUE);
						}
					}
				}
				if (Lv3movecnt >= 24) { Lv3movecnt = 0; }
			}
		}


		//Lv2のプレイヤーの攻撃描画処理
		if (nowrightLv2) {
			if (Lv2count >= _burstcountLv2) {
				if (g_p1 == 1) {
					DrawGraph(_posX, _posY, kan1PLv2attackright[attackcnt], TRUE);
				}
				if (g_p2 == 1) {
					DrawGraph(_posX, _posY, kan2PLv2attackright[attackcnt], TRUE);
				}
				if (g_p3 == 1) {
					DrawGraph(_posX, _posY, kan3PLv2attackright[attackcnt], TRUE);
				}
				if (g_p4 == 1) {
					DrawGraph(_posX, _posY, kan4PLv2attackright[attackcnt], TRUE);
				}
				if (attackcnt <= 15) { attackcnt++; }
			}
		}
		if (nowleftLv2) {
			if (Lv2count >= _burstcountLv2) {
				if (g_p1 == 1) {
					DrawGraph(_posX, _posY, kan1PLv2attackleft[attackcnt], TRUE);
				}
				if (g_p2 == 1) {
					DrawGraph(_posX, _posY, kan2PLv2attackleft[attackcnt], TRUE);
				}
				if (g_p3 == 1) {
					DrawGraph(_posX, _posY, kan3PLv2attackleft[attackcnt], TRUE);
				}
				if (g_p4 == 1) {
					DrawGraph(_posX, _posY, kan4PLv2attackleft[attackcnt], TRUE);
				}
				if (attackcnt <= 15) { attackcnt++; }
			}
		}
		if (nowupLv2) {
			if (Lv2count >= _burstcountLv2) {
				if (g_p1 == 1) {
					DrawGraph(_posX, _posY, kan1PLv2attackback[attackcnt], TRUE);
				}
				if (g_p2 == 1) {
					DrawGraph(_posX, _posY, kan2PLv2attackback[attackcnt], TRUE);
				}
				if (g_p3 == 1) {
					DrawGraph(_posX, _posY, kan3PLv2attackback[attackcnt], TRUE);
				}
				if (g_p4 == 1) {
					DrawGraph(_posX, _posY, kan4PLv2attackback[attackcnt], TRUE);
				}
				if (attackcnt <= 15) { attackcnt++; }
			}
		}
		if (nowdownLv2) {
			if (Lv2count >= _burstcountLv2) {
				if (g_p1 == 1) {
					DrawGraph(_posX, _posY, kan1PLv2attackfront[attackcnt], TRUE);
				}
				if (g_p2 == 1) {
					DrawGraph(_posX, _posY, kan2PLv2attackfront[attackcnt], TRUE);
				}
				if (g_p3 == 1) {
					DrawGraph(_posX, _posY, kan3PLv2attackfront[attackcnt], TRUE);
				}
				if (g_p4 == 1) {
					DrawGraph(_posX, _posY, kan4PLv2attackfront[attackcnt], TRUE);
				}
				if (attackcnt <= 15) { attackcnt++; }
			}
		}


		//Lv1のプレイヤーのビーム描画処理
		if (nowrightLv1) {
			if (Lv1count >= _burstcountLv1) {
			}
		}
		if (nowleftLv1) {
			if (Lv1count >= _burstcountLv1) {
			}
		}
		if (nowupLv1) {
			if (Lv1count >= _burstcountLv1) {
			}
		}
		if (nowdownLv1) {
			if (Lv1count >= _burstcountLv1) {
			}
		}
		//Lv2のプレイヤーのビーム描画処理
		if (nowrightLv2) {
			if (Lv2count >= _burstcountLv2)
			{
				_burstcountLv2++;
			}
		}
		if (nowleftLv2) {
			if (Lv2count >= _burstcountLv2)
			{
				_burstcountLv2++;
			}
		}
		if (nowupLv2) {
			if (Lv2count >= _burstcountLv2)
			{
				_burstcountLv2++;
			}
		}
		if (nowdownLv2) {
			if (Lv2count >= _burstcountLv2)
			{
				_burstcountLv2++;
			}
		}

		//Lv3のプレイヤーのビーム描画処理
		if (nowLv3) {
			_burstcountLv3++;
		}

		//透明度のリセット
			SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);

		//リスポーンのエフェクト描画処理
		if (g_p1 && g_p1invincible) {
			DrawGraph(_posX, _posY, kanrespawn[effectcnt], TRUE);
		}
		if (g_p2 && g_p2invincible) {
			DrawGraph(_posX, _posY, kanrespawn[effectcnt], TRUE);
		}
		if (g_p3 && g_p3invincible) {
			DrawGraph(_posX, _posY, kanrespawn[effectcnt], TRUE);
		}
		if (g_p4 && g_p4invincible) {
			DrawGraph(_posX, _posY, kanrespawn[effectcnt], TRUE);
		}

		//吹っ飛びモーションの描画処理
		if (g_p1 == 1 && g_p1death)
		{
			DrawGraph(_posX, _posY, kandeath[deathcnt], TRUE);
		}
		if (g_p2 == 1 && g_p2death)
		{
			DrawGraph(_posX, _posY, kandeath[deathcnt], TRUE);
		}
		if (g_p3 == 1 && g_p3death)
		{
			DrawGraph(_posX, _posY, kandeath[deathcnt], TRUE);
		}
		if (g_p4 == 1 && g_p4death)
		{
			DrawGraph(_posX, _posY, kandeath[deathcnt], TRUE);
		}


		//チャージ中のゲージ処理(プレイヤーの頭上)
		if (g_p1) { DrawBoxAA(_posX + 30, _posY - 30, _posX + 30 + _power * 10, _posY, GetColor(0, 255, 0), TRUE); }
		if (g_p1 && _power >= 3) { DrawBoxAA(_posX + 60, _posY - 30, _posX + 60 + (_power - 3) * 10, _posY, GetColor(255, 127, 0), TRUE); }
		if (g_p1 && _power >= 10) { DrawBoxAA(_posX + 130, _posY - 30, _posX + 130 + (_power - 10) * 10, _posY, GetColor(255, 0, 0), TRUE); }

		if (g_p2) { DrawBoxAA(_posX + 30, _posY - 30, _posX + 30 + _power * 10, _posY, GetColor(0, 255, 0), TRUE); }
		if (g_p2 && _power >= 3) { DrawBoxAA(_posX + 60, _posY - 30, _posX + 60 + (_power - 3) * 10, _posY, GetColor(255, 127, 0), TRUE); }
		if (g_p2 && _power >= 10) { DrawBoxAA(_posX + 130, _posY - 30, _posX + 130 + (_power - 10) * 10, _posY, GetColor(255, 0, 0), TRUE); }

		if (g_p3) { DrawBoxAA(_posX + 30, _posY - 30, _posX + 30 + _power * 10, _posY, GetColor(0, 255, 0), TRUE); }
		if (g_p3 && _power >= 3) { DrawBoxAA(_posX + 60, _posY - 30, _posX + 60 + (_power - 3) * 10, _posY, GetColor(255, 127, 0), TRUE); }
		if (g_p3 && _power >= 10) { DrawBoxAA(_posX + 130, _posY - 30, _posX + 130 + (_power - 10) * 10, _posY, GetColor(255, 0, 0), TRUE); }

		if (g_p4) { DrawBoxAA(_posX + 30, _posY - 30, _posX + 30 + _power * 10, _posY, GetColor(0, 255, 0), TRUE); }
		if (g_p4 && _power >= 3) { DrawBoxAA(_posX + 60, _posY - 30, _posX + 60 + (_power - 3) * 10, _posY, GetColor(255, 127, 0), TRUE); }
		if (g_p4 && _power >= 10) { DrawBoxAA(_posX + 130, _posY - 30, _posX + 130 + (_power - 10) * 10, _posY, GetColor(255, 0, 0), TRUE); }

		for (auto&& Beam : jadge->beamAll) {
			Beam->Render();
		}
	}

}    //描画処理終了



void Player::SetChargeLv() {         //レベル決めの関数
	if (g_p1) {
		if (_power >= chargeArray[g_1Prank - 1][0] && _power <= chargeArray[g_1Prank - 1][1] - 1) {
			_chargeLv = 1;
		}
		if (_power >= chargeArray[g_1Prank - 1][1] && _power <= chargeArray[g_1Prank - 1][2] - 1) {
			_chargeLv = 2;
		}
		if (_power >= chargeArray[g_1Prank - 1][2]) {
			nowLv3 = true;
			PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
		}
	}
	if (g_p2) {
		if (_power >= chargeArray[g_2Prank - 1][0] && _power <= chargeArray[g_2Prank - 1][1] - 1) {
			_chargeLv = 1;
		}
		if (_power >= chargeArray[g_2Prank - 1][1] && _power <= chargeArray[g_2Prank - 1][2] - 1) {
			_chargeLv = 2;
		}
		if (_power >= chargeArray[g_2Prank - 1][2]) {
			nowLv3 = true;
			PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
		}
	}
	if (g_p3) {
		if (_power >= chargeArray[g_3Prank - 1][0] && _power <= chargeArray[g_3Prank - 1][1] - 1) {
			_chargeLv = 1;
		}
		if (_power >= chargeArray[g_3Prank - 1][1] && _power <= chargeArray[g_3Prank - 1][2] - 1) {
			_chargeLv = 2;
		}
		if (_power >= chargeArray[g_3Prank - 1][2]) {
			nowLv3 = true;
			PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
		}
	}
	if (g_p4) {
		if (_power >= chargeArray[g_4Prank - 1][0] && _power <= chargeArray[g_4Prank - 1][1] - 1) {
			_chargeLv = 1;
		}
		if (_power >= chargeArray[g_4Prank - 1][1] && _power <= chargeArray[g_4Prank - 1][2] - 1) {
			_chargeLv = 2;
		}
		if (_power >= chargeArray[g_4Prank - 1][2]) {
			nowLv3 = true;
			PlaySoundMem(burstsound, DX_PLAYTYPE_BACK);
		}
	}
}


void Player::ShootingRight() {            //右撃ち描画
	if (g_p1 == 1)
	{
		if (shootdelay >= 6) {
			DrawGraph(_colPosX + _colSizeX + 60, _posY + 50, beam, TRUE);
			if (rangeXcount >= 1) { DrawGraph(_colPosX + _colSizeX + 110, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 2) { DrawGraph(_colPosX + _colSizeX + 160, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 3) { DrawGraph(_colPosX + _colSizeX + 210, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 4) { DrawGraph(_colPosX + _colSizeX + 260, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 5) { DrawGraph(_colPosX + _colSizeX + 310, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 6) { DrawGraph(_colPosX + _colSizeX + 360, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 7) { DrawGraph(_colPosX + _colSizeX + 410, _posY + 50, beam, TRUE); }
		}
	}
	if (g_p2 == 1)
	{
		if (shootdelay >= 6) {
			DrawGraph(_colPosX + _colSizeX + 60, _posY + 50, beam, TRUE);
			if (rangeXcount >= 1) { DrawGraph(_colPosX + _colSizeX + 110, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 2) { DrawGraph(_colPosX + _colSizeX + 160, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 3) { DrawGraph(_colPosX + _colSizeX + 210, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 4) { DrawGraph(_colPosX + _colSizeX + 260, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 5) { DrawGraph(_colPosX + _colSizeX + 310, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 6) { DrawGraph(_colPosX + _colSizeX + 360, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 7) { DrawGraph(_colPosX + _colSizeX + 410, _posY + 50, beam, TRUE); }
		}
	}
	if (g_p3 == 1)
	{
		if (shootdelay >= 6) {
			DrawGraph(_colPosX + _colSizeX + 60, _posY + 50, beam, TRUE);
			if (rangeXcount >= 1) { DrawGraph(_colPosX + _colSizeX + 110, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 2) { DrawGraph(_colPosX + _colSizeX + 160, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 3) { DrawGraph(_colPosX + _colSizeX + 210, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 4) { DrawGraph(_colPosX + _colSizeX + 260, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 5) { DrawGraph(_colPosX + _colSizeX + 310, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 6) { DrawGraph(_colPosX + _colSizeX + 360, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 7) { DrawGraph(_colPosX + _colSizeX + 410, _posY + 50, beam, TRUE); }
		}
	}
	if (g_p4 == 1)
	{
		if (shootdelay >= 6) {
			DrawGraph(_colPosX + _colSizeX + 60, _posY + 50, beam, TRUE);
			if (rangeXcount >= 1) { DrawGraph(_colPosX + _colSizeX + 110, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 2) { DrawGraph(_colPosX + _colSizeX + 160, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 3) { DrawGraph(_colPosX + _colSizeX + 210, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 4) { DrawGraph(_colPosX + _colSizeX + 260, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 5) { DrawGraph(_colPosX + _colSizeX + 310, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 6) { DrawGraph(_colPosX + _colSizeX + 360, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 7) { DrawGraph(_colPosX + _colSizeX + 410, _posY + 50, beam, TRUE); }
		}
	}
}


void Player::ShootingLeft() {            //左撃ち描画
	if (g_p1 == 1)
	{
		if (shootdelay >= 6) {
			DrawTurnGraph(_colPosX - 110, _posY + 50, beam, TRUE);
			if (rangeXcount >= 1) { DrawTurnGraph(_colPosX - 160, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 2) { DrawTurnGraph(_colPosX - 210, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 3) { DrawTurnGraph(_colPosX - 260, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 4) { DrawTurnGraph(_colPosX - 310, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 5) { DrawTurnGraph(_colPosX - 360, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 6) { DrawTurnGraph(_colPosX - 410, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 7) { DrawTurnGraph(_colPosX - 460, _posY + 50, beam, TRUE); }
		}
	}
	if (g_p2 == 1)
	{
		if (shootdelay >= 6) {
			DrawTurnGraph(_colPosX - 110, _posY + 50, beam, TRUE);
			if (rangeXcount >= 1) { DrawTurnGraph(_colPosX - 160, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 2) { DrawTurnGraph(_colPosX - 210, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 3) { DrawTurnGraph(_colPosX - 260, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 4) { DrawTurnGraph(_colPosX - 310, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 5) { DrawTurnGraph(_colPosX - 360, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 6) { DrawTurnGraph(_colPosX - 410, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 7) { DrawTurnGraph(_colPosX - 460, _posY + 50, beam, TRUE); }
		}
	}
	if (g_p3 == 1)
	{
		if (shootdelay >= 6) {
			DrawTurnGraph(_colPosX - 110, _posY + 50, beam, TRUE);
			if (rangeXcount >= 1) { DrawTurnGraph(_colPosX - 160, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 2) { DrawTurnGraph(_colPosX - 210, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 3) { DrawTurnGraph(_colPosX - 260, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 4) { DrawTurnGraph(_colPosX - 310, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 5) { DrawTurnGraph(_colPosX - 360, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 6) { DrawTurnGraph(_colPosX - 410, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 7) { DrawTurnGraph(_colPosX - 460, _posY + 50, beam, TRUE); }
		}
	}
	if (g_p4 == 1)
	{
		if (shootdelay >= 6) {
			DrawTurnGraph(_colPosX - 110, _posY + 50, beam, TRUE);
			if (rangeXcount >= 1) { DrawTurnGraph(_colPosX - 160, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 2) { DrawTurnGraph(_colPosX - 210, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 3) { DrawTurnGraph(_colPosX - 260, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 4) { DrawTurnGraph(_colPosX - 310, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 5) { DrawTurnGraph(_colPosX - 360, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 6) { DrawTurnGraph(_colPosX - 410, _posY + 50, beam, TRUE); }
			if (rangeXcount >= 7) { DrawTurnGraph(_colPosX - 460, _posY + 50, beam, TRUE); }
		}
	}
}


void Player::ShootingUp() {               //上撃ち描画
	if (g_p1 == 1)
	{
		if (shootdelay >= 6) {
			DrawRotaGraph(_kancenterX, _kancenterY - 113, 1, PI * 1.5f, beam, TRUE);
			if (rangeYcount >= 1) { DrawRotaGraph(_kancenterX, _kancenterY - 163, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 2) { DrawRotaGraph(_kancenterX, _kancenterY - 213, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 3) { DrawRotaGraph(_kancenterX, _kancenterY - 263, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 4) { DrawRotaGraph(_kancenterX, _kancenterY - 313, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 5) { DrawRotaGraph(_kancenterX, _kancenterY - 363, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 6) { DrawRotaGraph(_kancenterX, _kancenterY - 413, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 7) { DrawRotaGraph(_kancenterX, _kancenterY - 463, 1, PI * 1.5f, beam, TRUE); }
		}
	}
	if (g_p2 == 1)
	{
		if (shootdelay >= 6) {
			DrawRotaGraph(_kancenterX, _kancenterY - 113, 1, PI * 1.5f, beam, TRUE);
			if (rangeYcount >= 1) { DrawRotaGraph(_kancenterX, _kancenterY - 163, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 2) { DrawRotaGraph(_kancenterX, _kancenterY - 213, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 3) { DrawRotaGraph(_kancenterX, _kancenterY - 263, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 4) { DrawRotaGraph(_kancenterX, _kancenterY - 313, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 5) { DrawRotaGraph(_kancenterX, _kancenterY - 363, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 6) { DrawRotaGraph(_kancenterX, _kancenterY - 413, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 7) { DrawRotaGraph(_kancenterX, _kancenterY - 463, 1, PI * 1.5f, beam, TRUE); }
		}
	}
	if (g_p3 == 1) 
	{
		if (shootdelay >= 6) {
			DrawRotaGraph(_kancenterX, _kancenterY - 113, 1, PI * 1.5f, beam, TRUE);
			if (rangeYcount >= 1) { DrawRotaGraph(_kancenterX, _kancenterY - 163, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 2) { DrawRotaGraph(_kancenterX, _kancenterY - 213, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 3) { DrawRotaGraph(_kancenterX, _kancenterY - 263, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 4) { DrawRotaGraph(_kancenterX, _kancenterY - 313, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 5) { DrawRotaGraph(_kancenterX, _kancenterY - 363, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 6) { DrawRotaGraph(_kancenterX, _kancenterY - 413, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 7) { DrawRotaGraph(_kancenterX, _kancenterY - 463, 1, PI * 1.5f, beam, TRUE); }
		}
	}
	if (g_p4 == 1)
	{
		if (shootdelay >= 6) {
			DrawRotaGraph(_kancenterX, _kancenterY - 113, 1, PI * 1.5f, beam, TRUE);
			if (rangeYcount >= 1) { DrawRotaGraph(_kancenterX, _kancenterY - 163, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 2) { DrawRotaGraph(_kancenterX, _kancenterY - 213, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 3) { DrawRotaGraph(_kancenterX, _kancenterY - 263, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 4) { DrawRotaGraph(_kancenterX, _kancenterY - 313, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 5) { DrawRotaGraph(_kancenterX, _kancenterY - 363, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 6) { DrawRotaGraph(_kancenterX, _kancenterY - 413, 1, PI * 1.5f, beam, TRUE); }
			if (rangeYcount >= 7) { DrawRotaGraph(_kancenterX, _kancenterY - 463, 1, PI * 1.5f, beam, TRUE); }
		}
	}
}


void Player::ShootingDown() {                  //下撃ち描画
	if (g_p1 == 1)
	{
		if (shootdelay >= 6) {
			DrawRotaGraph(_kancenterX, _kancenterY + 93, 1, PI / 2, beam, TRUE);
			if (rangeYcount >= 1) { DrawRotaGraph(_kancenterX, _kancenterY + 143, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 2) { DrawRotaGraph(_kancenterX, _kancenterY + 193, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 3) { DrawRotaGraph(_kancenterX, _kancenterY + 243, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 4) { DrawRotaGraph(_kancenterX, _kancenterY + 293, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 5) { DrawRotaGraph(_kancenterX, _kancenterY + 343, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 6) { DrawRotaGraph(_kancenterX, _kancenterY + 393, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 7) { DrawRotaGraph(_kancenterX, _kancenterY + 443, 1, PI / 2, beam, TRUE); }
		}
	}
	if (g_p2 == 1)
	{
		if (shootdelay >= 6) {
			DrawRotaGraph(_kancenterX, _kancenterY + 93, 1, PI / 2, beam, TRUE);
			if (rangeYcount >= 1) { DrawRotaGraph(_kancenterX, _kancenterY + 143, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 2) { DrawRotaGraph(_kancenterX, _kancenterY + 193, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 3) { DrawRotaGraph(_kancenterX, _kancenterY + 243, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 4) { DrawRotaGraph(_kancenterX, _kancenterY + 293, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 5) { DrawRotaGraph(_kancenterX, _kancenterY + 343, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 6) { DrawRotaGraph(_kancenterX, _kancenterY + 393, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 7) { DrawRotaGraph(_kancenterX, _kancenterY + 443, 1, PI / 2, beam, TRUE); }
		}
	}
	if (g_p3 == 1)
	{
		if (shootdelay >= 6) {
			DrawRotaGraph(_kancenterX, _kancenterY + 93, 1, PI / 2, beam, TRUE);
			if (rangeYcount >= 1) { DrawRotaGraph(_kancenterX, _kancenterY + 143, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 2) { DrawRotaGraph(_kancenterX, _kancenterY + 193, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 3) { DrawRotaGraph(_kancenterX, _kancenterY + 243, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 4) { DrawRotaGraph(_kancenterX, _kancenterY + 293, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 5) { DrawRotaGraph(_kancenterX, _kancenterY + 343, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 6) { DrawRotaGraph(_kancenterX, _kancenterY + 393, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 7) { DrawRotaGraph(_kancenterX, _kancenterY + 443, 1, PI / 2, beam, TRUE); }
		}
	}
	if (g_p4 == 1)
	{
		if (shootdelay >= 6) {
			DrawRotaGraph(_kancenterX, _kancenterY + 93, 1, PI / 2, beam, TRUE);
			if (rangeYcount >= 1) { DrawRotaGraph(_kancenterX, _kancenterY + 143, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 2) { DrawRotaGraph(_kancenterX, _kancenterY + 193, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 3) { DrawRotaGraph(_kancenterX, _kancenterY + 243, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 4) { DrawRotaGraph(_kancenterX, _kancenterY + 293, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 5) { DrawRotaGraph(_kancenterX, _kancenterY + 343, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 6) { DrawRotaGraph(_kancenterX, _kancenterY + 393, 1, PI / 2, beam, TRUE); }
			if (rangeYcount >= 7) { DrawRotaGraph(_kancenterX, _kancenterY + 443, 1, PI / 2, beam, TRUE); }
		}
	}
}

void Player::Respawn() {                  //リスポーンの処理

	if (g_p1 == 1 && g_p1death) {
		if (deathcnt == 45)
		{
			g_p1death = false;
			g_p1invincible = true;
			_power = 0;
			_posX = GetRand(STAGE_We - 100);

			while (_posX < STAGE_Ws) {
				_posX = GetRand(STAGE_We - 100);
			}

			if ((_posX > g_p4X - 90 && _posX < g_p4X + 90) || (_posX > g_p2X - 90 && _posX < g_p2X + 90) || (_posX > g_p3X - 90 && _posX < g_p3X + 90)) {
				if (_posX < STAGE_Ws + 810)
				{
					_posX + 100;
				}
				if (_posX > STAGE_We - 670)
				{
					_posX - 100;
				}
			}
			_posY = GetRand(STAGE_He - 150);

			while (_posY < STAGE_Hs) {
				_posY = GetRand(STAGE_He - 150);
				if ((_posY > g_p4Y - 150 && _posY < g_p4Y + 150) || (_posY > g_p2Y - 150 && _posY < g_p2Y + 150) || (_posY > g_p3Y - 150 && _posY < g_p3Y + 150)) {
					if (_posY < STAGE_Ws + 430)
					{
						_posY + 200;
					}
					if (_posY < STAGE_We + 430)
					{
						_posY - 200;
					}
				}
			}

			_colPosX = _posX + 70;
			_colPosY = _posY + 90;
			_kancenterX = _colPosX + (_colSizeX / 2);
			_kancenterY = _colPosY + (_colSizeY / 2);
			g_p1X = _kancenterX;
			g_p1Y = _kancenterY;
			deathcnt = 0;
			_burstcountLv1 = 0;
			rangeXcount = 0;
			rangeYcount = 0;
			_rangeX = 25;
			_rangeY = 25;
			_chargeLv = 0;
			_wait = 0;
			nowLv1 = false;
			nowleftLv1 = false;
			nowrightLv1 = false;
			nowupLv1 = false;
			nowdownLv1 = false;
			_burstcountLv2 = 0;
			nowLv2 = false;
			nowleftLv2 = false;
			nowrightLv2 = false;
			nowupLv2 = false;
			nowdownLv2 = false;
			_burstcountLv3 = 0;
			nowLv3 = false;
			nowleftLv3 = false;
			nowrightLv3 = false;
			nowupLv3 = false;
			nowdownLv3 = false;
			_beamcenterX = 3000;
			_beamcenterY = 3000;
			attackcnt = 0;
			shootdelay = 0;
			_beamsizeX = 0;
			_beamsizeY = 0;
			Lv3movecnt = 0;
			blowcnt = 0;
			awaycnt = 0;
			chargelimit = 0;
			g_p1Bdeath = false;
			g_p1deathright = false;
			g_p1deathleft = false;
			g_p1deathfront = false;
			g_p1deathback = false;
			PlaySoundMem(respawnS, DX_PLAYTYPE_BACK);
		}
		deathcnt++;
	}
	if (g_p2 == 1 && g_p2death) {
		if (deathcnt == 45)
		{
			g_p2death = false;
			g_p2invincible = true;
			_power = 0;
			_posX = GetRand(STAGE_We - 100);

			while (_posX < STAGE_Ws) {
				_posX = GetRand(STAGE_We - 100);
			}

			if ((_posX > g_p1X - 90 && _posX < g_p1X + 90) || (_posX > g_p4X - 90 && _posX < g_p4X + 90) || (_posX > g_p3X - 90 && _posX < g_p3X + 90)) {
				if (_posX < STAGE_Ws + 810)
				{
					_posX + 100;
				}
				if (_posX > STAGE_We - 670)
				{
					_posX - 100;
				}
			}
			_posY = GetRand(STAGE_He - 150);

			while (_posY < STAGE_Hs) {
				_posY = GetRand(STAGE_He - 150);
				if ((_posY > g_p1Y - 150 && _posY < g_p1Y + 150) || (_posY > g_p4Y - 150 && _posY < g_p4Y + 150) || (_posY > g_p3Y - 150 && _posY < g_p3Y + 150)) {
					if (_posY < STAGE_Ws + 430)
					{
						_posY + 200;
					}
					if (_posY < STAGE_We + 430)
					{
						_posY - 200;
					}
				}
			}

			_colPosX = _posX + 70;
			_colPosY = _posY + 90;
			_kancenterX = _colPosX + (_colSizeX / 2);
			_kancenterY = _colPosY + (_colSizeY / 2);
			g_p2X = _kancenterX;
			g_p2Y = _kancenterY;
			deathcnt = 0;
			_burstcountLv1 = 0;
			rangeXcount = 0;
			rangeYcount = 0;
			_rangeX = 25;
			_rangeY = 25;
			_chargeLv = 0;
			_wait = 0;
			nowLv1 = false;
			nowleftLv1 = false;
			nowrightLv1 = false;
			nowupLv1 = false;
			nowdownLv1 = false;
			_burstcountLv2 = 0;
			nowLv2 = false;
			nowleftLv2 = false;
			nowrightLv2 = false;
			nowupLv2 = false;
			nowdownLv2 = false;
			_burstcountLv3 = 0;
			nowLv3 = false;
			nowleftLv3 = false;
			nowrightLv3 = false;
			nowupLv3 = false;
			nowdownLv3 = false;
			_beamcenterX = 3000;
			_beamcenterY = 3000;
			attackcnt = 0;
			shootdelay = 0;
			_beamsizeX = 0;
			_beamsizeY = 0;
			Lv3movecnt = 0;
			blowcnt = 0;
			awaycnt = 0;
			chargelimit = 0;
			g_p2Bdeath = false;
			g_p2deathright = false;
			g_p2deathleft = false;
			g_p2deathfront = false;
			g_p2deathback = false;
			PlaySoundMem(respawnS, DX_PLAYTYPE_BACK);
		}
		deathcnt++;
	}
	if (g_p3 == 1 && g_p3death) {
		if (deathcnt == 45)
		{
			g_p3death = false;
			g_p3invincible = true;
			_power = 0;
			_posX = GetRand(STAGE_We - 100);

			while (_posX < STAGE_Ws) {
				_posX = GetRand(STAGE_We - 100);
			}

			if ((_posX > g_p1X - 90 && _posX < g_p1X + 90) || (_posX > g_p2X - 90 && _posX < g_p2X + 90) || (_posX > g_p4X - 90 && _posX < g_p4X + 90)) {
				if (_posX < STAGE_Ws + 810)
				{
					_posX + 100;
				}
				if (_posX > STAGE_We - 670)
				{
					_posX - 100;
				}
			}
			_posY = GetRand(STAGE_He - 150);

			while (_posY < STAGE_Hs) {
				_posY = GetRand(STAGE_He - 150);
				if ((_posY > g_p1Y - 150 && _posY < g_p1Y + 150) || (_posY > g_p2Y - 150 && _posY < g_p2Y + 150) || (_posY > g_p4Y - 150 && _posY < g_p4Y + 150)) {
					if (_posY < STAGE_Ws + 430)
					{
						_posY + 200;
					}
					if (_posY < STAGE_We + 430)
					{
						_posY - 200;
					}
				}
			}

			_colPosX = _posX + 70;
			_colPosY = _posY + 90;
			_kancenterX = _colPosX + (_colSizeX / 2);
			_kancenterY = _colPosY + (_colSizeY / 2);
			g_p3X = _kancenterX;
			g_p3Y = _kancenterY;
			deathcnt = 0;
			_burstcountLv1 = 0;
			rangeXcount = 0;
			rangeYcount = 0;
			_rangeX = 25;
			_rangeY = 25;
			_chargeLv = 0;
			_wait = 0;
			nowLv1 = false;
			nowleftLv1 = false;
			nowrightLv1 = false;
			nowupLv1 = false;
			nowdownLv1 = false;
			_burstcountLv2 = 0;
			nowLv2 = false;
			nowleftLv2 = false;
			nowrightLv2 = false;
			nowupLv2 = false;
			nowdownLv2 = false;
			_burstcountLv3 = 0;
			nowLv3 = false;
			nowleftLv3 = false;
			nowrightLv3 = false;
			nowupLv3 = false;
			nowdownLv3 = false;
			_beamcenterX = 3000;
			_beamcenterY = 3000;
			attackcnt = 0;
			shootdelay = 0;
			_beamsizeX = 0;
			_beamsizeY = 0;
			Lv3movecnt = 0;
			blowcnt = 0;
			awaycnt = 0;
			chargelimit = 0;
			g_p3Bdeath = false;
			g_p3deathright = false;
			g_p3deathleft = false;
			g_p3deathfront = false;
			g_p3deathback = false;
			PlaySoundMem(respawnS, DX_PLAYTYPE_BACK);
		}
		deathcnt++;
	}
	if (g_p4 == 1 && g_p4death) {
		if (deathcnt == 45)
		{
			g_p4death = false;
			g_p4invincible = true;
			_power = 0;
			_posX = GetRand(STAGE_We - 100);

			while (_posX < STAGE_Ws) {
				_posX = GetRand(STAGE_We - 100);
			}

			if ((_posX > g_p1X - 90 && _posX < g_p1X + 90) || (_posX > g_p2X - 90 && _posX < g_p2X + 90) || (_posX > g_p3X - 90 && _posX < g_p3X + 90)) {
				if (_posX < STAGE_Ws + 810)
				{
					_posX + 100;
				}
				if (_posX > STAGE_We - 670)
				{
					_posX - 100;
				}
			}
			_posY = GetRand(STAGE_He - 150);

			while (_posY < STAGE_Hs) {
				_posY = GetRand(STAGE_He - 150);
				if ((_posY > g_p1Y - 150 && _posY < g_p1Y + 150) || (_posY > g_p2Y - 150 && _posY < g_p2Y + 150) || (_posY > g_p3Y - 150 && _posY < g_p3Y + 150)) {
					if (_posY < STAGE_Ws + 430)
					{
						_posY + 200;
					}
					if (_posY < STAGE_We + 430)
					{
						_posY - 200;
					}
				}
			}

			_colPosX = _posX + 70;
			_colPosY = _posY + 90;
			_kancenterX = _colPosX + (_colSizeX / 2);
			_kancenterY = _colPosY + (_colSizeY / 2);
			g_p4X = _kancenterX;
			g_p4Y = _kancenterY;
			deathcnt = 0;
			_burstcountLv1 = 0;
			rangeXcount = 0;
			rangeYcount = 0;
			_rangeX = 25;
			_rangeY = 25;
			_chargeLv = 0;
			_wait = 0;
			nowLv1 = false;
			nowleftLv1 = false;
			nowrightLv1 = false;
			nowupLv1 = false;
			nowdownLv1 = false;
			_burstcountLv2 = 0;
			nowLv2 = false;
			nowleftLv2 = false;
			nowrightLv2 = false;
			nowupLv2 = false;
			nowdownLv2 = false;
			_burstcountLv3 = 0;
			nowLv3 = false;
			nowleftLv3 = false;
			nowrightLv3 = false;
			nowupLv3 = false;
			nowdownLv3 = false;
			_beamcenterX = 3000;
			_beamcenterY = 3000;
			attackcnt = 0;
			shootdelay = 0;
			_beamsizeX = 0;
			_beamsizeY = 0;
			Lv3movecnt = 0;
			blowcnt = 0;
			awaycnt = 0;
			chargelimit = 0;
			g_p4Bdeath = false;
			g_p4deathright = false;
			g_p4deathleft = false;
			g_p4deathfront = false;
			g_p4deathback = false;
			PlaySoundMem(respawnS, DX_PLAYTYPE_BACK);
		}
		deathcnt++;
	}
}


void Player::BlowAway() {               //吹っ飛びモーションの吹っ飛び速度の処理
	if (g_p1 == 1) {
		if (g_p1deathright) {
			if (awaycnt<=50) {
				if (blowcnt <= 14) {
					_posX = _posX + 50 - awaycnt;
					DrawGraph(_posX, _posY, kan1Pdeathright[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posX >= STAGE_We) { awaycnt++; }
			}
		}
		if (g_p1deathleft) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posX = _posX - 50 + awaycnt;
					DrawGraph(_posX, _posY, kan1Pdeathleft[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posX <= STAGE_Ws) { awaycnt++; }
			}
		}
		if (g_p1deathback) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posY = _posY - 50 + awaycnt;
					DrawGraph(_posX, _posY, kan1Pdeathback[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posY <= STAGE_Hs) { awaycnt++; }
			}
		}
		if (g_p1deathfront) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posY = _posY + 50 - awaycnt;
					DrawGraph(_posX, _posY, kan1Pdeathfront[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posY >= STAGE_He) { awaycnt++; }
			}
		}
	}
	if (g_p2 == 1) {
		if (g_p2deathright) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posX = _posX + 50 - awaycnt;
					DrawGraph(_posX, _posY, kan2Pdeathright[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posX >= STAGE_We) { awaycnt++; }
			}
		}
		if (g_p2deathleft) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posX = _posX - 50 + awaycnt;
					DrawGraph(_posX, _posY, kan2Pdeathleft[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posX <= STAGE_Ws) { awaycnt++; }
			}
		}
		if (g_p2deathback) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posY = _posY - 50 + awaycnt;
					DrawGraph(_posX, _posY, kan2Pdeathback[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posY <= STAGE_Hs) { awaycnt++; }
			}
		}
		if (g_p2deathfront) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posY = _posY + 50 - awaycnt;
					DrawGraph(_posX, _posY, kan2Pdeathfront[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posY >= STAGE_He) { awaycnt++; }
			}
		}
	}
	if (g_p3 == 1) {
		if (g_p3deathright) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posX = _posX + 50 - awaycnt;
					DrawGraph(_posX, _posY, kan3Pdeathright[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posX >= STAGE_We) { awaycnt++; }
			}
		}
		if (g_p3deathleft) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posX = _posX - 50 + awaycnt;
					DrawGraph(_posX, _posY, kan3Pdeathleft[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posX <= STAGE_Ws) { awaycnt++; }
			}
		}
		if (g_p3deathback) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posY = _posY - 50 + awaycnt;
					DrawGraph(_posX, _posY, kan3Pdeathback[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posY <= STAGE_Hs) { awaycnt++; }
			}
		}
		if (g_p3deathfront) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posY = _posY + 50 - awaycnt;
					DrawGraph(_posX, _posY, kan3Pdeathfront[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posY >= STAGE_He) { awaycnt++; }
			}
		}
	}
	if (g_p4 == 1) {
		if (g_p4deathright) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posX = _posX + 50 - awaycnt;
					DrawGraph(_posX, _posY, kan4Pdeathright[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posX >= STAGE_We) { awaycnt++; }
			}
		}
		if (g_p4deathleft) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posX = _posX - 50 + awaycnt;
					DrawGraph(_posX, _posY, kan4Pdeathleft[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posX <= STAGE_Ws) { awaycnt++; }
			}
		}
		if (g_p4deathback) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posY = _posY - 50 + awaycnt;
					DrawGraph(_posX, _posY, kan4Pdeathback[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posY <= STAGE_Hs) { awaycnt++; }
			}
		}
		if (g_p4deathfront) {
			if (awaycnt <= 50) {
				if (blowcnt <= 14) {
					_posY = _posY + 50 - awaycnt;
					DrawGraph(_posX, _posY, kan4Pdeathfront[blowcnt], TRUE);
					blowcnt++;
				}
				if (_posY >= STAGE_He) { awaycnt++; }
			}
		}
	}
}

void Player::SetPlayerRank() {            //プレイヤーの順位付け
	g_1Prank = 4;
	g_2Prank = 4;
	g_3Prank = 4;
	g_4Prank = 4;
	if (g_score1Pall >= g_score2Pall) {
		g_1Prank--;
	}
	if (g_score1Pall >= g_score3Pall) {
		g_1Prank--;
	}
	if (g_score1Pall >= g_score4Pall) {
		g_1Prank--;
	}

	if (g_score2Pall >= g_score1Pall) {
		g_2Prank--;
	}
	if (g_score2Pall >= g_score3Pall) {
		g_2Prank--;
	}
	if (g_score2Pall >= g_score4Pall) {
		g_2Prank--;
	}

	if (g_score3Pall >= g_score2Pall) {
		g_3Prank--;
	}
	if (g_score3Pall >= g_score1Pall) {
		g_3Prank--;
	}
	if (g_score3Pall >= g_score4Pall) {
		g_3Prank--;
	}

	if (g_score4Pall >= g_score2Pall) {
		g_4Prank--;
	}
	if (g_score4Pall >= g_score3Pall) {
		g_4Prank--;
	}
	if (g_score4Pall >= g_score1Pall) {
		g_4Prank--;
	}
}

void Player::AddBeam() {            //ビームの追加処理
	auto Beam = std::make_unique<PlayerBeam>();
	Beam->BeamSet();
	jadge->beamAll.emplace_back(std::move(Beam));
}

void Player::GageRender() {         //チャージキープのメーターの描画処理
	if (chargelimit >= 1 && chargelimit <= 36) { DrawGraph(_posX, _posY - 100, kanchargelimit[0], TRUE); }
	if (chargelimit >= 37 && chargelimit <= 72) { DrawGraph(_posX, _posY - 100, kanchargelimit[1], TRUE); }
	if (chargelimit >= 73 && chargelimit <= 108) { DrawGraph(_posX, _posY - 100, kanchargelimit[2], TRUE); }
	if (chargelimit >= 109 && chargelimit <= 144) { DrawGraph(_posX, _posY - 100, kanchargelimit[3], TRUE); }
	if (chargelimit >= 145 && chargelimit <= 179) { DrawGraph(_posX, _posY - 100, kanchargelimit[4], TRUE); }
}