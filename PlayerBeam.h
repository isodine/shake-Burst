#pragma once
//�v���C���[�̃r�[���N���X

class PlayerBeam{
public:
	PlayerBeam();
	~PlayerBeam();
	void BeamSet();        //�r�[�����o���O�̏�����
	void Update();         //�X�V
	void Render();         //�`��

public:
	int Beam{ 0 };
	int Beam2{ 0 };
	int spd{ 25 };
	int cnt{ 0 };
	int max{ 3 };
	int livetime{ 0 };
	int beamcenterX{ 0 };
	int beamcenterY{ 0 };
	int grcnt{ 0 };
	int beamsizeX{ 0 };
	int beamsizeY{ 0 };
	int sizeplusX{ 0 };
	int sizeplusY{ 0 };

	bool beamdeath = false;
	bool rightBeam = false;
	bool leftBeam = false;
	bool upBeam = false;
	bool downBeam = false;
	bool beam1P = false;
	bool beam2P = false;
	bool beam3P = false;
	bool beam4P = false;
};