#include "Item3.h"
#include "Game.h"
#include "ModeGame.h"
#include "DxLib.h"

Item3::Item3(ModeGame& mg)
	:Item(mg, mg.item1, mg.item2, *this)
{
	item[2] = LoadGraph("picture/Items/candy3.png");
}

Item3::~Item3(){}

void Item3::Init() {
	posX = g_ipX;
	posY = g_ipY;
	colposX = posX;
	colposY = posY;
	itemcenterX = colposX + (colsizeX / 2);
	itemcenterY = colposY + (colsizeY / 2);
}


void Item3::Render() {
	DrawExtendGraph(posX, posY, posX + 100, posY + 150, item[2], TRUE);
	//DrawBoxAA(colposX, colposY, colposX + colsizeX, colposY + colsizeY, GetColor(GetRand(256), GetRand(256), GetRand(256)), FALSE);
}