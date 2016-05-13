#! /bin/sh

./MakeColorTable.py Html4Colors.txt '!defined(USE_CSS3_COLORS)' > ../src/Html4Colors.cpp
./MakeColorTable.py Css3Colors.txt 'defined(USE_CSS3_COLORS)' > ../src/Css3Colors.cpp

