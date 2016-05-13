#if !defined(USE_CSS3_COLORS)
#include "RgbColor.hpp"

static const char name_aqua[] PROGMEM = "aqua";
static const char name_black[] PROGMEM = "black";
static const char name_blue[] PROGMEM = "blue";
static const char name_fuchsia[] PROGMEM = "fuchsia";
static const char name_gray[] PROGMEM = "gray";
static const char name_green[] PROGMEM = "green";
static const char name_lime[] PROGMEM = "lime";
static const char name_maroon[] PROGMEM = "maroon";
static const char name_navy[] PROGMEM = "navy";
static const char name_olive[] PROGMEM = "olive";
static const char name_orange[] PROGMEM = "orange";
static const char name_purple[] PROGMEM = "purple";
static const char name_red[] PROGMEM = "red";
static const char name_silver[] PROGMEM = "silver";
static const char name_teal[] PROGMEM = "teal";
static const char name_white[] PROGMEM = "white";
static const char name_yellow[] PROGMEM = "yellow";

const NamedColor RgbColor::namedColors[] PROGMEM = {
  { name_aqua, 0xffff},
  { name_black, 0x0},
  { name_blue, 0xff},
  { name_fuchsia, 0xff00ff},
  { name_gray, 0x808080},
  { name_green, 0x8000},
  { name_lime, 0xff00},
  { name_maroon, 0x800000},
  { name_navy, 0x80},
  { name_olive, 0x808000},
  { name_orange, 0xffa500},
  { name_purple, 0x800080},
  { name_red, 0xff0000},
  { name_silver, 0xc0c0c0},
  { name_teal, 0x8080},
  { name_white, 0xffffff},
  { name_yellow, 0xffff00},
  { 0, 0}
};
#endif
