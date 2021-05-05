/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"SauceCodePro Nerd Font:size=10"
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#bbbbbb", "#222222" },
	[SchemeSel] = { "#eeeeee", "#CCB2D5" },
	[SchemeSelHighlight] = { "#222222", "#CCB2D5" },
	[SchemeNormHighlight] = { "#222222", "#222222" },
	[SchemeOut] = { "#000000", "#00ffff" },
};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */

static unsigned int lines = 20;
static unsigned int lineheight = 0;

static const char worddelimiters[] = " ";

static const unsigned int border_width = 4;

