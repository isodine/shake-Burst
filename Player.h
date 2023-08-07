#pragma once
#include <memory>
#include <vector>
#include "PlayerBeam.h"
#include "SubJadge.h"

extern int g_p1;
extern int g_p1X;
extern int g_p1Y;
extern int g_p1BX;
extern int g_p1BY;
extern int g_p1BSX;
extern int g_p1BSY;
extern int g_p2;
extern int g_p2X;
extern int g_p2Y;
extern int g_p2BX;
extern int g_p2BY;
extern int g_p2BSX;
extern int g_p2BSY;
extern int g_p3;
extern int g_p3X;
extern int g_p3Y;
extern int g_p3BX;
extern int g_p3BY;
extern int g_p3BSX;
extern int g_p3BSY;
extern int g_p4;
extern int g_p4X;
extern int g_p4Y;
extern int g_p4BX;
extern int g_p4BY;
extern int g_p4BSX;
extern int g_p4BSY;
extern bool g_rightshoot;
extern bool g_leftshoot;
extern bool g_upshoot;
extern bool g_downshoot;
extern bool g_p1rightshoot;
extern bool g_p1leftshoot;
extern bool g_p1upshoot;
extern bool g_p1downshoot;
extern bool g_p2rightshoot;
extern bool g_p2leftshoot;
extern bool g_p2upshoot;
extern bool g_p2downshoot;
extern bool g_p3rightshoot;
extern bool g_p3leftshoot;
extern bool g_p3upshoot;
extern bool g_p3downshoot;
extern bool g_p4rightshoot;
extern bool g_p4leftshoot;
extern bool g_p4upshoot;
extern bool g_p4downshoot;
extern bool g_p1death;
extern bool g_p1deathright;
extern bool g_p1deathleft;
extern bool g_p1deathfront;
extern bool g_p1deathback;
extern bool g_p2death;
extern bool g_p2deathright;
extern bool g_p2deathleft;
extern bool g_p2deathfront;
extern bool g_p2deathback;
extern bool g_p3death;
extern bool g_p3deathright;
extern bool g_p3deathleft;
extern bool g_p3deathfront;
extern bool g_p3deathback;
extern bool g_p4death;
extern bool g_p4deathright;
extern bool g_p4deathleft;
extern bool g_p4deathfront;
extern bool g_p4deathback;
extern bool g_p1Bdeath;
extern bool g_p2Bdeath;
extern bool g_p3Bdeath;
extern bool g_p4Bdeath;
extern bool g_ready1P;
extern bool g_ready2P;
extern bool g_ready3P;
extern bool g_ready4P;
extern int g_score1P1;
extern int g_score2P1;
extern int g_score3P1;
extern int g_score4P1;
extern int g_score1P10;
extern int g_score2P10;
extern int g_score3P10;
extern int g_score4P10;
extern int g_score1P1keep;
extern int g_score2P1keep;
extern int g_score3P1keep;
extern int g_score4P1keep;
extern int g_score1Pall;
extern int g_score2Pall;
extern int g_score3Pall;
extern int g_score4Pall;
extern int g_1Prank;
extern int g_2Prank;
extern int g_3Prank;
extern int g_4Prank;
extern bool g_p1invincible;
extern bool g_p2invincible;
extern bool g_p3invincible;
extern bool g_p4invincible;
extern int g_p1beamGR;
extern int g_p2beamGR;
extern int g_p3beamGR;
extern int g_p4beamGR;
extern int g_p1beam2GR;
extern int g_p2beam2GR;
extern int g_p3beam2GR;
extern int g_p4beam2GR;

extern int kan1Pmovefront[25];
extern int kan1Pmoveright[25];
extern int kan1Pmoveleft[25];
extern int kan1Pmoveback[25];
extern int kan1Pchargeright[10];
extern int kan1Pchargeleft[10];
extern int kan1Pchargefront[10];
extern int kan1Pchargeback[10];
extern int kan1Pattackright[16];
extern int kan1Pattackleft[16];
extern int kan1Pattackfront[16];
extern int kan1Pattackback[16];
extern int kan1PLv2attackback[17];
extern int kan1PLv2attackright[17];
extern int kan1PLv2attackleft[17];
extern int kan1PLv2attackfront[17];
extern int kan1Pmoveattackback[28];
extern int kan1Pmoveattackright[28];
extern int kan1Pmoveattackleft[28];
extern int kan1Pmoveattackfront[28];
extern int kan2Pmovefront[25];
extern int kan2Pmoveright[25];
extern int kan2Pmoveleft[25];
extern int kan2Pmoveback[25];
extern int kan2Pchargeright[10];
extern int kan2Pchargeleft[10];
extern int kan2Pchargefront[10];
extern int kan2Pchargeback[10];
extern int kan2Pattackright[16];
extern int kan2Pattackleft[16];
extern int kan2Pattackfront[16];
extern int kan2Pattackback[16];
extern int kan2PLv2attackback[17];
extern int kan2PLv2attackright[17];
extern int kan2PLv2attackleft[17];
extern int kan2PLv2attackfront[17];
extern int kan2Pmoveattackback[28];
extern int kan2Pmoveattackright[28];
extern int kan2Pmoveattackleft[28];
extern int kan2Pmoveattackfront[28];
extern int kan3Pmovefront[25];
extern int kan3Pmoveright[25];
extern int kan3Pmoveleft[25];
extern int kan3Pmoveback[25];
extern int kan3Pchargeright[10];
extern int kan3Pchargeleft[10];
extern int kan3Pchargefront[10];
extern int kan3Pchargeback[10];
extern int kan3Pattackright[16];
extern int kan3Pattackleft[16];
extern int kan3Pattackfront[16];
extern int kan3Pattackback[16];
extern int kan3PLv2attackback[17];
extern int kan3PLv2attackright[17];
extern int kan3PLv2attackleft[17];
extern int kan3PLv2attackfront[17];
extern int kan3Pmoveattackback[28];
extern int kan3Pmoveattackright[28];
extern int kan3Pmoveattackleft[28];
extern int kan3Pmoveattackfront[28];
extern int kan4Pmovefront[25];
extern int kan4Pmoveright[25];
extern int kan4Pmoveleft[25];
extern int kan4Pmoveback[25];
extern int kan4Pchargeright[10];
extern int kan4Pchargeleft[10];
extern int kan4Pchargefront[10];
extern int kan4Pchargeback[10];
extern int kan4Pattackright[16];
extern int kan4Pattackleft[16];
extern int kan4Pattackfront[16];
extern int kan4Pattackback[16];
extern int kan4PLv2attackback[17];
extern int kan4PLv2attackright[17];
extern int kan4PLv2attackleft[17];
extern int kan4PLv2attackfront[17];
extern int kan4Pmoveattackback[28];
extern int kan4Pmoveattackright[28];
extern int kan4Pmoveattackleft[28];
extern int kan4Pmoveattackfront[28];
extern int kan1PchargerightLv2[10];
extern int kan1PchargeleftLv2[10];
extern int kan1PchargefrontLv2[10];
extern int kan1PchargebackLv2[10];
extern int kan2PchargerightLv2[10];
extern int kan2PchargeleftLv2[10];
extern int kan2PchargefrontLv2[10];
extern int kan2PchargebackLv2[10];
extern int kan3PchargerightLv2[10];
extern int kan3PchargeleftLv2[10];
extern int kan3PchargefrontLv2[10];
extern int kan3PchargebackLv2[10];
extern int kan4PchargerightLv2[10];
extern int kan4PchargeleftLv2[10];
extern int kan4PchargefrontLv2[10];
extern int kan4PchargebackLv2[10];
extern int kan1Pdeathfront[15];
extern int kan1Pdeathright[15];
extern int kan1Pdeathleft[15];
extern int kan1Pdeathback[15];
extern int kan2Pdeathfront[15];
extern int kan2Pdeathright[15];
extern int kan2Pdeathleft[15];
extern int kan2Pdeathback[15];
extern int kan3Pdeathfront[15];
extern int kan3Pdeathright[15];
extern int kan3Pdeathleft[15];
extern int kan3Pdeathback[15];
extern int kan4Pdeathfront[15];
extern int kan4Pdeathright[15];
extern int kan4Pdeathleft[15];
extern int kan4Pdeathback[15];
extern int kanchargelimit[6];
extern int kanrespawn[40];
extern int kandeath[12];


class Game;
class ModeGame;

// プレイヤークラス
class Player{
public:
	Player(ModeGame& mg, int x,int y);     // コンストラクタ
	~Player();                             // デストラクタ

	void Init(int x, int y);               //初期化
	void Update(ModeGame& mg,int z);       // 更新
	void Render();                         // 描画
	void SetChargeLv();                    //レベル決めの関数
	void SetPlayerRank();                  //プレイヤーの順位付け
	void ShootingRight();                  //右撃ち描画
	void ShootingLeft();                   //左撃ち描画
	void ShootingUp();                     //上撃ち描画
	void ShootingDown();                   //下撃ち描画
	void Respawn();                        //リスポーンの処理
	void BlowAway();                       //吹っ飛びモーションの吹っ飛び速度の処理
	void AddBeam();                        //ビームの追加処理
	void GageRender();                     //チャージキープのメーターの描画処理
public:
	int _1Pbeam;
	int _2Pbeam;
	int _3Pbeam;
	int _4Pbeam;
	int beam;
	int Abutton;
	int OK;
	int Push;
	int Ready;

	int _posX;
	int _posY;
	int _sizeX{ 105 };
	int _sizeY{ 210 };
	int _beamsizeX;
	int _beamsizeY;
	int _colPosX;
	int _colPosY;
	int _colSizeX{ 70 };
	int _colSizeY{ 70 };
	int _kancenterX;
	int _kancenterY;
	int _beamcenterX;
	int _beamcenterY;
	int _rangeX;
	int _rangeY;
	int _distanceX;
	int _distanceY;
	int _sizeplusX;
	int _sizeplusY;
	int _nowrangeX;
	int _nowrangeY;
	int _beamsizeplusX;
	int _beamsizeplusY;

	int burstsound{ 0 };

	int _shoot;
	int _charge;
	bool upflag;
	bool downflag;
	int chargeArray[4][3] = { { 3,10,15 },
							  { 3,10,15 },
							  { 3,10,15 },
							  { 3,10,15 } };
	int _chargeLv{ 0 };
	int _power;
	int _stop{ 0 };
	int _wait{ 0 };
	bool _erase = false;
	bool nowLv1 = false;
	bool nowleftLv1 = false;
	bool nowrightLv1 = false;
	bool nowupLv1 = false;
	bool nowdownLv1 = false;
	bool nowLv2 = false;
	bool nowleftLv2 = false;
	bool nowrightLv2 = false;
	bool nowupLv2 = false;
	bool nowdownLv2 = false;
	bool nowLv3 = false;
	bool nowleftLv3 = false;
	bool nowrightLv3 = false;
	bool nowupLv3 = false;
	bool nowdownLv3 = false;
	int _burstcountLv1{ 0 };
	int _burstcountLv2{ 0 };
	int _burstcountLv3{ 0 };
	int Lv1count{ 15 };
	int Lv2count{ 90 };
	int Lv3count{ 200 };
	int rangeXcount{ 0 };
	int rangeYcount{ 0 };
	int deathcnt{ 0 };
	int respawnXY[4][2] = { {  260 ,100 },
							{ 1500 ,100 },
							{  250 ,700 },
							{ 1500 ,700 } };
	bool rightmove = false;
	bool leftmove = false;
	bool upmove = false;
	bool downmove = false;
	bool rightlast = false;
	bool leftlast = false;
	bool uplast = false;
	bool downlast = false;
	int respawnS{ 0 };
	int chargeS{ 0 };
	int LvupS{ 0 };
	int max{ 1 };
	int _cnt;
	int movecnt;
	int Lv3movecnt{ 0 };
	int chargecnt{ 0 };
	int attackcnt{ 0 };
	int shootdelay{ 0 };
	int blowcnt{ 0 };
	int awaycnt{ 0 };
	int invinciblecnt{ 0 };
	int effectcnt{ 0 };
	int chargelimit{ 0 };
	int framecnt{ 0 };
	int motioncnt{ 0 };
	//int count{0};
	PlayerBeam pb;
	SubJadge* jadge;
};

