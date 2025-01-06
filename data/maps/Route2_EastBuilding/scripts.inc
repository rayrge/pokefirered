.equ REQUIRED_SEEN_MONS, 10

Route2_EastBuilding_MapScripts::
	.byte 0

Route2_EastBuilding_EventScript_Aide::

	lock
	faceplayer
	call Route2_EastBuilding_EventScript_GetAideRequestInfo
	goto_if_set FLAG_GOT_HM05, Route2_EastBuilding_EventScript_AlreadyGotHM05
	msgbox Text_EggQuestion, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Script_PlayerAnsweredNo
	getpartysize
	compare VAR_RESULT, 6
	goto_if_eq Script_PlayerHasFullParty
	call_if_eq VAR_STARTER_MON, 2, Script_RollZard
	call_if_eq VAR_STARTER_MON, 1, Script_RollTurtle
	call_if_eq VAR_STARTER_MON, 0, Script_RollVenu	
	waitfanfare
	setflag FLAG_GOT_HM05
	msgbox Route2_EastBuilding_Text_ExplainHM05
	release
	end

Script_PlayerHasFullParty::
	msgbox Text_PlayerHasFullParty, MSGBOX_DEFAULT
	release
	end

Script_PlayerAnsweredNo::
	msgbox Text_PlayerAnsweredNo, MSGBOX_DEFAULT
	release
	end

Script_RollZard::
	random 2
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, 0, Script_ChikoritaEgg
	call_if_eq VAR_0x8008, 1, Script_TotodileEgg
	return

Script_RollVenu::
	random 2
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, 0, Script_CyndaquilEgg
	call_if_eq VAR_0x8008, 1, Script_TotodileEgg
	return

Script_RollTurtle::
	random 2
	copyvar VAR_0x8008, VAR_RESULT
	call_if_eq VAR_0x8008, 0, Script_CyndaquilEgg
	call_if_eq VAR_0x8008, 1, Script_ChikoritaEgg
	return

Script_CyndaquilEgg::
	giveegg SPECIES_CYNDAQUIL
	playfanfare MUS_OBTAIN_ITEM
	msgbox Text_ReceivedCyndaquil, MSGBOX_DEFAULT
	return

Script_ChikoritaEgg::
	giveegg SPECIES_CHIKORITA
	playfanfare MUS_OBTAIN_ITEM
	msgbox Text_ReceivedChikorita, MSGBOX_DEFAULT
	return

Script_TotodileEgg::
	giveegg SPECIES_TOTODILE
	playfanfare MUS_OBTAIN_ITEM
	msgbox Text_ReceivedTotodile, MSGBOX_DEFAULT
	return

Text_EggQuestion:
	.string "I was supposed to give you\n"
	.string "Flash, but there isn't really\p"
	.string "a point now that the\n"
	.string "Rock Tunnel is bright.\p"
	.string "Do you want a Johto Starter?$"

Text_PlayerAnsweredNo:
	.string "What, you don't want a free\n"
	.string "encounter?$"

Text_ReceivedCyndaquil:
	.string "{PLAYER} received the CYNDAQUIL!$"

Text_ReceivedChikorita:
	.string "{PLAYER} received the CHIKORITA!$"

Text_ReceivedTotodile:
	.string "{PLAYER} received the TOTODILE!$"

Text_PlayerHasFullParty:
	.string "Your party is full.\n"
	.string "There's no room for this Egg.$"
	


Route2_EastBuilding_EventScript_AlreadyGotHM05::
	msgbox Route2_EastBuilding_Text_ExplainHM05
	release
	end

Route2_EastBuilding_EventScript_GetAideRequestInfo::
	buffernumberstring STR_VAR_1, REQUIRED_SEEN_MONS
	bufferitemname STR_VAR_2, ITEM_HM05
	return

Route2_EastBuilding_EventScript_Rocker::
	msgbox Route2_EastBuilding_Text_CanGetThroughRockTunnel, MSGBOX_NPC
	end
