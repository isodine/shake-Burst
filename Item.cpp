#include "DxLib.h"
#include "Game.h"
#include "BackGround.h"
#include "Player.h"
#include "Item.h"
#include "Item1.h"
#include "Item2.h"
#include "Item3.h"
#include "ModeGame.h"
#include <memory>
#include <vector>

int g_ipX;
int g_ipY;
int g_i11X;
int g_i11Y;
int g_i12X;
int g_i12Y;
int g_i21X;
int g_i21Y;
int g_i22X;
int g_i22Y;
int g_i31X;
int g_i31Y;
int g_i32X;
int g_i32Y;
int g_icnt=0;

Item::Item(ModeGame& mg,Item1& i1, Item2& i2, Item3& i3)
    :i1(i1)
    ,i2(i2)
    ,i3(i3)
    ,mdgame(mg)
{
    itemgot = LoadSoundMem("sound/itemgot.mp3");
    spawndelay = 100;
}

Item::~Item(){}

void Item::Init(){}

void Item::Update(ModeGame& mg) {
    if (g_icnt < spawn_max) {
        if (spawndelay >= 100) {
            GetItemPosition();
            mg.ItemSelect();
            g_icnt++;
            spawndelay = 0;
        }
        spawndelay++;
    }
}

void Item::Render(){
}




void Item::GetItemPosition() {
	_getpos = GetRand(2);
	if (g_icnt == 0) {
		g_ipX = _getpos;
        g_ipX = GetRand(STAGE_We-20);
        while (g_ipX < STAGE_Ws+100) {
            g_ipX = GetRand(STAGE_We-20);
        }
        g_ipY = GetRand(STAGE_He-100);
        while (g_ipY < STAGE_Hs+100) {
            g_ipY = GetRand(STAGE_He-100);
        }
	}
	//if (g_icnt == 2 && g_ip1 == g_ip2 || g_ip2 == _getpos) {
	//	while (g_ip1 == g_ip2 || g_ip2 == _getpos) {
	//		_getpos = GetRand(2);
	//	}
	//	g_ip3 = _getpos;
	//}
	//if (g_icnt == 2) {
	//	g_ip3 = _getpos;
	//}
}

void Item::ItemHit(Player& p) {
    if (g_p1) {
        p._distanceX = abs(g_p1X - i1.itemcenterX);
        p._distanceY = abs(g_p1Y - i1.itemcenterY);
        p._sizeplusX = (100 + p._colSizeX) / 2;
        p._sizeplusY = (150 + p._colSizeY) / 2;
        if (p._distanceX < p._sizeplusX && p._distanceY < p._sizeplusY) {
            PlaySoundMem(itemgot, DX_PLAYTYPE_BACK);
            if ((p.nowdownLv1 || p.nowupLv1 || p.nowleftLv1 || p.nowrightLv1 || p.nowdownLv2 || p.nowupLv2 || p.nowleftLv2 || p.nowrightLv2 || p.nowLv1 || p.nowLv2 || p.nowLv3) == false) {
                g_score1P1 += 1, g_score1Pall += 1;
            }
            itemdaeth = true;
        }
        p._distanceX = abs(g_p1X - i2.itemcenterX);
        p._distanceY = abs(g_p1Y - i2.itemcenterY);
        p._sizeplusX = (100 + p._colSizeX) / 2;
        p._sizeplusY = (150 + p._colSizeY) / 2;
        if (p._distanceX < p._sizeplusX && p._distanceY < p._sizeplusY) {
            PlaySoundMem(itemgot, DX_PLAYTYPE_BACK);
            if ((p.nowdownLv1 || p.nowupLv1 || p.nowleftLv1 || p.nowrightLv1 || p.nowdownLv2 || p.nowupLv2 || p.nowleftLv2 || p.nowrightLv2 || p.nowLv1 || p.nowLv2 || p.nowLv3) == false) {
                g_score1P1 += 2, g_score1Pall += 2;
            }
            itemdaeth = true;
        }
        p._distanceX = abs(g_p1X - i3.itemcenterX);
        p._distanceY = abs(g_p1Y - i3.itemcenterY);
        p._sizeplusX = (100 + p._colSizeX) / 2;
        p._sizeplusY = (150 + p._colSizeY) / 2;
        if (p._distanceX < p._sizeplusX && p._distanceY < p._sizeplusY) {
            PlaySoundMem(itemgot, DX_PLAYTYPE_BACK);
            if ((p.nowdownLv1 || p.nowupLv1 || p.nowleftLv1 || p.nowrightLv1 || p.nowdownLv2 || p.nowupLv2 || p.nowleftLv2 || p.nowrightLv2 || p.nowLv1 || p.nowLv2 || p.nowLv3) == false) {
                g_score1P1 += 3, g_score1Pall += 3;
            }
            itemdaeth = true;
        }
    }
    if (g_p2) {
        p._distanceX = abs(g_p2X - i1.itemcenterX);
        p._distanceY = abs(g_p2Y - i1.itemcenterY);
        p._sizeplusX = (100 + p._colSizeX) / 2;
        p._sizeplusY = (150 + p._colSizeY) / 2;
        if (p._distanceX < p._sizeplusX && p._distanceY < p._sizeplusY) {
            PlaySoundMem(itemgot, DX_PLAYTYPE_BACK);
            if ((p.nowdownLv1 || p.nowupLv1 || p.nowleftLv1 || p.nowrightLv1 || p.nowdownLv2 || p.nowupLv2 || p.nowleftLv2 || p.nowrightLv2 || p.nowLv1 || p.nowLv2 || p.nowLv3) == false) {
                g_score2P1 += 1, g_score2Pall += 1;
            }
            itemdaeth = true;
        }
        p._distanceX = abs(g_p2X - i2.itemcenterX);
        p._distanceY = abs(g_p2Y - i2.itemcenterY);
        p._sizeplusX = (100 + p._colSizeX) / 2;
        p._sizeplusY = (150 + p._colSizeY) / 2;
        if (p._distanceX < p._sizeplusX && p._distanceY < p._sizeplusY) {
            PlaySoundMem(itemgot, DX_PLAYTYPE_BACK);
            if ((p.nowdownLv1 || p.nowupLv1 || p.nowleftLv1 || p.nowrightLv1 || p.nowdownLv2 || p.nowupLv2 || p.nowleftLv2 || p.nowrightLv2 || p.nowLv1 || p.nowLv2 || p.nowLv3) == false) {
                g_score2P1 += 2, g_score2Pall += 2;
            }
            itemdaeth = true;
        }
        p._distanceX = abs(g_p2X - i3.itemcenterX);
        p._distanceY = abs(g_p2Y - i3.itemcenterY);
        p._sizeplusX = (100 + p._colSizeX) / 2;
        p._sizeplusY = (150 + p._colSizeY) / 2;
        if (p._distanceX < p._sizeplusX && p._distanceY < p._sizeplusY) {
            PlaySoundMem(itemgot, DX_PLAYTYPE_BACK);
            if ((p.nowdownLv1 || p.nowupLv1 || p.nowleftLv1 || p.nowrightLv1 || p.nowdownLv2 || p.nowupLv2 || p.nowleftLv2 || p.nowrightLv2 || p.nowLv1 || p.nowLv2 || p.nowLv3) == false) {
                g_score2P1 += 3, g_score2Pall += 3;
            }
            itemdaeth = true;
        }
    }
    if (g_p3) {
        p._distanceX = abs(g_p3X - i1.itemcenterX);
        p._distanceY = abs(g_p3Y - i1.itemcenterY);
        p._sizeplusX = (100 + p._colSizeX) / 2;
        p._sizeplusY = (150 + p._colSizeY) / 2;
        if (p._distanceX < p._sizeplusX && p._distanceY < p._sizeplusY) {
            PlaySoundMem(itemgot, DX_PLAYTYPE_BACK);
            if ((p.nowdownLv1 || p.nowupLv1 || p.nowleftLv1 || p.nowrightLv1 || p.nowdownLv2 || p.nowupLv2 || p.nowleftLv2 || p.nowrightLv2 || p.nowLv1 || p.nowLv2 || p.nowLv3) == false) {
                g_score3P1 += 1, g_score3Pall += 1;
            }
            itemdaeth = true;
        }
        p._distanceX = abs(g_p3X - i2.itemcenterX);
        p._distanceY = abs(g_p3Y - i2.itemcenterY);
        p._sizeplusX = (100 + p._colSizeX) / 2;
        p._sizeplusY = (150 + p._colSizeY) / 2;
        if (p._distanceX < p._sizeplusX && p._distanceY < p._sizeplusY) {
            PlaySoundMem(itemgot, DX_PLAYTYPE_BACK);
            if ((p.nowdownLv1 || p.nowupLv1 || p.nowleftLv1 || p.nowrightLv1 || p.nowdownLv2 || p.nowupLv2 || p.nowleftLv2 || p.nowrightLv2 || p.nowLv1 || p.nowLv2 || p.nowLv3) == false) {
                g_score3P1 += 2, g_score3Pall += 2;
            }
            itemdaeth = true;
        }
        p._distanceX = abs(g_p3X - i3.itemcenterX);
        p._distanceY = abs(g_p3Y - i3.itemcenterY);
        p._sizeplusX = (100 + p._colSizeX) / 2;
        p._sizeplusY = (150 + p._colSizeY) / 2;
        if (p._distanceX < p._sizeplusX && p._distanceY < p._sizeplusY) {
            PlaySoundMem(itemgot, DX_PLAYTYPE_BACK);
            if ((p.nowdownLv1 || p.nowupLv1 || p.nowleftLv1 || p.nowrightLv1 || p.nowdownLv2 || p.nowupLv2 || p.nowleftLv2 || p.nowrightLv2 || p.nowLv1 || p.nowLv2 || p.nowLv3) == false) {
                g_score3P1 += 3, g_score3Pall += 3;
            }
            itemdaeth = true;
        }
    }
    if (g_p4) {
        p._distanceX = abs(g_p4X - i1.itemcenterX);
        p._distanceY = abs(g_p4Y - i1.itemcenterY);
        p._sizeplusX = (100 + p._colSizeX) / 2;
        p._sizeplusY = (150 + p._colSizeY) / 2;
        if (p._distanceX < p._sizeplusX && p._distanceY < p._sizeplusY) {
            PlaySoundMem(itemgot, DX_PLAYTYPE_BACK);
            if ((p.nowdownLv1 || p.nowupLv1 || p.nowleftLv1 || p.nowrightLv1 || p.nowdownLv2 || p.nowupLv2 || p.nowleftLv2 || p.nowrightLv2 || p.nowLv1 || p.nowLv2 || p.nowLv3) == false) {
                g_score4P1 += 1, g_score4Pall += 1;
            }
            itemdaeth = true;
        }
        p._distanceX = abs(g_p4X - i2.itemcenterX);
        p._distanceY = abs(g_p4Y - i2.itemcenterY);
        p._sizeplusX = (100 + p._colSizeX) / 2;
        p._sizeplusY = (150 + p._colSizeY) / 2;
        if (p._distanceX < p._sizeplusX && p._distanceY < p._sizeplusY) {
            PlaySoundMem(itemgot, DX_PLAYTYPE_BACK);
            if ((p.nowdownLv1 || p.nowupLv1 || p.nowleftLv1 || p.nowrightLv1 || p.nowdownLv2 || p.nowupLv2 || p.nowleftLv2 || p.nowrightLv2 || p.nowLv1 || p.nowLv2 || p.nowLv3) == false) {
                g_score4P1 += 2, g_score4Pall += 2;
            }
            itemdaeth = true;
        }
        p._distanceX = abs(g_p4X - i3.itemcenterX);
        p._distanceY = abs(g_p4Y - i3.itemcenterY);
        p._sizeplusX = (100 + p._colSizeX) / 2;
        p._sizeplusY = (150 + p._colSizeY) / 2;
        if (p._distanceX < p._sizeplusX && p._distanceY < p._sizeplusY) {
            PlaySoundMem(itemgot, DX_PLAYTYPE_BACK);
            if ((p.nowdownLv1 || p.nowupLv1 || p.nowleftLv1 || p.nowrightLv1 || p.nowdownLv2 || p.nowupLv2 || p.nowleftLv2 || p.nowrightLv2 || p.nowLv1 || p.nowLv2 || p.nowLv3) == false) {
                g_score4P1 += 3, g_score4Pall += 3;
            }
            itemdaeth = true;
        }
    }
}