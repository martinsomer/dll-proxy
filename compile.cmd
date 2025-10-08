cl /LD ^
    /std:c17 ^
    /Fo:obj\ ^
    /TC src\version.c ^
    /W3 ^
    /link ^
    /NOIMPLIB /NOEXP ^
    user32.lib ^
    /DEF:src\version.def ^
    /OUT:bin\version.dll
