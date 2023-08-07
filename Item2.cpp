#include "Item2.h"
#include "Game.h"
#include "ModeGame.h"
#include "DxLib.h"

Item2::Item2(ModeGame& mg)
	:Item(mg, mg.item1,*this, mg.item3)
{
	item[1] = LoadGraph("picture/Items/candy2.png");
}

Item2::~Item2(){}

void Item2::Init() {
	posX = g_ipX;
	posY = g_ipY;
	colposX = posX;
	colposY = posY;
	itemcenterX = colposX + (colsizeX / 2);
	itemcenterY = colposY + (colsizeY / 2);
}


void Item2::Render() {
	DrawExtendGraph(posX, posY, posX + 100, posY + 150, item[1], TRUE);
	//DrawBoxAA(colposX, colposY, colposX + colsizeX, colposY + colsizeY, GetColor(GetRand(256), GetRand(256), GetRand(256)), FALSE);
}