#pragma once
#include "Item.h"
class ModeGame;

class Item2 :public Item
{
public:
	Item2(ModeGame& mg);
	~Item2();
	void Init()override;
	void Render()override;

private:

};