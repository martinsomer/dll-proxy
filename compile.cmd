IF EXIST bin\version.dll DEL bin\version.dll

cl /LD ^
   /TC src\main.c ^
   /Fo:obj\ ^
   /std:c17 ^
   /W3 ^
   /link ^
   user32.lib ^
   /DEF:src\version.def ^
   /OUT:bin\version.dll ^
   /NOIMPLIB /NOEXP
