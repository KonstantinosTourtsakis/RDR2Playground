/*
	THIS FILE IS A PART OF RDR 2 SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2019
*/

#pragma once


enum eInputGroup
{
	INPUT_GROUP_UNK1 = 0,
	INPUT_GROUP_UNK2,
	INPUT_GROUP_CONTROLLER,
};

enum eNativeInputs : unsigned
{
	INPUT_NEXT_CAMERA = 0x7f8d09b8,
	INPUT_LOOK_LR = 0xa987235f,
	INPUT_LOOK_UD = 0xd2047988,
	INPUT_LOOK_UP_ONLY = 0xc0651d40,
	INPUT_LOOK_DOWN_ONLY = 0x8ed92e16,
	INPUT_LOOK_LEFT_ONLY = 0x08f8bc6d,
	INPUT_LOOK_RIGHT_ONLY = 0xa1eb1353,
	INPUT_CINEMATIC_SLOWMO = 0x7a9093de,
	INPUT_RADIAL_MENU_NAV_UD = 0xba60039f,
	INPUT_RADIAL_MENU_NAV_LR = 0x390948dc,
	INPUT_RADIAL_MENU_SLOT_NAV_NEXT = 0xe71f89b8,
	INPUT_RADIAL_MENU_SLOT_NAV_PREV = 0x93d6723f,
	INPUT_SELECT_NEXT_WHEEL = 0x77e56fb3,
	INPUT_SELECT_ITEM_WHEEL = 0x1f6d95e5,
	INPUT_QUICK_SELECT_INSPECT = 0xf09866f3,
	INPUT_QUICK_SELECT_SET_FOR_SWAP = 0xd45ec04f,
	INPUT_QUICK_SHORTCUT_ABILITIES_MENU = 0x9cc7a1a4,
	INPUT_QUICK_SELECT_SECONDARY_NAV_NEXT = 0xf1421cf5,
	INPUT_QUICK_SELECT_SECONDARY_NAV_PREV = 0xd9f9f017,
	INPUT_QUICK_SELECT_TOGGLE_SHORTCUT_ITEM = 0xfa0b29cd,
	INPUT_QUICK_SELECT_PUT_AWAY_ROD = 0x253fec09,
	INPUT_EMOTES_FAVORITE = 0xa835261b,
	INPUT_EMOTES_MANAGE = 0x7e75f4dc,
	INPUT_EMOTES_SLOT_NAV_NEXT = 0xcbb12f87,
	INPUT_SELECT_NEXT_WEAPON = 0xd0842edf,
	INPUT_SELECT_PREV_WEAPON = 0xf78d7337,
	INPUT_SKIP_CUTSCENE = 0xcdc4e4e9,
	INPUT_CHARACTER_WHEEL = 0x972f8d1e,
	INPUT_MULTIPLAYER_INFO = 0xe8342ff2,
	INPUT_SPRINT = 0x8ffc75d6,
	INPUT_JUMP = 0xd9d0e1c0,
	INPUT_ENTER = 0xcefd9220,
	INPUT_ATTACK = 0x07ce1e61,
	INPUT_AIM = 0xf84fa74f,
	INPUT_LOOK_BEHIND = 0x9959a6f0,
	INPUT_PHONE = 0x4cf871d0,
	INPUT_SPECIAL_ABILITY = 0xcee12b50,
	INPUT_SPECIAL_ABILITY_SECONDARY = 0x6328239b,
	INPUT_SECONDARY_SPECIAL_ABILITY_SECONDA = 0xfdbb7295,
	INPUT_SPECIAL_ABILITY_ACTION = 0x1eca87d4,
	INPUT_MOVE_LR = 0x4d8fb4c1,
	INPUT_MOVE_UD = 0xfda83190,
	INPUT_MOVE_UP_ONLY = 0x8fd015d8,
	INPUT_MOVE_DOWN_ONLY = 0xd27782e3,
	INPUT_MOVE_LEFT_ONLY = 0x7065027d,
	INPUT_MOVE_RIGHT_ONLY = 0xb4e465b4,
	INPUT_DUCK = 0xdb096b85,
	INPUT_TWIRL_PISTOL = 0x938d4071,
	INPUT_TOGGLE_HOLSTER = 0xb238fe0b,
	INPUT_OPEN_WHEEL_MENU = 0xac4bd4f1,
	INPUT_OPEN_SATCHEL_MENU = 0x4cc0e2fe,
	INPUT_OPEN_SATCHEL_HORSE_MENU = 0x5966d52a,
	INPUT_OPEN_CRAFTING_MENU = 0x734c6e39,
	INPUT_OPEN_JOURNAL = 0xf3830d8e,
	INPUT_PICKUP = 0xe6360a8e,
	INPUT_IGNITE = 0xc75c27b0,
	INPUT_SNIPER_ZOOM = 0x7abc6a66,
	INPUT_SNIPER_ZOOM_IN_ONLY = 0xa5bdcd3c,
	INPUT_SNIPER_ZOOM_OUT_ONLY = 0x430593aa,
	INPUT_SNIPER_ZOOM_IN_SECONDARY = 0x6be9c207,
	INPUT_SNIPER_ZOOM_OUT_SECONDARY = 0x8a7b8833,
	INPUT_TOGGLE_WEAPON_SCOPE = 0x3076e97c,
	INPUT_COVER = 0xde794e3e,
	INPUT_COVER_TRANSITION = 0x750c8010,
	INPUT_RELOAD = 0xe30cd707,
	INPUT_TALK = 0x7dca9c75,
	INPUT_DETONATE = 0x73846677,
	INPUT_HUD_SPECIAL = 0x580c4473,
	INPUT_ARREST = 0xa4f1006b,
	INPUT_ACCURATE_AIM = 0x406adfae,
	INPUT_SWITCH_SHOULDER = 0x827e9ee8,
	INPUT_IRON_SIGHT = 0x841240a9,
	INPUT_AIM_IN_AIR = 0xd8f73058,
	INPUT_SWITCH_FIRING_MODE = 0xeed15f18,
	INPUT_CONTEXT = 0xb73bca77,
	INPUT_CONTEXT_SECONDARY = 0xf19be385,
	INPUT_WEAPON_SPECIAL = 0x733901f3,
	INPUT_WEAPON_SPECIAL_TWO = 0x50ba1a77,
	INPUT_DIVE = 0x06052d11,
	INPUT_DROP_WEAPON = 0x7dbcd016,
	INPUT_DROP_AMMO = 0x4e42696e,
	INPUT_THROW_GRENADE = 0x0af99998,
	INPUT_FOCUS_CAM = 0xe72b43f4,
	INPUT_INSPECT = 0xa61dc630,
	INPUT_INSPECT_ZOOM = 0x53296b75,
	INPUT_INSPECT_LR = 0x1788c283,
	INPUT_INSPECT_UD = 0xf9781997,
	INPUT_INSPECT_OPEN_SATCHEL = 0x9b1ca8da,
	INPUT_DYNAMIC_SCENARIO = 0x2eab0795,
	INPUT_PLAYER_MENU = 0x80f28e95,
	INPUT_OPEN_EMOTE_WHEEL = 0xe2b557a3,
	INPUT_OPEN_EMOTE_WHEEL_HORSE = 0x8b3fa65e,
	INPUT_EMOTE_GROUP_LINK = 0x1c826362,
	INPUT_EMOTE_GROUP_LINK_HORSE = 0x4fd1c57b,
	INPUT_REVEAL_HUD = 0xcf8a4eca,
	INPUT_SELECT_RADAR_MODE = 0x0f39b3d4,
	INPUT_SIMPLE_RADAR = 0x5fef1b6d,
	INPUT_EXPAND_RADAR = 0xcf0b11de,
	INPUT_REGULAR_RADAR = 0x51aa7a35,
	INPUT_DISABLE_RADAR = 0x70cbd78d,
	INPUT_SURRENDER = 0xdb8d69b8,
	INPUT_WHISTLE = 0x24978a28,
	INPUT_WHISTLE_HORSEBACK = 0xe7eb9185,
	INPUT_STOP_LEADING_ANIMAL = 0x7914a3dd,
	INPUT_CINEMATIC_CAM = 0x620a6c5e,
	INPUT_CINEMATIC_CAM_HOLD = 0xd7e7b375,
	INPUT_CINEMATIC_CAM_CHANGE_SHOT = 0xa6c67243,
	INPUT_CINEMATIC_CAM_UD = 0x84574ae8,
	INPUT_CINEMATIC_CAM_UP_ONLY = 0xefcfe6b7,
	INPUT_CINEMATIC_CAM_DOWN_ONLY = 0x23ae34a2,
	INPUT_CINEMATIC_CAM_LR = 0x6bc904fc,
	INPUT_CONTEXT_A = 0x5181713d,
	INPUT_CONTEXT_B = 0x3b24c470,
	INPUT_CONTEXT_X = 0xe3bf959b,
	INPUT_CONTEXT_Y = 0xd51b784f,
	INPUT_CONTEXT_LT = 0xc13a6564,
	INPUT_CONTEXT_RT = 0x07b8beaf,
	INPUT_CONTEXT_ACTION = 0xb28318c0,
	INPUT_VEH_MOVE_LR = 0xf1e2852c,
	INPUT_VEH_MOVE_UD = 0x8a81c00c,
	INPUT_VEH_MOVE_UP_ONLY = 0xdebd7ef6,
	INPUT_VEH_MOVE_DOWN_ONLY = 0x16d73e1d,
	INPUT_VEH_MOVE_LEFT_ONLY = 0x9df54706,
	INPUT_VEH_MOVE_RIGHT_ONLY = 0x97a8fd98,
	INPUT_VEH_SPECIAL = 0x493919db,
	INPUT_VEH_GUN_LR = 0xb6f3e4fe,
	INPUT_VEH_GUN_UD = 0x482560ee,
	INPUT_VEH_AIM = 0xd7cafcef,
	INPUT_VEH_ATTACK = 0xf4330038,
	INPUT_VEH_ATTACK2 = 0xf1c341ba,
	INPUT_VEH_ACCELERATE = 0x5b9fd4e2,
	INPUT_VEH_BRAKE = 0x6e1f639b,
	INPUT_VEH_DUCK = 0x5b3690f2,
	INPUT_VEH_HEADLIGHT = 0xf1301666,
	INPUT_VEH_EXIT = 0xfefab9b4,
	INPUT_VEH_HANDBRAKE = 0x65d24c98,
	INPUT_VEH_LOOK_BEHIND = 0xcae9b017,
	INPUT_VEH_NEXT_RADIO = 0x22e0f7e7,
	INPUT_VEH_PREV_RADIO = 0x9785ce13,
	INPUT_VEH_NEXT_RADIO_TRACK = 0xf7fa2ddc,
	INPUT_VEH_PREV_RADIO_TRACK = 0x0a94c4ff,
	INPUT_VEH_RADIO_WHEEL = 0x4915ac0a,
	INPUT_VEH_HORN = 0x63a0d258,
	INPUT_VEH_FLY_THROTTLE_UP = 0x7232bab3,
	INPUT_VEH_FLY_THROTTLE_DOWN = 0x084dff95,
	INPUT_VEH_FLY_YAW_LEFT = 0x31589ad1,
	INPUT_VEH_FLY_YAW_RIGHT = 0xbd143fc6,
	INPUT_VEH_PASSENGER_AIM = 0xee2804d0,
	INPUT_VEH_PASSENGER_ATTACK = 0x27ad4433,
	INPUT_VEH_SPECIAL_ABILITY_FRANKLIN = 0x5ec33578,
	INPUT_VEH_STUNT_UD = 0x4aa1560e,
	INPUT_VEH_SELECT_NEXT_WEAPON = 0x889a626f,
	INPUT_VEH_SELECT_PREV_WEAPON = 0x0c97bac7,
	INPUT_VEH_ROOF = 0x3e7cf9a4,
	INPUT_VEH_JUMP = 0xaa56b926,
	INPUT_VEH_GRAPPLING_HOOK = 0xb985aa5e,
	INPUT_VEH_SHUFFLE = 0xc7083798,
	INPUT_VEH_TRAVERSAL = 0x739d6261,
	INPUT_VEH_DROP_PROJECTILE = 0xc61611e6,
	INPUT_VEH_MOUSE_CONTROL_OVERRIDE = 0x39ccabd5,
	INPUT_VEH_FLY_ROLL_LR = 0x3c8ab570,
	INPUT_VEH_FLY_ROLL_LEFT_ONLY = 0x56f84ea0,
	INPUT_VEH_FLY_ROLL_RIGHT_ONLY = 0x876b3361,
	INPUT_VEH_FLY_PITCH_UD = 0xe67e1e57,
	INPUT_VEH_FLY_PITCH_UP_ONLY = 0x6280ba1a,
	INPUT_VEH_FLY_PITCH_DOWN_ONLY = 0x0f4e369f,
	INPUT_VEH_FLY_UNDERCARRIAGE = 0xfe0fe518,
	INPUT_VEH_FLY_ATTACK = 0x1d71d7aa,
	INPUT_VEH_FLY_SELECT_NEXT_WEAPON = 0x24e94299,
	INPUT_VEH_FLY_SELECT_PREV_WEAPON = 0xc0d874e5,
	INPUT_VEH_FLY_SELECT_TARGET_LEFT = 0x307fc4c1,
	INPUT_VEH_FLY_SELECT_TARGET_RIGHT = 0x52f25c96,
	INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE = 0xe3238029,
	INPUT_VEH_FLY_DUCK = 0x378a10f7,
	INPUT_VEH_FLY_ATTACK_CAMERA = 0x2fba3f0b,
	INPUT_VEH_FLY_MOUSE_CONTROL_OVERRIDE = 0x6c9810a5,
	INPUT_VEH_SUB_MOUSE_CONTROL_OVERRIDE = 0x2caf327e,
	INPUT_VEH_SUB_TURN_LR = 0x627c4619,
	INPUT_VEH_SUB_TURN_LEFT_ONLY = 0x44e7e093,
	INPUT_VEH_SUB_TURN_RIGHT_ONLY = 0xe78a5a3c,
	INPUT_VEH_SUB_PITCH_UD = 0x469ce271,
	INPUT_VEH_SUB_PITCH_UP_ONLY = 0xf9ef072a,
	INPUT_VEH_SUB_PITCH_DOWN_ONLY = 0xba2d22aa,
	INPUT_VEH_SUB_THROTTLE_UP = 0xd28c446f,
	INPUT_VEH_SUB_THROTTLE_DOWN = 0xf5b2cefb,
	INPUT_VEH_SUB_ASCEND = 0xd7991f74,
	INPUT_VEH_SUB_DESCEND = 0x7d51de24,
	INPUT_VEH_SUB_TURN_HARD_LEFT = 0x64214d49,
	INPUT_VEH_SUB_TURN_HARD_RIGHT = 0xa44c0f83,
	INPUT_VEH_PUSHBIKE_PEDAL = 0xfd8d64a7,
	INPUT_VEH_PUSHBIKE_SPRINT = 0xf03ee151,
	INPUT_VEH_PUSHBIKE_FRONT_BRAKE = 0x585e942d,
	INPUT_VEH_PUSHBIKE_REAR_BRAKE = 0xf8cbafb5,
	INPUT_VEH_DRAFT_MOVE_UD = 0x23595cea,
	INPUT_VEH_DRAFT_TURN_LR = 0xa7dfae8a,
	INPUT_VEH_DRAFT_MOVE_UP_ONLY = 0x29a5e51e,
	INPUT_VEH_DRAFT_MOVE_DOWN_ONLY = 0x25493eb3,
	INPUT_VEH_DRAFT_TURN_LEFT_ONLY = 0x198afc64,
	INPUT_VEH_DRAFT_TURN_RIGHT_ONLY = 0x5e371ea7,
	INPUT_VEH_DRAFT_ACCELERATE = 0xe99d2b05,
	INPUT_VEH_DRAFT_BRAKE = 0xd648e48d,
	INPUT_VEH_DRAFT_AIM = 0xbdd5830d,
	INPUT_VEH_DRAFT_ATTACK = 0xf40ab198,
	INPUT_VEH_DRAFT_ATTACK2 = 0x886f12dd,
	INPUT_VEH_DRAFT_SWITCH_DRIVERS = 0x70b87844,
	INPUT_VEH_BOAT_TURN_LR = 0xd8dfcab3,
	INPUT_VEH_BOAT_TURN_LEFT_ONLY = 0x5bed7c91,
	INPUT_VEH_BOAT_TURN_RIGHT_ONLY = 0xf9780dfb,
	INPUT_VEH_BOAT_ACCELERATE = 0xb341e812,
	INPUT_VEH_BOAT_BRAKE = 0x428d5f39,
	INPUT_VEH_BOAT_AIM = 0x92f5f01e,
	INPUT_VEH_BOAT_ATTACK = 0x6866fa3a,
	INPUT_VEH_BOAT_ATTACK2 = 0x876096e9,
	INPUT_VEH_CAR_TURN_LR = 0x3bd38d43,
	INPUT_VEH_CAR_TURN_LEFT_ONLY = 0x07d1654c,
	INPUT_VEH_CAR_TURN_RIGHT_ONLY = 0x6e3c3649,
	INPUT_VEH_CAR_ACCELERATE = 0xb9f544b0,
	INPUT_VEH_CAR_BRAKE = 0xd1887b3f,
	INPUT_VEH_CAR_AIM = 0x6777b840,
	INPUT_VEH_CAR_ATTACK = 0x5572f386,
	INPUT_VEH_CAR_ATTACK2 = 0x5b763ad7,
	INPUT_VEH_HANDCART_ACCELERATE = 0xff3626fc,
	INPUT_VEH_HANDCART_BRAKE = 0x2d79d80a,
	INPUT_HORSE_MOVE_LR = 0x126796eb,
	INPUT_HORSE_MOVE_UD = 0x3bbdefef,
	INPUT_HORSE_MOVE_UP_ONLY = 0x699487bb,
	INPUT_HORSE_MOVE_DOWN_ONLY = 0x56f82045,
	INPUT_HORSE_MOVE_LEFT_ONLY = 0x86d773f6,
	INPUT_HORSE_MOVE_RIGHT_ONLY = 0x7e6b8612,
	INPUT_HORSE_SPECIAL = 0x70089459,
	INPUT_HORSE_GUN_LR = 0x3d99eec6,
	INPUT_HORSE_GUN_UD = 0xbff476f9,
	INPUT_HORSE_ATTACK = 0x60c81cde,
	INPUT_HORSE_ATTACK2 = 0xc904196d,
	INPUT_HORSE_SPRINT = 0x5aa007d7,
	INPUT_HORSE_STOP = 0xe16b9aad,
	INPUT_HORSE_EXIT = 0xcbdb82a8,
	INPUT_HORSE_LOOK_BEHIND = 0x81280569,
	INPUT_HORSE_JUMP = 0xe4d2ce1d,
	INPUT_HORSE_AIM = 0x61470051,
	INPUT_HORSE_COLLECT = 0x7d5b3717,
	INPUT_HITCH_ANIMAL = 0xa95e1468,
	INPUT_HORSE_COMMAND_FLEE = 0x4216af06,
	INPUT_HORSE_COMMAND_STAY = 0xae5dfded,
	INPUT_HORSE_COMMAND_FOLLOW = 0x763e4d27,
	INPUT_HORSE_MELEE = 0x1a3eabbb,
	INPUT_MELEE_HORSE_ATTACK_PRIMARY = 0x78ed2132,
	INPUT_MELEE_HORSE_ATTACK_SECONDARY = 0x162afeb8,
	INPUT_HORSE_COVER_TRANSITION = 0x2996dd15,
	INPUT_MELEE_ATTACK = 0xb2f377e8,
	INPUT_MELEE_MODIFIER = 0x1e7d7275,
	INPUT_MELEE_BLOCK = 0xb5eeefb7,
	INPUT_MELEE_GRAPPLE = 0x2277fae9,
	INPUT_MELEE_GRAPPLE_ATTACK = 0xadeaf48c,
	INPUT_MELEE_GRAPPLE_CHOKE = 0x018c47cf,
	INPUT_MELEE_GRAPPLE_REVERSAL = 0x91c9a817,
	INPUT_MELEE_GRAPPLE_BREAKOUT = 0xd0c1feff,
	INPUT_MELEE_GRAPPLE_STAND_SWITCH = 0xbe1f4699,
	INPUT_MELEE_GRAPPLE_MOUNT_SWITCH = 0x67ed272e,
	INPUT_PARACHUTE_DEPLOY = 0xebf53058,
	INPUT_PARACHUTE_DETACH = 0xffbff139,
	INPUT_PARACHUTE_TURN_LR = 0x8ec920bf,
	INPUT_PARACHUTE_TURN_LEFT_ONLY = 0xc4cf3322,
	INPUT_PARACHUTE_TURN_RIGHT_ONLY = 0x2bdba378,
	INPUT_PARACHUTE_PITCH_UD = 0xf0526228,
	INPUT_PARACHUTE_PITCH_UP_ONLY = 0x08bfea69,
	INPUT_PARACHUTE_PITCH_DOWN_ONLY = 0x7c3a4352,
	INPUT_PARACHUTE_BRAKE_LEFT = 0x272bd8ba,
	INPUT_PARACHUTE_BRAKE_RIGHT = 0x948b3ea7,
	INPUT_PARACHUTE_SMOKE = 0x2574fab0,
	INPUT_PARACHUTE_PRECISION_LANDING = 0xc675b8bd,
	INPUT_MAP = 0xe31c6a41,
	INPUT_SELECT_WEAPON_UNARMED = 0x1f6eeb0f,
	INPUT_SELECT_WEAPON_MELEE = 0x109e6852,
	INPUT_SELECT_WEAPON_HANDGUN = 0x184960e3,
	INPUT_SELECT_WEAPON_SHOTGUN = 0x76d3ea05,
	INPUT_SELECT_WEAPON_SMG = 0xcef1bb48,
	INPUT_SELECT_WEAPON_AUTO_RIFLE = 0x05eea9d0,
	INPUT_SELECT_WEAPON_SNIPER = 0x96c61fdf,
	INPUT_SELECT_WEAPON_HEAVY = 0x3d1675c3,
	INPUT_SELECT_WEAPON_SPECIAL = 0xc41ecef8,
	INPUT_SELECT_CHARACTER_MICHAEL = 0xea9256b8,
	INPUT_SELECT_CHARACTER_FRANKLIN = 0x8e8b08cb,
	INPUT_SELECT_CHARACTER_TREVOR = 0xb00cc093,
	INPUT_SELECT_CHARACTER_MULTIPLAYER = 0xdfb2b3b8,
	INPUT_SAVE_REPLAY_CLIP = 0x5b3af9e3,
	INPUT_SPECIAL_ABILITY_PC = 0x52e60a8b,
	INPUT_SELECT_QUICKSELECT_SIDEARMS_LEFT = 0xe6f612e4,
	INPUT_SELECT_QUICKSELECT_DUALWIELD = 0x1ce6d9eb,
	INPUT_SELECT_QUICKSELECT_SIDEARMS_RIGHT = 0x4f49cc4c,
	INPUT_SELECT_QUICKSELECT_UNARMED = 0x8f9f9e58,
	INPUT_SELECT_QUICKSELECT_MELEE_NO_UNARM = 0xbe22bfeb,
	INPUT_SELECT_QUICKSELECT_SECONDARY_LONG = 0x819d1c85,
	INPUT_SELECT_QUICKSELECT_THROWN = 0xb03a913b,
	INPUT_SELECT_QUICKSELECT_PRIMARY_LONGAR = 0x417914ef,
	INPUT_CELLPHONE_UP = 0xd2ee3b1e,
	INPUT_CELLPHONE_DOWN = 0x82196002,
	INPUT_CELLPHONE_LEFT = 0x3abbe990,
	INPUT_CELLPHONE_RIGHT = 0xd25efdcd,
	INPUT_CELLPHONE_SELECT = 0xdc264018,
	INPUT_CELLPHONE_CANCEL = 0xdd833287,
	INPUT_CELLPHONE_OPTION = 0xd2c28bb4,
	INPUT_CELLPHONE_EXTRA_OPTION = 0xbe354011,
	INPUT_CELLPHONE_SCROLL_FORWARD = 0xcb4e1798,
	INPUT_CELLPHONE_SCROLL_BACKWARD = 0x47cd0f3b,
	INPUT_CELLPHONE_CAMERA_FOCUS_LOCK = 0x5ac1805e,
	INPUT_CELLPHONE_CAMERA_GRID = 0xe18cc57a,
	INPUT_CELLPHONE_CAMERA_SELFIE = 0x6a440bfe,
	INPUT_CELLPHONE_CAMERA_DOF = 0x593db489,
	INPUT_CELLPHONE_CAMERA_EXPRESSION = 0xd7e274e7,
	INPUT_FRONTEND_DOWN = 0x05ca7c52,
	INPUT_FRONTEND_UP = 0x6319db71,
	INPUT_FRONTEND_LEFT = 0xa65ebab4,
	INPUT_FRONTEND_RIGHT = 0xdeb34313,
	INPUT_FRONTEND_RDOWN = 0x5734a944,
	INPUT_FRONTEND_RUP = 0xd7de6b1e,
	INPUT_FRONTEND_RLEFT = 0x39336a4f,
	INPUT_FRONTEND_RRIGHT = 0x5b48f938,
	INPUT_FRONTEND_AXIS_X = 0xfb56dd5b,
	INPUT_FRONTEND_AXIS_Y = 0x091178d0,
	INPUT_FRONTEND_SCROLL_AXIS_X = 0x3224bc55,
	INPUT_FRONTEND_SCROLL_AXIS_Y = 0x21651ad6,
	INPUT_FRONTEND_RIGHT_AXIS_X = 0x3d23549a,
	INPUT_FRONTEND_RIGHT_AXIS_Y = 0xeb4130df,
	INPUT_FRONTEND_PAUSE = 0xd82e0bd2,
	INPUT_FRONTEND_PAUSE_ALTERNATE = 0x4a903c11,
	INPUT_FRONTEND_ACCEPT = 0xc7b5340a,
	INPUT_FRONTEND_CANCEL = 0x156f7119,
	INPUT_FRONTEND_X = 0x6db8c62f,
	INPUT_FRONTEND_Y = 0x7c0162c0,
	INPUT_FRONTEND_LB = 0xe885ef16,
	INPUT_FRONTEND_RB = 0x17bec168,
	INPUT_FRONTEND_LT = 0x51104035,
	INPUT_FRONTEND_RT = 0x6fed71bc,
	INPUT_FRONTEND_LS = 0x43cda5b0,
	INPUT_FRONTEND_RS = 0x7da48d2a,
	INPUT_FRONTEND_LEADERBOARD = 0x9edc8d65,
	INPUT_FRONTEND_SOCIAL_CLUB = 0x064d1698,
	INPUT_FRONTEND_SOCIAL_CLUB_SECONDARY = 0xbdb8d6f3,
	INPUT_FRONTEND_DELETE = 0x4af4d473,
	INPUT_FRONTEND_ENDSCREEN_ACCEPT = 0x3e32fcee,
	INPUT_FRONTEND_ENDSCREEN_EXPAND = 0xc79bde9f,
	INPUT_FRONTEND_SELECT = 0x171910dc,
	INPUT_FRONTEND_PHOTO_MODE = 0x44cd301b,
	INPUT_FRONTEND_NAV_UP = 0x8cffe0a1,
	INPUT_FRONTEND_NAV_DOWN = 0x78114ab3,
	INPUT_FRONTEND_NAV_LEFT = 0x877f1027,
	INPUT_FRONTEND_NAV_RIGHT = 0x08bd758c,
	INPUT_FRONTEND_MAP_NAV_UP = 0x125a70e5,
	INPUT_FRONTEND_MAP_NAV_DOWN = 0xf8480eed,
	INPUT_FRONTEND_MAP_NAV_LEFT = 0xe0d75b00,
	INPUT_FRONTEND_MAP_NAV_RIGHT = 0x28725e5d,
	INPUT_FRONTEND_MAP_ZOOM = 0x6b359a27,
	INPUT_GAME_MENU_ACCEPT = 0x43dbf61f,
	INPUT_GAME_MENU_CANCEL = 0x308588e6,
	INPUT_GAME_MENU_OPTION = 0xfbd7b3e6,
	INPUT_GAME_MENU_EXTRA_OPTION = 0xd596cfb0,
	INPUT_GAME_MENU_UP = 0x911cb09e,
	INPUT_GAME_MENU_DOWN = 0x4403f97f,
	INPUT_GAME_MENU_LEFT = 0xad7fcc5b,
	INPUT_GAME_MENU_RIGHT = 0x65f9ec5b,
	INPUT_GAME_MENU_TAB_LEFT = 0xcbd5b26e,
	INPUT_GAME_MENU_TAB_RIGHT = 0x110ad1d2,
	INPUT_GAME_MENU_TAB_LEFT_SECONDARY = 0x26e9dc00,
	INPUT_GAME_MENU_TAB_RIGHT_SECONDARY = 0x8cc9cd42,
	INPUT_GAME_MENU_SCROLL_FORWARD = 0x81457a1a,
	INPUT_GAME_MENU_SCROLL_BACKWARD = 0x9da42644,
	INPUT_GAME_MENU_STICK_UP = 0x9ca97399,
	INPUT_GAME_MENU_STICK_DOWN = 0x63898d36,
	INPUT_GAME_MENU_STICK_LEFT = 0x06c089d4,
	INPUT_GAME_MENU_STICK_RIGHT = 0x5bdbe841,
	INPUT_GAME_MENU_RIGHT_STICK_UP = 0xf0232a03,
	INPUT_GAME_MENU_RIGHT_STICK_DOWN = 0xadb78673,
	INPUT_GAME_MENU_RIGHT_STICK_LEFT = 0x71e38966,
	INPUT_GAME_MENU_RIGHT_STICK_RIGHT = 0xe1cece4b,
	INPUT_GAME_MENU_LS = 0xa8f6de66,
	INPUT_GAME_MENU_RS = 0x89ea3fa5,
	INPUT_GAME_MENU_RIGHT_AXIS_X = 0x4685aa33,
	INPUT_GAME_MENU_RIGHT_AXIS_Y = 0x60c65eb4,
	INPUT_GAME_MENU_LEFT_AXIS_X = 0xf431d57a,
	INPUT_GAME_MENU_LEFT_AXIS_Y = 0x226eb1ef,
	INPUT_QUIT = 0x8e90c7bb,
	INPUT_DOCUMENT_PAGE_NEXT = 0xc97792b7,
	INPUT_DOCUMENT_PAGE_PREV = 0x20190ab4,
	INPUT_DOCUMENT_SCROLL = 0xac70f311,
	INPUT_DOCUMENT_SCROLL_UP_ONLY = 0x3d0c19ec,
	INPUT_DOCUMENT_SCROLL_DOWN_ONLY = 0xd72f3e29,
	INPUT_ATTACK2 = 0x0283c582,
	INPUT_PREV_WEAPON = 0xcc1075a7,
	INPUT_NEXT_WEAPON = 0xfd0f0c2c,
	INPUT_SNIPER_ZOOM_IN = 0xe4568aa1,
	INPUT_SNIPER_ZOOM_OUT = 0xe40ce39e,
	INPUT_SNIPER_ZOOM_IN_ALTERNATE = 0x3a9897c1,
	INPUT_SNIPER_ZOOM_OUT_ALTERNATE = 0xbc820489,
	INPUT_REPLAY_START_STOP_RECORDING = 0xdca6978e,
	INPUT_REPLAY_START_STOP_RECORDING_SECON = 0xb510bfe5,
	INPUT_REPLAY_MARKER_DELETE = 0xc7d2c51b,
	INPUT_REPLAY_CLIP_DELETE = 0xf6734e42,
	INPUT_REPLAY_PAUSE = 0x083137b2,
	INPUT_REPLAY_REWIND = 0xc1339a31,
	INPUT_REPLAY_FFWD = 0x609a27e8,
	INPUT_REPLAY_NEWMARKER = 0xf7c6da28,
	INPUT_REPLAY_RECORD = 0xad9a9c7c,
	INPUT_REPLAY_SCREENSHOT = 0x567faf34,
	INPUT_REPLAY_HIDEHUD = 0x7e479c7b,
	INPUT_REPLAY_STARTPOINT = 0x5dafaccf,
	INPUT_REPLAY_ENDPOINT = 0x4ef75bbd,
	INPUT_REPLAY_ADVANCE = 0x323aa450,
	INPUT_REPLAY_BACK = 0x088c7cd4,
	INPUT_REPLAY_TOOLS = 0x561a3387,
	INPUT_REPLAY_RESTART = 0x81b8bc9d,
	INPUT_REPLAY_SHOWHOTKEY = 0xeba2a41e,
	INPUT_REPLAY_CYCLEMARKERLEFT = 0x5c220959,
	INPUT_REPLAY_CYCLEMARKERRIGHT = 0xc69ae799,
	INPUT_REPLAY_FOVINCREASE = 0x5925a10d,
	INPUT_REPLAY_FOVDECREASE = 0x2b88d701,
	INPUT_REPLAY_CAMERAUP = 0x749eff0c,
	INPUT_REPLAY_CAMERADOWN = 0xa1fe9e2a,
	INPUT_REPLAY_SAVE = 0xebc60685,
	INPUT_REPLAY_TOGGLETIME = 0xe3fb91b3,
	INPUT_REPLAY_TOGGLETIPS = 0xc8a1de20,
	INPUT_REPLAY_PREVIEW = 0x58ac1355,
	INPUT_REPLAY_TOGGLE_TIMELINE = 0xf8629909,
	INPUT_REPLAY_TIMELINE_PICKUP_CLIP = 0xd2454f90,
	INPUT_REPLAY_TIMELINE_DUPLICATE_CLIP = 0x4146a033,
	INPUT_REPLAY_TIMELINE_PLACE_CLIP = 0x60726f50,
	INPUT_REPLAY_CTRL = 0xd88b47e7,
	INPUT_REPLAY_TIMELINE_SAVE = 0x65d70e9d,
	INPUT_REPLAY_PREVIEW_AUDIO = 0x79022218,
	INPUT_REPLAY_ACTION_REPLAY_START = 0xd9961107,
	INPUT_REPLAY_ACTION_REPLAY_CANCEL = 0x93776cae,
	INPUT_REPLAY_RECORDING_START = 0xfd28d0f4,
	INPUT_REPLAY_RECORDING_STOP = 0xdb16e702,
	INPUT_REPLAY_SAVE_SNAPSHOT = 0xefec8fde,
	INPUT_VEH_DRIVE_LOOK = 0xa2117c9a,
	INPUT_VEH_DRIVE_LOOK2 = 0x55ac04e5,
	INPUT_VEH_FLY_ATTACK2 = 0x4d83147c,
	INPUT_RADIO_WHEEL_UD = 0x14c7291d,
	INPUT_RADIO_WHEEL_LR = 0xf9fa6bc8,
	INPUT_VEH_SLOWMO_UD = 0xf1f9cd26,
	INPUT_VEH_SLOWMO_UP_ONLY = 0x2b981f4f,
	INPUT_VEH_SLOWMO_DOWN_ONLY = 0x642de054,
	INPUT_MAP_POI = 0x9bee9213,
	INPUT_INTERACT_LOCKON = 0xf8982f00,
	INPUT_INTERACT_LOCKON_NEG = 0x26a18f47,
	INPUT_INTERACT_LOCKON_POS = 0xf63a17f9,
	INPUT_INTERACT_LOCKON_ROB = 0x9fa5ad07,
	INPUT_INTERACT_LOCKON_Y = 0x09a92b8b,
	INPUT_INTERACT_LOCKON_A = 0xd10a3a36,
	INPUT_INTERACT_NEG = 0x424bd2d2,
	INPUT_INTERACT_POS = 0xf6bb7378,
	INPUT_INTERACT_OPTION1 = 0x760a9c6f,
	INPUT_INTERACT_OPTION2 = 0x84543902,
	INPUT_INTERACT_ANIMAL = 0xa1abb953,
	INPUT_INTERACT_LOCKON_ANIMAL = 0x5415be48,
	INPUT_INTERACT_LEAD_ANIMAL = 0x17d3bff5,
	INPUT_INTERACT_LOCKON_DETACH_HORSE = 0xf5c4701b,
	INPUT_INTERACT_HORSE_CARE = 0xb0bce5d6,
	INPUT_INTERACT_LOCKON_CALL_ANIMAL = 0x71f89bbc,
	INPUT_INTERACT_LOCKON_TRACK_ANIMAL = 0xe2473bf0,
	INPUT_INTERACT_LOCKON_TARGET_INFO = 0x31219490,
	INPUT_INTERACT_LOCKON_STUDY_BINOCULARS = 0xb3f388bc,
	INPUT_INTERACT_WILD_ANIMAL = 0x89f3d2e0,
	INPUT_INTERACT_HORSE_FEED = 0x0d55a0f0,
	INPUT_INTERACT_HORSE_BRUSH = 0x63a38f2c,
	INPUT_EMOTE_ACTION = 0x13c42bb2,
	INPUT_EMOTE_TAUNT = 0x470dc190,
	INPUT_EMOTE_GREET = 0x72bad5aa,
	INPUT_EMOTE_COMM = 0x661857b3,
	INPUT_EMOTE_DANCE = 0xf311100c,
	INPUT_EMOTE_TWIRL_GUN_HOLD = 0x04fb8191,
	INPUT_EMOTE_TWIRL_GUN_VAR_A = 0x6990bddf,
	INPUT_EMOTE_TWIRL_GUN_VAR_B = 0x52d29063,
	INPUT_EMOTE_TWIRL_GUN_VAR_C = 0xbc2ae312,
	INPUT_EMOTE_TWIRL_GUN_VAR_D = 0xae69478f,
	INPUT_QUICK_EQUIP_ITEM = 0x6070d032,
	INPUT_MINIGAME_BUILDING_CAMERA_NEXT = 0x16b0eef8,
	INPUT_MINIGAME_BUILDING_CAMERA_PREV = 0x5f97b231,
	INPUT_MINIGAME_BUILDING_HAMMER = 0xfa91aecd,
	INPUT_CURSOR_ACCEPT_DOUBLE_CLICK = 0x1c559f2e,
	INPUT_CURSOR_ACCEPT_HOLD = 0xe474f150,
	INPUT_CURSOR_ACCEPT = 0x9d2aea88,
	INPUT_CURSOR_CANCEL = 0x27568539,
	INPUT_CURSOR_CANCEL_DOUBLE_CLICK = 0x9cb4ecce,
	INPUT_CURSOR_CANCEL_HOLD = 0xd7f70f36,
	INPUT_CURSOR_X = 0xd6c4ecdc,
	INPUT_CURSOR_Y = 0xe4130778,
	INPUT_CURSOR_SCROLL_UP = 0x62800c92,
	INPUT_CURSOR_SCROLL_DOWN = 0x8bde7443,
	INPUT_CURSOR_SCROLL_CLICK = 0x6aa8a71b,
	INPUT_CURSOR_SCROLL_DOUBLE_CLICK = 0xe1b6ed6d,
	INPUT_CURSOR_SCROLL_HOLD = 0x5484dbdd,
	INPUT_CURSOR_FORWARD_CLICK = 0x11dbbab9,
	INPUT_CURSOR_FORWARD_DOUBLE_CLICK = 0x9805d715,
	INPUT_CURSOR_FORWARD_HOLD = 0x7630c9a1,
	INPUT_CURSOR_BACKWARD_CLICK = 0x9af38793,
	INPUT_CURSOR_BACKWARD_DOUBLE_CLICK = 0xa14ba1fc,
	INPUT_CURSOR_BACKWARD_HOLD = 0x01aa9fa1,
	INPUT_ENTER_CHEAT_CODE = 0x7bf65ac8,
	INPUT_INTERACTION_MENU = 0xcc510e59,
	INPUT_MP_TEXT_CHAT_ALL = 0x9720fcee,
	INPUT_MP_TEXT_CHAT_TEAM = 0x9098ad9d,
	INPUT_MP_TEXT_CHAT_FRIENDS = 0x7098ac73,
	INPUT_MP_TEXT_CHAT_CREW = 0x8142fa92,
	INPUT_PUSH_TO_TALK = 0x4bc9dabb,
	INPUT_CREATOR_LS = 0x339f3730,
	INPUT_CREATOR_RS = 0xd8cf0c95,
	INPUT_CREATOR_LT = 0x446258b6,
	INPUT_CREATOR_RT = 0x3c3dd371,
	INPUT_CREATOR_MENU_TOGGLE = 0x85d24405,
	INPUT_CREATOR_ACCEPT = 0x2cd5343e,
	INPUT_CREATOR_MENU_UP = 0xbcd1444b,
	INPUT_CREATOR_MENU_DOWN = 0x97410755,
	INPUT_CREATOR_MENU_LEFT = 0xec6a30aa,
	INPUT_CREATOR_MENU_RIGHT = 0x19d8334c,
	INPUT_CREATOR_MENU_ACCEPT = 0xfb9c3231,
	INPUT_CREATOR_MENU_CANCEL = 0xbb3fc460,
	INPUT_CREATOR_MENU_FUNCTION = 0x5a03b3f3,
	INPUT_CREATOR_MENU_EXTRA_FUNCTION = 0xe6b8f103,
	INPUT_CREATOR_MENU_SELECT = 0x0984e40a,
	INPUT_CREATOR_PLACE = 0xd74cacad,
	INPUT_CREATOR_DELETE = 0x3f4dc0ef,
	INPUT_CREATOR_DROP = 0x414034d5,
	INPUT_CREATOR_FUNCTION = 0xb05fda25,
	INPUT_CREATOR_ROTATE_RIGHT = 0x9d75674e,
	INPUT_CREATOR_ROTATE_LEFT = 0xd41e9c2a,
	INPUT_CREATOR_GRAB = 0x338a0d45,
	INPUT_CREATOR_SWITCH_CAM = 0x16ccfec6,
	INPUT_CREATOR_ZOOM_IN = 0x335d8d76,
	INPUT_CREATOR_ZOOM_OUT = 0x24a42f93,
	INPUT_CREATOR_RAISE = 0x0d0fb9b1,
	INPUT_CREATOR_LOWER = 0x1bde2eb3,
	INPUT_CREATOR_SEARCH = 0xf55864cd,
	INPUT_CREATOR_MOVE_UD = 0x82428676,
	INPUT_CREATOR_MOVE_LR = 0x59753edc,
	INPUT_CREATOR_LOOK_UD = 0x55ea24f3,
	INPUT_CREATOR_LOOK_LR = 0xaeb2a9c7,
	INPUT_CUT_FREE = 0xd2cc4644,
	INPUT_DROP = 0xd2928083,
	INPUT_PICKUP_CARRIABLE = 0xeb2ac491,
	INPUT_PICKUP_CARRIABLE2 = 0xbe8593af,
	INPUT_PLACE_CARRIABLE_ONTO_PARENT = 0x7d326951,
	INPUT_PICKUP_CARRIABLE_FROM_PARENT = 0xa1202c7b,
	INPUT_MERCY_KILL = 0x956c2a0e,
	INPUT_REVIVE = 0x43f2959c,
	INPUT_HOGTIE = 0xd9c50532,
	INPUT_CARRIABLE_SUICIDE = 0x6e9734e8,
	INPUT_CARRIABLE_BREAK_FREE = 0x295175bf,
	INPUT_INTERACT_HIT_CARRIABLE = 0x0522b243,
	INPUT_LOOT = 0x41ac83d1,
	INPUT_LOOT2 = 0x399c6619,
	INPUT_LOOT3 = 0x27d1c284,
	INPUT_LOOT_VEHICLE = 0x14db6c5e,
	INPUT_LOOT_AMMO = 0xc23d7b9e,
	INPUT_BREAK_VEHICLE_LOCK = 0x97c71b28,
	INPUT_LOOT_ALIVE_COMPONENT = 0xff8109d8,
	INPUT_FEED_INTERACT = 0xa8e3f467,
	INPUT_SADDLE_TRANSFER = 0x73a8fd83,
	INPUT_SHOP_BUY = 0xdff812f9,
	INPUT_SHOP_SELL = 0x6d1319be,
	INPUT_SHOP_SPECIAL = 0xea150e72,
	INPUT_SHOP_BOUNTY = 0xd3ecf82f,
	INPUT_SHOP_INSPECT = 0x5e723d8c,
	INPUT_SHOP_CHANGE_CURRENCY = 0x90fa19ab,
	INPUT_QUICK_USE_ITEM = 0xc1989f95,
	INPUT_PROMPT_PAGE_NEXT = 0x8cf90a9d,
	INPUT_FRONTEND_TOUCH_ZOOM_FACTOR = 0xe7f89c38,
	INPUT_FRONTEND_TOUCH_ZOOM_X = 0x16661ad0,
	INPUT_FRONTEND_TOUCH_ZOOM_Y = 0x253db87f,
	INPUT_FRONTEND_TOUCH_DRAG_X = 0xec93548e,
	INPUT_FRONTEND_TOUCH_DRAG_Y = 0x9ac130eb,
	INPUT_FRONTEND_TOUCH_TAP_X = 0xc10e180a,
	INPUT_FRONTEND_TOUCH_TAP_Y = 0xcf4b3484,
	INPUT_FRONTEND_TOUCH_DOUBLE_TAP_X = 0x1661fab0,
	INPUT_FRONTEND_TOUCH_DOUBLE_TAP_Y = 0x96e87bbf,
	INPUT_FRONTEND_TOUCH_HOLD_X = 0x0ff17f1d,
	INPUT_FRONTEND_TOUCH_HOLD_Y = 0x398ed257,
	INPUT_FRONTEND_TOUCH_SWIPE_UP_X = 0x0b71d439,
	INPUT_FRONTEND_TOUCH_SWIPE_UP_Y = 0x19ca70ea,
	INPUT_FRONTEND_TOUCH_SWIPE_DOWN_X = 0xe3b30955,
	INPUT_FRONTEND_TOUCH_SWIPE_DOWN_Y = 0xbdff3dea,
	INPUT_FRONTEND_TOUCH_SWIPE_LEFT_X = 0x2545b0de,
	INPUT_FRONTEND_TOUCH_SWIPE_LEFT_Y = 0xd43d0ece,
	INPUT_FRONTEND_TOUCH_SWIPE_RIGHT_X = 0xeab68397,
	INPUT_FRONTEND_TOUCH_SWIPE_RIGHT_Y = 0x675b7ce3,
	INPUT_MULTIPLAYER_INFO_PLAYERS = 0x9c68ce34,
	INPUT_MULTIPLAYER_DEAD_SWITCH_RESPAWN = 0xb4f298ba,
	INPUT_MULTIPLAYER_DEAD_INFORM_LAW = 0x6816a38e,
	INPUT_MULTIPLAYER_DEAD_RESPAWN = 0x18987353,
	INPUT_MULTIPLAYER_DEAD_DUEL = 0xf875fc78,
	INPUT_MULTIPLAYER_DEAD_PARLEY = 0x4d11fe01,
	INPUT_MULTIPLAYER_DEAD_FEUD = 0xb4a11066,
	INPUT_MULTIPLAYER_DEAD_LEADER_FEUD = 0xcc18f960,
	INPUT_MULTIPLAYER_DEAD_PRESS_CHARGES = 0xe50dca13,
	INPUT_MULTIPLAYER_RACE_RESPAWN = 0x014ca044,
	INPUT_MULTIPLAYER_PREDATOR_ABILITY = 0xc5cf41b2,
	INPUT_MULTIPLAYER_SPECTATE_PLAYER_NEXT = 0xba065692,
	INPUT_MULTIPLAYER_SPECTATE_PLAYER_PREV = 0x5092bf47,
	INPUT_MULTIPLAYER_SPECTATE_HIDE_HUD = 0x7dba5d49,
	INPUT_MULTIPLAYER_SPECTATE_PLAYER_OPTIO = 0x5cff7675,
	INPUT_MULTIPLAYER_LEADERBOARD_SCROLL_UD = 0xa917d24b,
	INPUT_MINIGAME_QUIT = 0xe9094ba0,
	INPUT_MINIGAME_INCREASE_BET = 0xc7cb8d5f,
	INPUT_MINIGAME_DECREASE_BET = 0xd3ebf425,
	INPUT_MINIGAME_CHANGE_BET_AXIS_Y = 0xbdc733ee,
	INPUT_MINIGAME_PLACE_BET = 0x410b0b2e,
	INPUT_MINIGAME_CLEAR_BET = 0x4a21c66b,
	INPUT_MINIGAME_HELP = 0x9384e0a8,
	INPUT_MINIGAME_HELP_PREV = 0xc5f53156,
	INPUT_MINIGAME_HELP_NEXT = 0x83608ac0,
	INPUT_MINIGAME_REPLAY = 0x985243b7,
	INPUT_MINIGAME_NEW_GAME = 0x5d1788ff,
	INPUT_MINIGAME_POKER_SKIP = 0x646a7792,
	INPUT_MINIGAME_POKER_CALL = 0xdab9ee72,
	INPUT_MINIGAME_POKER_FOLD = 0x49b4ad1e,
	INPUT_MINIGAME_POKER_CHECK = 0x206b2087,
	INPUT_MINIGAME_POKER_CHECK_FOLD = 0x72a9d1f7,
	INPUT_MINIGAME_POKER_BET = 0xa9883369,
	INPUT_MINIGAME_POKER_HOLE_CARDS = 0xc2b1193a,
	INPUT_MINIGAME_POKER_BOARD_CARDS = 0x03753498,
	INPUT_MINIGAME_POKER_SKIP_TUTORIAL = 0xb568bcd0,
	INPUT_MINIGAME_POKER_SHOW_POSSIBLE_HAND = 0x32fd7547,
	INPUT_MINIGAME_POKER_YOUR_CARDS = 0xf923b337,
	INPUT_MINIGAME_POKER_COMMUNITY_CARDS = 0xe402b898,
	INPUT_MINIGAME_POKER_CHEAT_LR = 0x2330f517,
	INPUT_MINIGAME_FISHING_RESET_CAST = 0xb40a9bdb,
	INPUT_MINIGAME_FISHING_RELEASE_FISH = 0xf14fd435,
	INPUT_MINIGAME_FISHING_KEEP_FISH = 0x52c5c34a,
	INPUT_MINIGAME_FISHING_HOOK = 0xa1cd103a,
	INPUT_MINIGAME_FISHING_LEFT_AXIS_X = 0x69b10623,
	INPUT_MINIGAME_FISHING_LEFT_AXIS_Y = 0x09bf4645,
	INPUT_MINIGAME_FISHING_RIGHT_AXIS_X = 0x4fd4e558,
	INPUT_MINIGAME_FISHING_RIGHT_AXIS_Y = 0x95f2f193,
	INPUT_MINIGAME_FISHING_LEAN_LEFT = 0x0d4c3aba,
	INPUT_MINIGAME_FISHING_LEAN_RIGHT = 0x05074a9b,
	INPUT_MINIGAME_FISHING_QUICK_EQUIP = 0x25f525cd,
	INPUT_MINIGAME_FISHING_REEL_SPEED_UP = 0x2fa915f5,
	INPUT_MINIGAME_FISHING_REEL_SPEED_DOWN = 0xd7af56a0,
	INPUT_MINIGAME_FISHING_REEL_SPEED_AXIS = 0x49c73cb2,
	INPUT_MINIGAME_FISHING_MANUAL_REEL_IN = 0xa303f462,
	INPUT_MINIGAME_FISHING_MANUAL_REEL_OUT_ = 0x3f9fc774,
	INPUT_MINIGAME_CRACKPOT_BOAT_SHOW_CONTR = 0x32c98e8d,
	INPUT_MINIGAME_DOMINOES_VIEW_DOMINOES = 0x88f8b6b1,
	INPUT_MINIGAME_DOMINOES_VIEW_MOVES = 0x7733cf2c,
	INPUT_MINIGAME_DOMINOES_PLAY_TILE = 0x95f5bb7c,
	INPUT_MINIGAME_DOMINOES_SKIP_DEAL = 0xc5e622d7,
	INPUT_MINIGAME_DOMINOES_MOVE_LEFT_ONLY = 0xfddd89d4,
	INPUT_MINIGAME_DOMINOES_MOVE_RIGHT_ONLY = 0x7d5187c9,
	INPUT_MINIGAME_DOMINOES_MOVE_UP_ONLY = 0xc6ab8cb3,
	INPUT_MINIGAME_DOMINOES_MOVE_DOWN_ONLY = 0xfd9fc86d,
	INPUT_MINIGAME_BLACKJACK_HAND_VIEW = 0x03f1e7cb,
	INPUT_MINIGAME_BLACKJACK_TABLE_VIEW = 0xade09435,
	INPUT_MINIGAME_BLACKJACK_BET_AXIS_Y = 0x3d2ea092,
	INPUT_MINIGAME_BLACKJACK_BET = 0x661d8a31,
	INPUT_MINIGAME_BLACKJACK_DECLINE = 0xcd7ddf9b,
	INPUT_MINIGAME_BLACKJACK_STAND = 0x31260507,
	INPUT_MINIGAME_BLACKJACK_HIT = 0xa8142713,
	INPUT_MINIGAME_BLACKJACK_DOUBLE = 0x74486ca4,
	INPUT_MINIGAME_BLACKJACK_SPLIT = 0x432b111f,
	INPUT_MINIGAME_FFF_A = 0x0e717dc6,
	INPUT_MINIGAME_FFF_B = 0x1bc81873,
	INPUT_MINIGAME_FFF_X = 0x65f0acdf,
	INPUT_MINIGAME_FFF_Y = 0x73ad4858,
	INPUT_MINIGAME_FFF_ZOOM = 0x61e4cacc,
	INPUT_MINIGAME_FFF_SKIP_TURN = 0x3073681b,
	INPUT_MINIGAME_FFF_CYCLE_SEQUENCE_LEFT = 0x29a3550e,
	INPUT_MINIGAME_FFF_CYCLE_SEQUENCE_RIGHT = 0x7b5b896d,
	INPUT_MINIGAME_FFF_FLOURISH_CONTINUE = 0x6fc9de68,
	INPUT_MINIGAME_FFF_FLOURISH_END = 0xf7750b25,
	INPUT_MINIGAME_FFF_PRACTICE = 0xca379f82,
	INPUT_MINIGAME_MILKING_LEFT_ACTION = 0xff4b2ada,
	INPUT_MINIGAME_MILKING_RIGHT_ACTION = 0x30be7cf2,
	INPUT_MINIGAME_LEFT_TRIGGER = 0x7ec33553,
	INPUT_MINIGAME_RIGHT_TRIGGER = 0xbe78b715,
	INPUT_MINIGAME_ACTION_LEFT = 0x0a1efc09,
	INPUT_MINIGAME_ACTION_RIGHT = 0x16d70379,
	INPUT_MINIGAME_ACTION_UP = 0xf5a13a0d,
	INPUT_MINIGAME_ACTION_DOWN = 0xf601bcfc,
	INPUT_STICKY_FEED_ACCEPT = 0xf4dd4c67,
	INPUT_STICKY_FEED_CANCEL = 0x0cfb963f,
	INPUT_STICKY_FEED_X = 0xbd1d94a1,
	INPUT_STICKY_FEED_Y = 0xc85bab1d,
	INPUT_CAMERA_PUT_AWAY = 0x5fc770ea,
	INPUT_CAMERA_BACK = 0xa4bd74a5,
	INPUT_CAMERA_TAKE_PHOTO = 0x44fa14c2,
	INPUT_CAMERA_CONTEXT_GALLERY = 0xe8337356,
	INPUT_CAMERA_HANDHELD_USE = 0x776f65e9,
	INPUT_CAMERA_DOF = 0x3003f9dc,
	INPUT_CAMERA_SELFIE = 0xac5922ea,
	INPUT_CAMERA_ZOOM = 0x47ec4c22,
	INPUT_CAMERA_POSE_NEXT = 0xf810fb35,
	INPUT_CAMERA_POSE_PREV = 0x8d5be9d1,
	INPUT_CAMERA_EXPRESSION_NEXT = 0xcfa703d3,
	INPUT_CAMERA_EXPRESSION_PREV = 0x07b6435d,
	INPUT_TITHING_INCREASE_AMOUNT = 0x24f37ab5,
	INPUT_TITHING_DECREASE_AMOUNT = 0xceff5c13,
	INPUT_BREAK_DOOR_LOCK = 0x77110b0a,
	INPUT_INTERROGATE_QUESTION = 0xa1aa2d8d,
	INPUT_INTERROGATE_BEAT = 0x6e1e0d62,
	INPUT_INTERROGATE_KILL = 0x81b2e311,
	INPUT_INTERROGATE_RELEASE = 0x3c22ef0e,
	INPUT_CAMP_BED_INSPECT = 0xc67e13bb,
	INPUT_PC_FREE_LOOK = 0x8aaa0ad4,
	INPUT_MINIGAME_BARTENDER_RAISE_GLASS = 0xa13460f5,
	INPUT_MINIGAME_BARTENDER_RAISE_BOTTLE = 0xf0a25112,
	INPUT_MINIGAME_BARTENDER_POUR = 0xcabc2460,
	INPUT_MINIGAME_BARTENDER_SERVE = 0xdc03b043,
	INPUT_PHOTO_MODE = 0x3c0a40f2,
	INPUT_PHOTO_MODE_PC = 0x35957f6c,
	INPUT_PHOTO_MODE_CHANGE_CAMERA = 0x9f06b29c,
	INPUT_PHOTO_MODE_MOVE_LR = 0x4f136512,
	INPUT_PHOTO_MODE_MOVE_LEFT_ONLY = 0x311353eb,
	INPUT_PHOTO_MODE_MOVE_RIGHT_ONLY = 0x5357a7f5,
	INPUT_PHOTO_MODE_MOVE_UD = 0xec001315,
	INPUT_PHOTO_MODE_MOVE_UP_ONLY = 0x315d57e6,
	INPUT_PHOTO_MODE_MOVE_DOWN_ONLY = 0x4ebcc409,
	INPUT_PHOTO_MODE_RESET = 0xa209bd57,
	INPUT_PHOTO_MODE_LENSE_NEXT = 0xb138d899,
	INPUT_PHOTO_MODE_LENSE_PREV = 0x06a057f8,
	INPUT_PHOTO_MODE_ROTATE_LEFT = 0x2eea1d2a,
	INPUT_PHOTO_MODE_ROTATE_RIGHT = 0x96e70854,
	INPUT_PHOTO_MODE_TOGGLE_HUD = 0x7f9055f5,
	INPUT_PHOTO_MODE_VIEW_PHOTOS = 0xdce96d67,
	INPUT_PHOTO_MODE_TAKE_PHOTO = 0xa190aac7,
	INPUT_PHOTO_MODE_BACK = 0x2f13ec9a,
	INPUT_PHOTO_MODE_SWITCH_MODE = 0x8f32e2eb,
	INPUT_PHOTO_MODE_FILTER_INTENSITY = 0xfe6dd360,
	INPUT_PHOTO_MODE_FILTER_INTENSITY_UP = 0x2286d46b,
	INPUT_PHOTO_MODE_FILTER_INTENSITY_DOWN = 0xb341f407,
	INPUT_PHOTO_MODE_FOCAL_LENGTH = 0x886aba4e,
	INPUT_PHOTO_MODE_FOCAL_LENGTH_UP_ONLY = 0xfafbd66a,
	INPUT_PHOTO_MODE_FOCAL_LENGTH_DOWN_ONLY = 0x01ebfabd,
	INPUT_PHOTO_MODE_FILTER_NEXT = 0x699f8d08,
	INPUT_PHOTO_MODE_FILTER_PREV = 0x4f640885,
	INPUT_PHOTO_MODE_ZOOM_IN = 0x5b843bc9,
	INPUT_PHOTO_MODE_ZOOM_OUT = 0x2354d2e6,
	INPUT_PHOTO_MODE_DOF = 0x26b9ae6a,
	INPUT_PHOTO_MODE_DOF_UP_ONLY = 0x87b07940,
	INPUT_PHOTO_MODE_DOF_DOWN_ONLY = 0x047099f1,
	INPUT_PHOTO_MODE_EXPOSURE_UP = 0xc64e2284,
	INPUT_PHOTO_MODE_EXPOSURE_DOWN = 0xad07a5a5,
	INPUT_PHOTO_MODE_EXPOSURE_LOCK = 0x9de08d71,
	INPUT_PHOTO_MODE_CONTRAST = 0x483f707f,
	INPUT_PHOTO_MODE_CONTRAST_UP_ONLY = 0x5d2dd717,
	INPUT_PHOTO_MODE_CONTRAST_DOWN_ONLY = 0x30811620,
	INPUT_CRAFTING_EAT = 0xb99a9cad,
	INPUT_CAMP_SETUP_TENT = 0x0b1be2e8,
	INPUT_MINIGAME_ACTION_X = 0x1d927df2,
	INPUT_DEPRECATED_ABOVE = 0xc1d24f92,
	INPUT_SCRIPT_LEFT_AXIS_X = 0x1f8eef84,
	INPUT_SCRIPT_LEFT_AXIS_Y = 0x5418d8ab,
	INPUT_SCRIPT_RIGHT_AXIS_X = 0xa6b769e9,
	INPUT_SCRIPT_RIGHT_AXIS_Y = 0x27a5ebc0,
	INPUT_SCRIPT_RUP = 0x771d6e13,
	INPUT_SCRIPT_RDOWN = 0x37933367,
	INPUT_SCRIPT_RLEFT = 0xa4db0458,
	INPUT_SCRIPT_RRIGHT = 0x22a3b800,
	INPUT_SCRIPT_LB = 0xe624c062,
	INPUT_SCRIPT_RB = 0x91e9231c,
	INPUT_SCRIPT_LT = 0x2b314a1e,
	INPUT_SCRIPT_RT = 0x26e9cd17,
	INPUT_SCRIPT_LS = 0xaaddc975,
	INPUT_SCRIPT_RS = 0xd04e9fe2,
	INPUT_SCRIPT_PAD_UP = 0x0dc15add,
	INPUT_SCRIPT_PAD_DOWN = 0xb1da5574,
	INPUT_SCRIPT_PAD_LEFT = 0x1af81d9e,
	INPUT_SCRIPT_PAD_RIGHT = 0x82a9b758,
	INPUT_SCRIPT_SELECT = 0xc8722109,
	INPUT_SCRIPTED_FLY_UD = 0xaeb4b1de,
	INPUT_SCRIPTED_FLY_LR = 0xf1111e4a,
	INPUT_SCRIPTED_FLY_ZUP = 0x639b9fc9,
	INPUT_SCRIPTED_FLY_ZDOWN = 0x9c5e030c,

};


enum Buttons
{

	/*Button_Triangle = INPUT_SCRIPT_RUP,//Y
	Button_X = INPUT_SCRIPT_RDOWN,//A
	Button_Square = INPUT_SCRIPT_RLEFT,//X    INPUT_FRONTEND_X ???
	Button_Circle = INPUT_SCRIPT_RRIGHT,//B
	Button_L1 = INPUT_SCRIPT_LB,
	Button_R1 = INPUT_SCRIPT_RB,
	Button_L2 = INPUT_SCRIPT_LT,
	Button_R2 = INPUT_SCRIPT_RT,
	Button_L3 = INPUT_SCRIPT_LS,
	Button_R3 = INPUT_SCRIPT_RS,
	Dpad_Up = INPUT_SCRIPT_PAD_UP,
	Dpad_Down = INPUT_SCRIPT_PAD_DOWN,
	Dpad_Left = INPUT_SCRIPT_PAD_LEFT,
	Dpad_Right = INPUT_SCRIPT_PAD_RIGHT,*/


	Button_Triangle = INPUT_FRONTEND_RUP,//Y
	Button_X = INPUT_FRONTEND_RDOWN,//A
	Button_Square = INPUT_FRONTEND_RLEFT,//X    INPUT_FRONTEND_X ???
	Button_Circle = INPUT_FRONTEND_RRIGHT,//B
	Button_L1 = INPUT_FRONTEND_LB,
	Button_R1 = INPUT_FRONTEND_RB,
	Button_L2 = INPUT_FRONTEND_LT,
	Button_R2 = INPUT_FRONTEND_RT,
	Button_L3 = INPUT_FRONTEND_LS,
	Button_R3 = INPUT_FRONTEND_RS,
	Dpad_Up = INPUT_FRONTEND_UP,
	Dpad_Down = INPUT_FRONTEND_DOWN,
	Dpad_Left = INPUT_FRONTEND_LEFT,
	Dpad_Right = INPUT_FRONTEND_RIGHT,


	/*
	SET_INPUT_EXCLUSIVE(2, INPUT_AIM);
SET_INPUT_EXCLUSIVE(2, INPUT_ATTACK);
SET_INPUT_EXCLUSIVE(2, INPUT_FRONTEND_LT);
SET_INPUT_EXCLUSIVE(2, INPUT_FRONTEND_RT);
SET_INPUT_EXCLUSIVE(2, INPUT_FRONTEND_LB);
SET_INPUT_EXCLUSIVE(2, INPUT_FRONTEND_RB);
SET_INPUT_EXCLUSIVE(2, INPUT_FRONTEND_LEFT);
SET_INPUT_EXCLUSIVE(2, INPUT_FRONTEND_RIGHT);
SET_INPUT_EXCLUSIVE(2, INPUT_FRONTEND_DOWN);
SET_INPUT_EXCLUSIVE(2, INPUT_FRONTEND_UP);
	*/
};