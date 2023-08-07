#include "PlayerBeam.h"
#include "ModeGame.h"
#include "Game.h"
#include "DxLib.h"

PlayerBeam::PlayerBeam()
{
}

PlayerBeam::~PlayerBeam()
{
}

void PlayerBeam::BeamSet() {              //ビームを出す前の初期化
	if (g_p1 == 1) {
		if (g_p1rightshoot) {
			beamcenterX = g_p1X + 115;
			beamcenterY = g_p1Y - 30;
			beamsizeX = 50;
			beamsizeY = 100;
			sizeplusX = (70 + 50) / 2;
			sizeplusY = (140 + 100) / 2;
			rightBeam = true;
		}
		if (g_p1leftshoot) {
			beamcenterX = g_p1X - 80;
			beamcenterY = g_p1Y - 30;
			beamsizeX = 50;
			beamsizeY = 100;
			sizeplusX = (70 + 50) / 2;
			sizeplusY = (140 + 100) / 2;
			leftBeam = true;
		}
		if (g_p1upshoot) {
			beamcenterX = g_p1X;
			beamcenterY = g_p1Y - 150;
			beamsizeX = 100;
			beamsizeY = 50;
			sizeplusX = (140 + 100) / 2;
			sizeplusY = (70 + 50) / 2;
			upBeam = true;
		}
		if (g_p1downshoot) {
			beamcenterX = g_p1X;
			beamcenterY = g_p1Y + 70;
			beamsizeX = 100;
			beamsizeY = 50;
			sizeplusX = (140 + 100) / 2;
			sizeplusY = (70 + 50) / 2;
			downBeam = true;
		}
		Beam = g_p1beamGR;
		beam1P = true;
	}
	
	
	if (g_p2 == 1) {
		if (g_p2rightshoot) {
			beamcenterX = g_p2X + 115;
			beamcenterY = g_p2Y - 30;
			beamsizeX = 50;
			beamsizeY = 100;
			sizeplusX = (70 + 50) / 2;
			sizeplusY = (140 + 100) / 2;
			rightBeam = true;
		}
		if (g_p2leftshoot) {
			beamcenterX = g_p2X - 80;
			beamcenterY = g_p2Y - 30;
			beamsizeX = 50;
			beamsizeY = 100;
			sizeplusX = (70 + 50) / 2;
			sizeplusY = (140 + 100) / 2;
			leftBeam = true;
		}
		if (g_p2upshoot) {
			beamcenterX = g_p2X;
			beamcenterY = g_p2Y - 150;
			beamsizeX = 100;
			beamsizeY = 50;
			sizeplusX = (140 + 100) / 2;
			sizeplusY = (70 + 50) / 2;
			upBeam = true;
		}
		if (g_p2downshoot) {
			beamcenterX = g_p2X;
			beamcenterY = g_p2Y + 70;
			beamsizeX = 100;
			beamsizeY = 50;
			sizeplusX = (140 + 100) / 2;
			sizeplusY = (70 + 50) / 2;
			downBeam = true;
		}
		Beam = g_p2beamGR;
		beam2P = true;
	}


	if (g_p3 == 1) {
		if (g_p3rightshoot) {
			beamcenterX = g_p3X + 115;
			beamcenterY = g_p3Y - 30;
			beamsizeX = 50;
			beamsizeY = 100;
			sizeplusX = (70 + 50) / 2;
			sizeplusY = (140 + 100) / 2;
			rightBeam = true;
		}
		if (g_p3leftshoot) {
			beamcenterX = g_p3X - 80;
			beamcenterY = g_p3Y - 30;
			beamsizeX = 50;
			beamsizeY = 100;
			sizeplusX = (70 + 50) / 2;
			sizeplusY = (140 + 100) / 2;
			leftBeam = true;
		}
		if (g_p3upshoot) {
			beamcenterX = g_p3X;
			beamcenterY = g_p3Y - 150;
			beamsizeX = 100;
			beamsizeY = 50;
			sizeplusX = (140 + 100) / 2;
			sizeplusY = (70 + 50) / 2;
			upBeam = true;
		}
		if (g_p3downshoot) {
			beamcenterX = g_p3X;
			beamcenterY = g_p3Y + 70;
			beamsizeX = 100;
			beamsizeY = 50;
			sizeplusX = (140 + 100) / 2;
			sizeplusY = (70 + 50) / 2;
			downBeam = true;
		}
		Beam = g_p3beamGR;
		beam3P = true;
	}


	if (g_p4 == 1) {
		if (g_p4rightshoot) {
			beamcenterX = g_p4X + 115;
			beamcenterY = g_p4Y - 30;
			beamsizeX = 50;
			beamsizeY = 100;
			sizeplusX = (70 + 50) / 2;
			sizeplusY = (140 + 100) / 2;
			rightBeam = true;
		}
		if (g_p4leftshoot) {
			beamcenterX = g_p4X - 80;
			beamcenterY = g_p4Y - 30;
			beamsizeX = 50;
			beamsizeY = 100;
			sizeplusX = (70 + 50) / 2;
			sizeplusY = (140 + 100) / 2;
			leftBeam = true;
		}
		if (g_p4upshoot) {
			beamcenterX = g_p4X;
			beamcenterY = g_p4Y - 150;
			beamsizeX = 100;
			beamsizeY = 50;
			sizeplusX = (140 + 100) / 2;
			sizeplusY = (70 + 50) / 2;
			upBeam = true;
		}
		if (g_p4downshoot) {
			beamcenterX = g_p4X;
			beamcenterY = g_p4Y + 70;
			beamsizeX = 100;
			beamsizeY = 50;
			sizeplusX = (140 + 100) / 2;
			sizeplusY = (70 + 50) / 2;
			downBeam = true;
		}
		Beam = g_p4beamGR;
		beam4P = true;
	}
}

void PlayerBeam::Update() {                 //更新
	if (cnt > max) {
		if (rightBeam) { beamcenterX += spd; }
		if (leftBeam) { beamcenterX -= spd; }
		if (upBeam) { beamcenterY -= spd; }
		if (downBeam) { beamcenterY += spd; }

		livetime++;
		if (livetime == 11) { beamdeath = true; }
		if (beamcenterX < STAGE_Ws+50) { beamdeath = true; }
		if (beamcenterX > STAGE_We) { beamdeath = true; }
		if (beamcenterY < STAGE_Hs+50) { beamdeath = true; }
		if (beamcenterY > STAGE_He) { beamdeath = true; }

		cnt = 0;
	}
	++cnt;
}

void PlayerBeam::Render() {                 //描画
	if (rightBeam && livetime >= 2) { DrawGraph(beamcenterX - 25, beamcenterY - 50, Beam, TRUE); }
	if (rightBeam && livetime == 1) { DrawModiGraph(beamcenterX - 25, beamcenterY - 25, beamcenterX + 25, beamcenterY - 50, beamcenterX + 25, beamcenterY + 50, beamcenterX - 25, beamcenterY + 25, Beam, TRUE); }
	if (leftBeam && livetime >= 2) { DrawTurnGraph(beamcenterX - 25, beamcenterY - 50, Beam, TRUE); }
	if (leftBeam && livetime == 1) { DrawModiGraph(beamcenterX + 25, beamcenterY - 25, beamcenterX - 25, beamcenterY - 50, beamcenterX - 25, beamcenterY + 50, beamcenterX + 25, beamcenterY + 25, Beam, TRUE); }
	if (upBeam && livetime >= 2) { DrawRotaGraph(beamcenterX, beamcenterY, 1, PI * 1.5f, Beam, TRUE); }
	if (upBeam && livetime == 1) { DrawModiGraph(beamcenterX - 25, beamcenterY + 25, beamcenterX - 50, beamcenterY - 25, beamcenterX + 50, beamcenterY - 25, beamcenterX + 25, beamcenterY + 25, Beam, TRUE); }
	if (downBeam && livetime >= 2) { DrawRotaGraph(beamcenterX, beamcenterY, 1, PI / 2, Beam, TRUE); }
	if (downBeam && livetime == 1) { DrawModiGraph(beamcenterX + 25, beamcenterY - 25, beamcenterX + 50, beamcenterY + 25, beamcenterX - 50, beamcenterY + 25, beamcenterX - 25, beamcenterY - 25, Beam, TRUE); }

}