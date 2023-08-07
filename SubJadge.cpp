#include "SubJadge.h"
#include "Game.h"
#include <stdlib.h>
#include <vector>
#include <memory>
#include "DxLib.h"
#include "Player.h"

SubJadge::SubJadge() {
    crashS = LoadSoundMem("SE/crash.mp3");
}
SubJadge::~SubJadge(){}

void SubJadge::Update(Player& p, PlayerBeam& pb)
{
    for (int i = 0; i < beamAll.size(); i++) {
        if (g_p1death == false) {
            if (g_p1invincible == false) {
                if (!(beamAll[i]->beam1P)) {
                    _distanceX = abs(g_p1X - beamAll[i]->beamcenterX);
                    _distanceY = abs(g_p1Y - beamAll[i]->beamcenterY);
                    if (_distanceX < beamAll[i]->sizeplusX && _distanceY < beamAll[i]->sizeplusY) {
                        g_p1death = true;
                        g_score1P1--, g_score1Pall--;
                        if (beamAll[i]->rightBeam) {
                            g_p1deathright = true;
                        }
                        if (beamAll[i]->leftBeam) {
                            g_p1deathleft = true;
                        }
                        if (beamAll[i]->upBeam) {
                            g_p1deathback = true;
                        }
                        if (beamAll[i]->downBeam) {
                            g_p1deathfront = true;
                        }
                        if (beamAll[i]->beam2P) { g_score2P1 += 2, g_score2Pall += 2; }
                        if (beamAll[i]->beam3P) { g_score3P1 += 2, g_score3Pall += 2; }
                        if (beamAll[i]->beam4P) { g_score4P1 += 2, g_score4Pall += 2; }
                        PlaySoundMem(crashS, DX_PLAYTYPE_BACK);
                    }
                }
            }
        }

        if (g_p2death == false) {
            if (g_p2invincible == false) {
                if (!(beamAll[i]->beam2P)) {
                    _distanceX = abs(g_p2X - beamAll[i]->beamcenterX);
                    _distanceY = abs(g_p2Y - beamAll[i]->beamcenterY);
                    if (_distanceX < beamAll[i]->sizeplusX && _distanceY < beamAll[i]->sizeplusY) {
                        g_p2death = true;
                        g_score2P1--, g_score2Pall--;
                        if (beamAll[i]->rightBeam) {
                            g_p2deathright = true;
                        }
                        if (beamAll[i]->leftBeam) {
                            g_p2deathleft = true;
                        }
                        if (beamAll[i]->upBeam) {
                            g_p2deathback = true;
                        }
                        if (beamAll[i]->downBeam) {
                            g_p2deathfront = true;
                        }
                        if (beamAll[i]->beam1P) { g_score1P1 += 2, g_score1Pall += 2; }
                        if (beamAll[i]->beam3P) { g_score3P1 += 2, g_score3Pall += 2; }
                        if (beamAll[i]->beam4P) { g_score4P1 += 2, g_score4Pall += 2; }
                        PlaySoundMem(crashS, DX_PLAYTYPE_BACK);
                    }
                }
            }
        }

        if (g_p3death == false) {
            if (g_p3invincible == false) {
                if (!(beamAll[i]->beam3P)) {
                    _distanceX = abs(g_p3X - beamAll[i]->beamcenterX);
                    _distanceY = abs(g_p3Y - beamAll[i]->beamcenterY);
                    if (_distanceX < beamAll[i]->sizeplusX && _distanceY < beamAll[i]->sizeplusY) {
                        g_p3death = true;
                        g_score3P1--, g_score3Pall--;
                        if (beamAll[i]->rightBeam) {
                            g_p3deathright = true;
                        }
                        if (beamAll[i]->leftBeam) {
                            g_p3deathleft = true;
                        }
                        if (beamAll[i]->upBeam) {
                            g_p3deathback = true;
                        }
                        if (beamAll[i]->downBeam) {
                            g_p3deathfront = true;
                        }
                        if (beamAll[i]->beam2P) { g_score2P1 += 2, g_score2Pall += 2; }
                        if (beamAll[i]->beam1P) { g_score1P1 += 2, g_score1Pall += 2; }
                        if (beamAll[i]->beam4P) { g_score4P1 += 2, g_score4Pall += 2; }
                        PlaySoundMem(crashS, DX_PLAYTYPE_BACK);
                    }
                }
            }
        }

        if (g_p4death == false) {
            if (g_p4invincible == false) {
                if (!(beamAll[i]->beam4P)) {
                    _distanceX = abs(g_p4X - beamAll[i]->beamcenterX);
                    _distanceY = abs(g_p4Y - beamAll[i]->beamcenterY);
                    if (_distanceX < beamAll[i]->sizeplusX && _distanceY < beamAll[i]->sizeplusY) {
                        g_p4death = true;
                        g_score4P1--, g_score4Pall--;
                        if (beamAll[i]->rightBeam) {
                            g_p4deathright = true;
                        }
                        if (beamAll[i]->leftBeam) {
                            g_p4deathleft = true;
                        }
                        if (beamAll[i]->upBeam) {
                            g_p4deathback = true;
                        }
                        if (beamAll[i]->downBeam) {
                            g_p4deathfront = true;
                        }
                        if (beamAll[i]->beam2P) { g_score2P1 += 2, g_score2Pall += 2; }
                        if (beamAll[i]->beam3P) { g_score3P1 += 2, g_score3Pall += 2; }
                        if (beamAll[i]->beam1P) { g_score1P1 += 2, g_score1Pall += 2; }
                        PlaySoundMem(crashS, DX_PLAYTYPE_BACK);
                    }
                }
            }
        }

        for (int n = 0; n < beamAll.size(); n++) {
            if (!(i == n)) {
                if (beamAll[i]->beam1P && (beamAll[n]->beam1P == false)) {
                    _distanceX = abs(beamAll[i]->beamcenterX - beamAll[n]->beamcenterX);
                    _distanceY = abs(beamAll[i]->beamcenterY - beamAll[n]->beamcenterY);
                    _beamsizeplusX = (beamAll[i]->beamsizeX + beamAll[n]->beamsizeX) / 2;
                    _beamsizeplusY = (beamAll[i]->beamsizeY + beamAll[n]->beamsizeY) / 2;
                    if (_distanceX < _beamsizeplusX && _distanceY < _beamsizeplusY)
                    {
                        g_p1Bdeath = true;
                        if (beamAll[n]->beam2P) { g_p2Bdeath = true; }
                        if (beamAll[n]->beam3P) { g_p3Bdeath = true; }
                        if (beamAll[n]->beam4P) { g_p4Bdeath = true; }
                        beamAll[i]->beamdeath = true;
                        beamAll[n]->beamdeath = true;
                    }
                }

                if (beamAll[i]->beam2P && (beamAll[n]->beam2P == false)) {
                    _distanceX = abs(beamAll[i]->beamcenterX - beamAll[n]->beamcenterX);
                    _distanceY = abs(beamAll[i]->beamcenterY - beamAll[n]->beamcenterY);
                    _beamsizeplusX = (beamAll[i]->beamsizeX + beamAll[n]->beamsizeX) / 2;
                    _beamsizeplusY = (beamAll[i]->beamsizeY + beamAll[n]->beamsizeY) / 2;
                    if (_distanceX < _beamsizeplusX && _distanceY < _beamsizeplusY)
                    {
                        g_p2Bdeath = true;
                        if (beamAll[n]->beam1P) { g_p1Bdeath = true; }
                        if (beamAll[n]->beam3P) { g_p3Bdeath = true; }
                        if (beamAll[n]->beam4P) { g_p4Bdeath = true; }
                        beamAll[i]->beamdeath = true;
                        beamAll[n]->beamdeath = true;
                    }
                }

                if (beamAll[i]->beam3P && (beamAll[n]->beam3P == false)) {
                    _distanceX = abs(beamAll[i]->beamcenterX - beamAll[n]->beamcenterX);
                    _distanceY = abs(beamAll[i]->beamcenterY - beamAll[n]->beamcenterY);
                    _beamsizeplusX = (beamAll[i]->beamsizeX + beamAll[n]->beamsizeX) / 2;
                    _beamsizeplusY = (beamAll[i]->beamsizeY + beamAll[n]->beamsizeY) / 2;
                    if (_distanceX < _beamsizeplusX && _distanceY < _beamsizeplusY)
                    {
                        g_p3Bdeath = true;
                        if (beamAll[n]->beam2P) { g_p2Bdeath = true; }
                        if (beamAll[n]->beam1P) { g_p1Bdeath = true; }
                        if (beamAll[n]->beam4P) { g_p4Bdeath = true; }
                        beamAll[i]->beamdeath = true;
                        beamAll[n]->beamdeath = true;
                    }
                }

                if (beamAll[i]->beam4P && (beamAll[n]->beam4P == false)) {
                    _distanceX = abs(beamAll[i]->beamcenterX - beamAll[n]->beamcenterX);
                    _distanceY = abs(beamAll[i]->beamcenterY - beamAll[n]->beamcenterY);
                    _beamsizeplusX = (beamAll[i]->beamsizeX + beamAll[n]->beamsizeX) / 2;
                    _beamsizeplusY = (beamAll[i]->beamsizeY + beamAll[n]->beamsizeY) / 2;
                    if (_distanceX < _beamsizeplusX && _distanceY < _beamsizeplusY)
                    {
                        g_p4Bdeath = true;
                        if (beamAll[n]->beam2P) { g_p2Bdeath = true; }
                        if (beamAll[n]->beam3P) { g_p3Bdeath = true; }
                        if (beamAll[n]->beam1P) { g_p1Bdeath = true; }
                        beamAll[i]->beamdeath = true;
                        beamAll[n]->beamdeath = true;
                    }
                }
            }
        }
    }
}