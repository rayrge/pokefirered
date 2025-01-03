# 1 "data/maps/SilphCo_1F/scripts.pory"

# 2 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_MapScripts::
# 3 "data/maps/SilphCo_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_1F_OnTransition
# 4 "data/maps/SilphCo_1F/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_1F/scripts.pory"

# 6 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_OnTransition::
# 7 "data/maps/SilphCo_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SILPH_CO_1F
# 8 "data/maps/SilphCo_1F/scripts.pory"
	end
# 9 "data/maps/SilphCo_1F/scripts.pory"

# 10 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_Receptionist::
# 11 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_WelcomePresidentInBoardroom, MSGBOX_NPC
# 12 "data/maps/SilphCo_1F/scripts.pory"
	end
# 13 "data/maps/SilphCo_1F/scripts.pory"

# 14 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_FloorSign::
# 15 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_FloorSign, MSGBOX_SIGN
# 16 "data/maps/SilphCo_1F/scripts.pory"
	end

SilphCo_1F_StartSpikes::
# 20 "data/maps/SilphCo_1F/scripts.pory"
	setvar VAR_SILPHFIGHT, 1
	end


SilphCo_1F_EndSpikes::
# 25 "data/maps/SilphCo_1F/scripts.pory"
	setvar VAR_SILPHFIGHT, 0
	end


SilphCo_1F_WarnSpikes::
# 30 "data/maps/SilphCo_1F/scripts.pory"
	lockall
# 31 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SpikesWarning, MSGBOX_SIGN
# 32 "data/maps/SilphCo_1F/scripts.pory"
	setvar VAR_SILPHWARN, 1
# 33 "data/maps/SilphCo_1F/scripts.pory"
	releaseall
	end


SpikesWarning::
# 37 "data/maps/SilphCo_1F/scripts.pory"
	.string "The Rockets have set a trap of \n"
	.string "permanent spikes on the floor.\p"
	.string "Oh yeah, they broke the elevator \n"
	.string "too. Sorry about that.$"
