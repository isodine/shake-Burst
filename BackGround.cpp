#include "DxLib.h"
#include "BackGround.h"
#include "Player.h"

BackGround::BackGround(ModeGame& mg)
{
	_bg = LoadGraph("picture/Others/stage.png");
	g_p1beamGR = LoadGraph("picture/player/colabeam.png");
	g_p2beamGR = LoadGraph("picture/player/bluebeam.png");
	g_p3beamGR = LoadGraph("picture/player/greenbeam.png");
	g_p4beamGR = LoadGraph("picture/player/yerrowbeam.png");
	LoadDivGraph("picture/Motion/walk/cola/front/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan1Pmovefront);
	LoadDivGraph("picture/Motion/walk/cola/right/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan1Pmoveright);
	LoadDivGraph("picture/Motion/walk/cola/left/kakiseisaku akikann shoot_wolk_sheet.png" , 25, 25, 1, 210, 210, kan1Pmoveleft );
	LoadDivGraph("picture/Motion/walk/cola/back/kakiseisaku akikann shoot_wolk_sheet.png" , 25, 25, 1, 210, 210, kan1Pmoveback );
	LoadDivGraph("picture/Motion/charge/level1/cola/front/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan1Pchargefront);
	LoadDivGraph("picture/Motion/charge/level1/cola/right/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan1Pchargeright);
	LoadDivGraph("picture/Motion/charge/level1/cola/left/kakiseisaku akikann charge_sheet.png" , 10, 10, 1, 210, 210, kan1Pchargeleft);
	LoadDivGraph("picture/Motion/charge/level1/cola/back/kakiseisaku akikann charge_sheet.png" , 10, 10, 1, 210, 210, kan1Pchargeback);
	LoadDivGraph("picture/Motion/shoot/cola/right/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan1Pattackright);
	LoadDivGraph("picture/Motion/shoot/cola/left/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan1Pattackleft);
	LoadDivGraph("picture/Motion/shoot/cola/front/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan1Pattackfront);
	LoadDivGraph("picture/Motion/shoot/cola/back/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan1Pattackback);
	LoadDivGraph("picture/Motion/shoot/cola/right/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan1PLv2attackright);
	LoadDivGraph("picture/Motion/shoot/cola/left/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan1PLv2attackleft);
	LoadDivGraph("picture/Motion/shoot/cola/front/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan1PLv2attackfront);
	LoadDivGraph("picture/Motion/shoot/cola/back/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan1PLv2attackback);
	LoadDivGraph("picture/Motion/Lv3shoot/cola/front/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan1Pmoveattackfront);
	LoadDivGraph("picture/Motion/Lv3shoot/cola/right/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan1Pmoveattackright);
	LoadDivGraph("picture/Motion/Lv3shoot/cola/left/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan1Pmoveattackleft);
	LoadDivGraph("picture/Motion/Lv3shoot/cola/back/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan1Pmoveattackback);
	LoadDivGraph("picture/Motion/charge/level2/cola/front/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan1PchargefrontLv2);
	LoadDivGraph("picture/Motion/charge/level2/cola/right/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan1PchargerightLv2);
	LoadDivGraph("picture/Motion/charge/level2/cola/left/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan1PchargeleftLv2);
	LoadDivGraph("picture/Motion/charge/level2/cola/back/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan1PchargebackLv2);
	LoadDivGraph("picture/Motion/walk/soda/front/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan2Pmovefront);
	LoadDivGraph("picture/Motion/walk/soda/right/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan2Pmoveright);
	LoadDivGraph("picture/Motion/walk/soda/left/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan2Pmoveleft);
	LoadDivGraph("picture/Motion/walk/soda/back/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan2Pmoveback);
	LoadDivGraph("picture/Motion/charge/level1/soda/front/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan2Pchargefront);
	LoadDivGraph("picture/Motion/charge/level1/soda/right/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan2Pchargeright);
	LoadDivGraph("picture/Motion/charge/level1/soda/left/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan2Pchargeleft);
	LoadDivGraph("picture/Motion/charge/level1/soda/back/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan2Pchargeback);
	LoadDivGraph("picture/Motion/shoot/soda/right/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan2Pattackright);
	LoadDivGraph("picture/Motion/shoot/soda/left/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan2Pattackleft);
	LoadDivGraph("picture/Motion/shoot/soda/front/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan2Pattackfront);
	LoadDivGraph("picture/Motion/shoot/soda/back/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan2Pattackback);
	LoadDivGraph("picture/Motion/shoot/soda/right/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan2PLv2attackright);
	LoadDivGraph("picture/Motion/shoot/soda/left/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan2PLv2attackleft);
	LoadDivGraph("picture/Motion/shoot/soda/front/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan2PLv2attackfront);
	LoadDivGraph("picture/Motion/shoot/soda/back/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan2PLv2attackback);
	LoadDivGraph("picture/Motion/Lv3shoot/soda/front/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan2Pmoveattackfront);
	LoadDivGraph("picture/Motion/Lv3shoot/soda/right/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan2Pmoveattackright);
	LoadDivGraph("picture/Motion/Lv3shoot/soda/left/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan2Pmoveattackleft);
	LoadDivGraph("picture/Motion/Lv3shoot/soda/back/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan2Pmoveattackback);
	LoadDivGraph("picture/Motion/charge/level2/soda/front/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan2PchargefrontLv2);
	LoadDivGraph("picture/Motion/charge/level2/soda/right/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan2PchargerightLv2);
	LoadDivGraph("picture/Motion/charge/level2/soda/left/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan2PchargeleftLv2);
	LoadDivGraph("picture/Motion/charge/level2/soda/back/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan2PchargebackLv2);
	LoadDivGraph("picture/Motion/walk/melon/front/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan3Pmovefront);
	LoadDivGraph("picture/Motion/walk/melon/right/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan3Pmoveright);
	LoadDivGraph("picture/Motion/walk/melon/left/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan3Pmoveleft);
	LoadDivGraph("picture/Motion/walk/melon/back/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan3Pmoveback);
	LoadDivGraph("picture/Motion/charge/level1/melon/front/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan3Pchargefront);
	LoadDivGraph("picture/Motion/charge/level1/melon/right/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan3Pchargeright);
	LoadDivGraph("picture/Motion/charge/level1/melon/left/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan3Pchargeleft);
	LoadDivGraph("picture/Motion/charge/level1/melon/back/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan3Pchargeback);
	LoadDivGraph("picture/Motion/shoot/melon/right/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan3Pattackright);
	LoadDivGraph("picture/Motion/shoot/melon/left/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan3Pattackleft);
	LoadDivGraph("picture/Motion/shoot/melon/front/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan3Pattackfront);
	LoadDivGraph("picture/Motion/shoot/melon/back/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan3Pattackback);
	LoadDivGraph("picture/Motion/shoot/melon/right/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan3PLv2attackright);
	LoadDivGraph("picture/Motion/shoot/melon/left/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan3PLv2attackleft);
	LoadDivGraph("picture/Motion/shoot/melon/front/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan3PLv2attackfront);
	LoadDivGraph("picture/Motion/shoot/melon/back/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan3PLv2attackback);
	LoadDivGraph("picture/Motion/Lv3shoot/melon/front/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan3Pmoveattackfront);
	LoadDivGraph("picture/Motion/Lv3shoot/melon/right/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan3Pmoveattackright);
	LoadDivGraph("picture/Motion/Lv3shoot/melon/left/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan3Pmoveattackleft);
	LoadDivGraph("picture/Motion/Lv3shoot/melon/back/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan3Pmoveattackback);
	LoadDivGraph("picture/Motion/charge/level1/melon/front/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan3PchargefrontLv2);
	LoadDivGraph("picture/Motion/charge/level1/melon/right/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan3PchargerightLv2);
	LoadDivGraph("picture/Motion/charge/level1/melon/left/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan3PchargeleftLv2);
	LoadDivGraph("picture/Motion/charge/level1/melon/back/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan3PchargebackLv2);
	LoadDivGraph("picture/Motion/walk/lemon/front/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan4Pmovefront);
	LoadDivGraph("picture/Motion/walk/lemon/right/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan4Pmoveright);
	LoadDivGraph("picture/Motion/walk/lemon/left/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan4Pmoveleft);
	LoadDivGraph("picture/Motion/walk/lemon/back/kakiseisaku akikann shoot_wolk_sheet.png", 25, 25, 1, 210, 210, kan4Pmoveback);
	LoadDivGraph("picture/Motion/charge/level1/lemon/front/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan4Pchargefront);
	LoadDivGraph("picture/Motion/charge/level1/lemon/right/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan4Pchargeright);
	LoadDivGraph("picture/Motion/charge/level1/lemon/left/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan4Pchargeleft);
	LoadDivGraph("picture/Motion/charge/level1/lemon/back/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan4Pchargeback);
	LoadDivGraph("picture/Motion/shoot/lemon/right/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan4Pattackright);
	LoadDivGraph("picture/Motion/shoot/lemon/left/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan4Pattackleft);
	LoadDivGraph("picture/Motion/shoot/lemon/front/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan4Pattackfront);
	LoadDivGraph("picture/Motion/shoot/lemon/back/kakiseisaku akikann shoot ver2_sheet.png", 16, 16, 1, 210, 210, kan4Pattackback);
	LoadDivGraph("picture/Motion/shoot/lemon/right/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan4PLv2attackright);
	LoadDivGraph("picture/Motion/shoot/lemon/left/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan4PLv2attackleft);
	LoadDivGraph("picture/Motion/shoot/lemon/front/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan4PLv2attackfront);
	LoadDivGraph("picture/Motion/shoot/lemon/back/kakiseisaku akikann shoot ver2_sheet1.png", 17, 17, 1, 210, 210, kan4PLv2attackback);
	LoadDivGraph("picture/Motion/Lv3shoot/lemon/front/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan4Pmoveattackfront);
	LoadDivGraph("picture/Motion/Lv3shoot/lemon/right/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan4Pmoveattackright);
	LoadDivGraph("picture/Motion/Lv3shoot/lemon/left/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan4Pmoveattackleft);
	LoadDivGraph("picture/Motion/Lv3shoot/lemon/back/kakiseisaku akikann shoot ver2_sheet.png", 28, 28, 1, 210, 210, kan4Pmoveattackback);
	LoadDivGraph("picture/Motion/charge/level1/lemon/front/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan4PchargefrontLv2);
	LoadDivGraph("picture/Motion/charge/level1/lemon/right/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan4PchargerightLv2);
	LoadDivGraph("picture/Motion/charge/level1/lemon/left/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan4PchargeleftLv2);
	LoadDivGraph("picture/Motion/charge/level1/lemon/back/kakiseisaku akikann charge_sheet.png", 10, 10, 1, 210, 210, kan4PchargebackLv2);
	LoadDivGraph("picture/Motion/blow away/cola/left/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan1Pdeathright);
	LoadDivGraph("picture/Motion/blow away/cola/right/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan1Pdeathleft);
	LoadDivGraph("picture/Motion/blow away/cola/front/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan1Pdeathback);
	LoadDivGraph("picture/Motion/blow away/cola/back/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan1Pdeathfront);
	LoadDivGraph("picture/Motion/blow away/soda/left/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan2Pdeathright);
	LoadDivGraph("picture/Motion/blow away/soda/right/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan2Pdeathleft);
	LoadDivGraph("picture/Motion/blow away/soda/front/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan2Pdeathback);
	LoadDivGraph("picture/Motion/blow away/soda/back/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan2Pdeathfront);
	LoadDivGraph("picture/Motion/blow away/melon/left/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan3Pdeathright);
	LoadDivGraph("picture/Motion/blow away/melon/right/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan3Pdeathleft);
	LoadDivGraph("picture/Motion/blow away/melon/front/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan3Pdeathback);
	LoadDivGraph("picture/Motion/blow away/melon/back/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan3Pdeathfront);
	LoadDivGraph("picture/Motion/blow away/lemon/left/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan4Pdeathright);
	LoadDivGraph("picture/Motion/blow away/lemon/right/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan4Pdeathleft);
	LoadDivGraph("picture/Motion/blow away/lemon/front/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan4Pdeathback);
	LoadDivGraph("picture/Motion/blow away/lemon/back/kakiseisaku akikann knockback_sheet.png", 15, 15, 1, 210, 210, kan4Pdeathfront);
	LoadDivGraph("picture/Others/limitgage.png", 6, 6, 1, 105, 105, kanchargelimit);
	LoadDivGraph("picture/Others/respawn.png", 40, 40, 1, 230, 230, kanrespawn);
	LoadDivGraph("picture/Others/beamhit.png", 12, 12, 1, 250, 250, kandeath);
}

BackGround::~BackGround()
{
}

void	BackGround::Render()
{
	DrawGraph(0, 0, _bg, FALSE);   // ”wŒi‚ð•`‰æ
}