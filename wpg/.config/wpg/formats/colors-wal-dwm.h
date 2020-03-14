static const char norm_fg[] = "#fcffff";
static const char norm_bg[] = "#2c2125";
static const char norm_border[] = "#4c4248";

static const char sel_fg[] = "#fcffff";
static const char sel_bg[] = "#de6b6d";
static const char sel_border[] = "#fcffff";

static const char urg_fg[] = "#fcffff";
static const char urg_bg[] = "#8abcb9";
static const char urg_border[] = "#8abcb9";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
