#define MENU_ROW(NAME, STRING_INDEX, UP, DOWN, LEFT, RIGHT) \
    [NAME] = { \
        .stringIndex = STRING_INDEX, \
        .rowOnPressUp = UP, \
        .rowOnPressDown = DOWN, \
        .rowOnPressLeft = LEFT, \
        .rowOnPressRight = RIGHT \
    }

#define FINALIZER_ROW \
    { \
        .stringIndex = -1, \
        .rowOnPressUp = 0, \
        .rowOnPressDown = 0, \
        .rowOnPressLeft = 0, \
        .rowOnPressRight = 0 \
    }