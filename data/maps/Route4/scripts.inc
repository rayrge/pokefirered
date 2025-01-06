# 1 "data/maps/Route4/scripts.pory"

# 2 "data/maps/Route4/scripts.pory"
Route4_MapScripts::
# 3 "data/maps/Route4/scripts.pory"
	.byte 0
# 4 "data/maps/Route4/scripts.pory"

# 5 "data/maps/Route4/scripts.pory"
Route4_EventScript_Unused::
# 6 "data/maps/Route4/scripts.pory"
	end
# 7 "data/maps/Route4/scripts.pory"

# 8 "data/maps/Route4/scripts.pory"
Route4_EventScript_Woman::
# 9 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_TrippedOverGeodude, MSGBOX_NPC
# 10 "data/maps/Route4/scripts.pory"
	end
# 11 "data/maps/Route4/scripts.pory"

# 12 "data/maps/Route4/scripts.pory"
Route4_EventScript_MtMoonSign::
# 13 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_MtMoonEntrance, MSGBOX_SIGN
# 14 "data/maps/Route4/scripts.pory"
	end
# 15 "data/maps/Route4/scripts.pory"

# 16 "data/maps/Route4/scripts.pory"
Route4_EventScript_RouteSign::
# 17 "data/maps/Route4/scripts.pory"
	msgbox Route4_Text_RouteSign, MSGBOX_SIGN
# 18 "data/maps/Route4/scripts.pory"
	end

Route4_EventScript_Falkner::
# 22 "data/maps/Route4/scripts.pory"
	trainerbattle_single TRAINER_BIRD_KEEPER_FALKNER, Falkner_Intro, Falkner_Outro
# 23 "data/maps/Route4/scripts.pory"
	msgbox Falkner_PostBattle, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route4/scripts.pory"
	waitmessage
	end


Falkner_Intro::
# 28 "data/maps/Route4/scripts.pory"
	.string "I've been searching for a legendary\n"
	.string "pilot who ruled the lands.\p"
	.string "Have you heard of the legend?$"

Falkner_Outro::
# 34 "data/maps/Route4/scripts.pory"
	.string "Not here!$"

Falkner_PostBattle::
# 38 "data/maps/Route4/scripts.pory"
	.string "We all came here for a vacation.\p"
	.string "The rest of us are scattered\n"
	.string "around the region!$"
