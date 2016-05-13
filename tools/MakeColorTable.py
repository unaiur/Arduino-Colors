#! /bin/env python3
import sys

if len(sys.argv) < 3:
    print("Usage: %s colors.txt define" % sys.argv[0])
    sys.exit(1)

COLORS = list()
with open(sys.argv[1]) as f:
    for line in f:
        color = line.split(None, 1)
        if len(color) == 2:
            COLORS.append((color[0], int(color[1].strip(), 0)))
COLORS.sort(key=lambda x: x[0])

print('#if %s' % sys.argv[2])
print('#include "RgbColor.hpp"')
print()
for name, color in COLORS:
    print('static const char name_%s[] PROGMEM = "%s";' % (name, name))

print()
print('const NamedColor RgbColor::namedColors[] PROGMEM = {')
for name, color in COLORS:
    print('  { name_%s, 0x%x},' % (name, color))
print('  { 0, 0}')
print('};')
print('#endif')
