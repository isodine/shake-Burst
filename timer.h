#pragma once

extern bool timeup;
class Timer
{
public:
	Timer();
	~Timer();
	void Update();            //XV
	void Render();            //•`‰æ
private:
	int number[10];
	int count10 = 6;
	int count1 = 0;
	int secondcnt = 0;
	int     UI1P;
	int     UI2P;
	int     UI3P;
	int     UI4P;
};
