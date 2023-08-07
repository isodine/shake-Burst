/*
** ObjectBase
*/

#include "DxLib.h"
#include "ObjectBase.h"
#include "Game.h"

ObjectBase::ObjectBase(Game& game)
 : _game(game)
{
	Init();
}

ObjectBase::~ObjectBase()
{
}

void ObjectBase::Init()
{
	// èÓïÒÇÃèâä˙âª
	_dead = false;
	_pos.x = 0;
	_pos.y = 0;
	_colPos.x = 0;
	_colPos.y = 0;
	_colSize.x = 0;
	_colSize.y = 0;
	_cnt = 0;
}

void ObjectBase::Update()
{
	_cnt++;
}

void	ObjectBase::UpdateCollision()
{
	_collision.min = _pos + _colPos;
	_collision.max = _pos + _colPos + _colSize;
}


void ObjectBase::Render()
{
}

void ObjectBase::DrawCollision()
{
	_collision.Draw(rand() % 256, rand() % 256, rand() % 256);
}

void ObjectBase::Damage()
{
}
