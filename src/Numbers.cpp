#include "Numbers.hpp"
//Sheet
RenderD7::Sheet numbers;
//Big
RenderD7::Sprite b0;
RenderD7::Sprite b1;
RenderD7::Sprite b2;
RenderD7::Sprite b3;
RenderD7::Sprite b4;
RenderD7::Sprite b5;
RenderD7::Sprite b6;
RenderD7::Sprite b7;
RenderD7::Sprite b8;
RenderD7::Sprite b9;
//Min
RenderD7::Sprite m0;
RenderD7::Sprite m1;
RenderD7::Sprite m2;
RenderD7::Sprite m3;
RenderD7::Sprite m4;
RenderD7::Sprite m5;
RenderD7::Sprite m6;
RenderD7::Sprite m7;
RenderD7::Sprite m8;
RenderD7::Sprite m9;

namespace Num
{
    void Load()
    {
        numbers.Load("romfs:/gfx/numbers.t3x");
        b0.FromSheet(&numbers, NUM_BIG_0);
        b1.FromSheet(&numbers, NUM_BIG_1);
        b2.FromSheet(&numbers, NUM_BIG_2);
        b3.FromSheet(&numbers, NUM_BIG_3);
        b4.FromSheet(&numbers, NUM_BIG_4);
        b5.FromSheet(&numbers, NUM_BIG_5);
        b6.FromSheet(&numbers, NUM_BIG_6);
        b7.FromSheet(&numbers, NUM_BIG_7);
        b8.FromSheet(&numbers, NUM_BIG_8);
        b9.FromSheet(&numbers, NUM_BIG_9);
        m0.FromSheet(&numbers, NUM_MIN_0);
        m1.FromSheet(&numbers, NUM_MIN_1);
        m2.FromSheet(&numbers, NUM_MIN_2);
        m3.FromSheet(&numbers, NUM_MIN_3);
        m4.FromSheet(&numbers, NUM_MIN_4);
        m5.FromSheet(&numbers, NUM_MIN_5);
        m6.FromSheet(&numbers, NUM_MIN_6);
        m7.FromSheet(&numbers, NUM_MIN_7);
        m8.FromSheet(&numbers, NUM_MIN_8);
        m9.FromSheet(&numbers, NUM_MIN_9);
    }

    void Big(int x, int y, int num)
    {
        switch (num)
        {
        case 0:
            b0.SetPos(x, y);
            b0.Draw();
            break;
        case 1:
            b1.SetPos(x, y);
            b1.Draw();
            break;
        case 2:
            b2.SetPos(x, y);
            b2.Draw();
            break;
        case 3:
            b3.SetPos(x, y);
            b3.Draw();
            break;
        case 4:
            b4.SetPos(x, y);
            b4.Draw();
            break;
        case 5:
            b5.SetPos(x, y);
            b5.Draw();
            break;
        case 6:
            b6.SetPos(x, y);
            b6.Draw();
            break;
        case 7:
            b7.SetPos(x, y);
            b7.Draw();
            break;
        case 8:
            b8.SetPos(x, y);
            b8.Draw();
            break;
        case 9:
            b9.SetPos(x, y);
            b9.Draw();
            break;
        
        default:
            break;
        }
    }

    void DrawBig(int x, int y, int num)
    {
        switch (num)
        {
        case 0 ... 9:
            Big(x, y, num);
            break;
        case 10 ... 99:

            break;
        case 100 ... 999:

            break;
        default:
            break;
        }
    }
    void DrawMin(int x, int y, int num)
    {

    }
}