#include "Item1.h"
#include "Game.h"
#include "ModeGame.h"
#include "DxLib.h"

Item1::Item1(ModeGame& mg)
	:Item(mg,*this, mg.item2, mg.item3)
{
	item[0] = LoadGraph("picture/Items/candy.png");
}

Item1::~Item1(){}

void Item1::Init() {
	posX = g_ipX;
	posY = g_ipY;
	colposX = posX;
	colposY = posY;
	itemcenterX = colposX + (colsizeX / 2);
	itemcenterY = colposY + (colsizeY / 2);
}


void Item1::Render() {
	DrawExtendGraph(posX, posY, posX + 100, posY + 150, item[0], TRUE);
	//DrawBoxAA(colposX, colposY, colposX + colsizeX, colposY + colsizeY, GetColor(GetRand(256), GetRand(256), GetRand(256)), FALSE);
}