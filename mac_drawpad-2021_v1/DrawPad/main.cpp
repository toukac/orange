#include "DrawPad.hpp"
#include <math.h>
//なんかC++で色々書くやつ
void DrawMain()
{
    Clear(kColorBlack);
    FillRect(300,-200, -600, 400, kColorWhite);
    FillCircle( 0, 0, 100, kColorRed);
}


