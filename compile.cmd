cl /LD ^
    /Fo:obj\ ^
    /TC version.c ^
    /link ^
    /NOIMPLIB /NOEXP ^
    user32.lib ^
    /DEF:version.def ^
    /OUT:bin\version.dll
