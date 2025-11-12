/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
#ifndef FONT_SIZE
#define FONT_SIZE 10
#endif
#ifndef BAR_HEIGHT
#define BAR_HEIGHT 8
#endif

#define STRINGIFY(x) #x
#define TOSTRING(x) STRINGIFY(x)

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const int user_bh = BAR_HEIGHT;               /* add an defined amount of pixels to the bar height */

static const char *fonts[] = {
	"Fira Code:style=Regular:size=" TOSTRING(FONT_SIZE)
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#a89984", "#1d2021" },
	[SchemeSel] = { "#fbf1c7", "#d79921" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
