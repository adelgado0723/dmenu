/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;      /* -b  option; if 0, dmenu appears at bottom     */
static int fuzzy = 1;
static const unsigned int alpha = 0xf0;
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
    "FantasqueSansMono Nerd Font:size=14",
    "Noto Color Emoji:size=14:antialias=true:autohint=true"};

static const char *prompt =
    NULL; /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#f8f8f2", "#282a36"},
    [SchemeSel] = {"#000000", "#ff79c6"},
    [SchemeSelHighlight] = {"#50fa7b", "#000000"},
    [SchemeNormHighlight] = {"#507a7b", "#000000"},
    [SchemeOut] = {"#000000", "#8be9fd"},
    // [SchemeMid] = {"#d7d7d7", "#1c1f24"},
};

static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = {OPAQUE, alpha},
    [SchemeSel] = {OPAQUE, alpha},
    [SchemeOut] = {OPAQUE, alpha},
};

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 25;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
