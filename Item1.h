#pragma once
#include "Item.h"
class ModeGame;

class Item1:public Item
{
public:
	Item1(ModeGame& mg);
	~Item1();
	void Init()override;
	void Render()override;

private:

};

