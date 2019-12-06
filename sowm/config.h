#ifndef CONFIG_H
#define CONFIG_H

#define MOD Mod4Mask

const char* menu[]    = {"rofi", "-show", "drun",           0};
const char* term[]    = {"termite",                         0};
const char* scrot[]   = {"scrot",                           0};
const char* briup[]   = {"xbacklight", "-inc", "10",        0};
const char* bridown[] = {"xbacklight", "-dec", "10",        0};
const char* musnext[] = {"playerctl", "-a", "next",         0};
const char* musprev[] = {"playerctl", "-a", "previous",     0};
const char* musstop[] = {"playerctl", "-a", "stop",         0};
const char* musplay[] = {"playerctl", "-a", "play-pause",   0};
const char* voldown[] = {"amixer", "sset", "Master", "5%-",                 0};
const char* volup[]   = {"amixer", "sset", "Master", "5%+",                 0};
const char* volmute[] = {"amixer", "sset", "Master", "toggle",              0};
const char* colors[]  = {"walset", "-i", "/home/tom/Pictures/Wallpapers",   0};

static struct key keys[] = {
    {MOD,      XK_q,   win_kill,   {0}},
    {MOD,      XK_c,   win_center, {.w = 0}},
    {MOD,      XK_f,   win_fs,     {0}},
    {Mod1Mask, XK_Tab, win_next,   {0}},

    {MOD, XK_d,      run, {.com = menu}},
    {MOD, XK_w,      run, {.com = colors}},
    {MOD, XK_p,      run, {.com = scrot}},
    {MOD, XK_Return, run, {.com = term}},

    {0,   XF86XK_AudioLowerVolume,  run, {.com = voldown}},
    {0,   XF86XK_AudioRaiseVolume,  run, {.com = volup}},
    {0,   XF86XK_AudioMute,         run, {.com = volmute}},
    {0,   XF86XK_AudioNext,         run, {.com = musnext}},
    {0,   XF86XK_AudioPrev,         run, {.com = musprev}},
    {0,   XF86XK_AudioStop,         run, {.com = musstop}},
    {0,   XF86XK_AudioPlay,         run, {.com = musplay}},
    {0,   XF86XK_MonBrightnessUp,   run, {.com = briup}},
    {0,   XF86XK_MonBrightnessDown, run, {.com = bridown}},

    {MOD,           XK_1, ws_go,     {.i = 1}},
    {MOD|ShiftMask, XK_1, win_to_ws, {.i = 1}},
    {MOD,           XK_2, ws_go,     {.i = 2}},
    {MOD|ShiftMask, XK_2, win_to_ws, {.i = 2}},
    {MOD,           XK_3, ws_go,     {.i = 3}},
    {MOD|ShiftMask, XK_3, win_to_ws, {.i = 3}},
    {MOD,           XK_4, ws_go,     {.i = 4}},
    {MOD|ShiftMask, XK_4, win_to_ws, {.i = 4}},
    {MOD,           XK_5, ws_go,     {.i = 5}},
    {MOD|ShiftMask, XK_5, win_to_ws, {.i = 5}},
    {MOD,           XK_6, ws_go,     {.i = 6}},
    {MOD|ShiftMask, XK_6, win_to_ws, {.i = 6}},
};

#endif

