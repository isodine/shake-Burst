#pragma once

extern int g_ipX;
extern int g_ipY;
extern int g_i11X;
extern int g_i11Y;
extern int g_i12X;
extern int g_i12Y;
extern int g_i21X;
extern int g_i21Y;
extern int g_i22X;
extern int g_i22Y;
extern int g_i31X;
extern int g_i31Y;
extern int g_i32X;
extern int g_i32Y;
extern int g_icnt;

//#include "Game.h"
class ModeGame;
class Player;
class Item1;
class Item2;
class Item3;

class Item{
public:
	Item(ModeGame& mg,Item1& i1, Item2& i2, Item3& i3);
	~Item();
	virtual void Init();
	virtual void Update(ModeGame& mg);
	virtual void Render();
	void GetItemPosition();
	void ItemHit(Player& p);

public:
	int item[3];
	int itemplace[3][2] = { { 700,500},
		                    {1300,600},
		                    {1000,400} };
	int item_number;
	int field_item{0};
	int spawn_max = 1;
	int _item1;
	int _item2;
	int _item3;
	int posX;
	int posY;
	int colposX;
	int colposY;
	int colsizeX=100;
	int colsizeY=150;
	int itemcenterX;
	int itemcenterY;

	int _x[3];
	int _y[3];
	int _getpos;
	int itempos1;
	int itempos2;
	int itempos3;
	int itemdaeth=false;
	int spawndelay=0;

	int itemgot{ 0 };

	ModeGame& mdgame;
	Item1& i1;
	Item2& i2;
	Item3& i3;
};