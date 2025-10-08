cl /LD ^
    /Fo:obj\ ^
    /TC src\version.c ^
    /link ^
    /NOIMPLIB /NOEXP ^
    user32.lib ^
    /DEF:src\version.def ^
    /OUT:bin\version.dll
