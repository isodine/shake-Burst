#pragma once
#include "Item.h"
class ModeGame;

class Item3 :public Item
{
public:
	Item3(ModeGame& mg);
	~Item3();
	void Init()override;
	void Render()override;

private:

};