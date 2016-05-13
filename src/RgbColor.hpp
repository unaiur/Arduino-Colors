#ifndef HOMIE_RGBCOLOR__INCLUDED__
#define HOMIE_RGBCOLOR__INCLUDED__
#include <Arduino.h>

struct NamedColor
{
  char const * const name;
  const u32 color;
};

struct RgbColor
{
  RgbColor(): red(0), green(0), blue(0) {}
  RgbColor(u8 r, u8 g, u8 b): red(r), green(g), blue(b) {}
  RgbColor(u32 v): red(v >> 16), green(v >> 8), blue(v) {}
  bool parse(String name);
  String toString() const;
  u32 toInt() const { return red * 65536 + green * 256 + blue; }
  unsigned char red, green, blue;
  static const NamedColor namedColors[] PROGMEM;
};

inline bool operator == (RgbColor a, RgbColor b)
{
  return a.toInt() == b.toInt();
}

#endif
