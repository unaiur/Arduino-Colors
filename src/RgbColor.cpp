#include "RgbColor.hpp"

static inline int hexvalue(char c)
{
  return c - (c < 'a' ? '0' : 'a' - 10);
}

static inline char hexdigit(int v)
{
  return v + (v < 10 ? '0' : 'a' - 10);
}

bool RgbColor::parse(String name)
{
  name.toLowerCase();
  if (name[0] == '#') {
    if (name.length() > 7)
      return false;
    u32 color = 0;
    for (int i = 1; i < name.length(); ++i) {
      if (!isxdigit(name[i]))
        return false;
      color = (color << 4) | hexvalue(name[i]);
    }
    *this = color;
    return true;
  } else {
    Serial.printf("Searching for %s\n", name.c_str());
    for (int i = 0; namedColors[i].name; ++i)
    {
      if (name == FPSTR(namedColors[i].name))
      {
        *this = RgbColor(namedColors[i].color);
        return true;
      }
    }
  }
  return false;
}

String RgbColor::toString() const
{
  u32 color = toInt();
  for (int i = 0; namedColors[i].name; ++i)
  {
    if (namedColors[i].color == color)
      return String(FPSTR(namedColors[i].name));
  }

  String res;
  res += '#';
  res += hexdigit(red >> 4);
  res += hexdigit(red & 15);
  res += hexdigit(green >> 4);
  res += hexdigit(green & 15);
  res += hexdigit(blue >> 4);
  res += hexdigit(blue & 15);
  return res;
}
