

#include "TXLib.h"

void drawScreensaver()
{
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 805, 605);
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txDrawText(190,60,570,130,"HazbinCompany");
    txDrawText(250,405,490,470,"œ–≈ƒ—“¿¬Àﬂ≈“");
}
void drawScreensaver2()
{
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txRectangle (0, 0, 805, 605);
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txDrawText(180,60,560,130,"CÃ≈ÿÕ€≈,–ŒÕƒŒÃÕ€≈ ÃŒÃ≈Õ“€");
    txDrawText(240,80,480,150,"»«  .—");
}
void drawAvatar(HDC Avatar)
{
    txTransparentBlt (txDC(), 265, 200 , 225, 225 ,Avatar, 0, 0, TX_WHITE);
}
void drawAvatar2(HDC Avatar2)
{
    txTransparentBlt (txDC(), 265, 220 , 225, 225 ,Avatar2, 0, 0, TX_WHITE);
}
void drawMeed()
{
    //ÌÂ·Ó
    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    txRectangle (0, 0, 805, 605);
    //aÒÙÎ¸Ú
    txSetColor (TX_GRAY);
    txSetFillColor (TX_GRAY);
    txRectangle (0, 425,805,605);
    //‚ÓÓÚ‡
    txSetColor (TX_ORANGE);
    txSetFillColor (TX_ORANGE);
    txRectangle (0,85,260,420);
    txRectangle (470,420,805,80);
    txRectangle (255,125,470,60);
    txSetColor (TX_BLACK);
    txSetFillColor (TX_BLACK);

    txRectangle(465,125,385,420);
    txRectangle (255,125,335,420);
    //„‡ÙËÚË
    txSetColor (TX_BLUE);
    txSetFillColor (TX_BLUE);
    txRectangle(560,150,730,180);
    txSetColor (TX_WHITE);
    txSetFillColor (TX_WHITE);
    txRectangle(560,150,730,120);
    txSetColor (TX_RED);
    txSetFillColor (TX_RED);
    txRectangle(560,172,730,200);
    txSetColor(TX_RED);
    txSetFillColor (TX_GRAY);
    txCircle(545,500,70);
    txSetColor(TX_RED,10);
    txDrawText(505,450,600,550,"B");
    //·Ó˜Í‡
    txSetColor(TX_RED);
    txSetFillColor (TX_RED);
    txRectangle(80,310,180,470);

}





void drawKt(int x)
{
    txSetColor(TX_YELLOW, 3);
    txSetFillColor(TX_YELLOW);
    txCircle(x,450,15);
    txSetColor(TX_BLUE,5);
    txSetFillColor(TX_BLUE);
    txLine(x,470,x,500);
    txLine(x,470,x-20,480);
    txLine(x,470,x+20,480);
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_BLACK);
    txLine(x-20,480,x-20,505);
    txLine(x+20,480,x+52,480);
    txLine(x,500,x-20,525);
    txLine(x,500,x+20,530);
    txLine(x-20,525,x-20,555);
    txLine(x+20,530,x+20,555);


}

void drawKnife(int x)
{

    txSetColor(TX_BLUE,5);
    txSetFillColor(TX_BLUE);
    POINT knife[3] = {{x,435 }, {x,475 }, {x+2, 475}};
    txPolygon (knife,3);
    txSetColor(TX_GREEN,5);
    txSetFillColor(TX_GREEN);
    txLine(x,475,x,490);
    txLine(x-5,475,x+5,475);
}
void drawAkr2(HDC Akr2)
{
    txTransparentBlt (txDC(), 690, 408 , 98, 25 ,Akr2, 0, 0, TX_WHITE);
}

void drawMarmok()
{
    txSetColor(TX_YELLOW, 3);
    txSetFillColor(TX_YELLOW);
    txCircle(690,405,15);
    txLine(670,430,670,460);
    txLine(710,430,730,430);
    txSetColor(TX_RED,5);
    txSetFillColor(TX_RED);
    txLine(690,420,690,450);
    txLine(690,420,670,430);
    txLine(690,420,710,430);
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_BLACK);
    txLine(690,450,680,485);
    txLine(690,450,710,485);
    txLine(680,485,680,510);
    txLine(710,485,710,510);



}
void drawMarmok2()
{
    txSetColor(TX_YELLOW, 3);
    txSetFillColor(TX_YELLOW);
    txCircle(690,410,15);
    txLine(670,435,640,445);
    txLine(710,435,710,465);
    txSetColor(TX_RED,5);
    txSetFillColor(TX_RED);
    txLine(690,425,690,455);
    txLine(690,425,670,435);
    txLine(690,425,710,435);
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_BLACK);
    txLine(690,455,680,490);
    txLine(690,455,710,490);
    txLine(680,490,680,515);
    txLine(710,490,710,515);

}
void drawDiologKt()
 {
txDrawText(10,390,290,430,"Œœ¿ ÎÂ„ÍÓÂ Û·ËÈÒÚ‚Ó:3");
 }

void drawAkr(HDC Akr)
{
    txTransparentBlt (txDC(), 610, 428 , 98, 25  ,Akr, 0, 0, TX_WHITE);
}
void drawBeginning(HDC Beginning)
{
 txTransparentBlt (txDC(), 0, 0 , 805, 605  ,Beginning, 0, 0, TX_PINK);
}
void drawTime(int x)
{
txCircle(x,0,5);
}
void drawBeginning2(HDC Beginning2)
{
 txTransparentBlt (txDC(), 0, 0 , 805, 605  ,Beginning2, 0, 0, TX_PINK);
}
void drawBeginning3(HDC Beginning3)
{
 txTransparentBlt (txDC(), 0, 0 , 805, 605  ,Beginning3, 0, 0, TX_PINK);
}
void drawMush(HDC Mush)
{
 txTransparentBlt (txDC(), 0, 0 , 805, 605  ,Mush, 0, 0, TX_WHITE);
}



void drawKtDied()
{
    txSetColor(TX_YELLOW, 3);
    txSetFillColor(TX_YELLOW);
    txCircle(570,490,15);
    txSetColor(TX_BLUE,5);
    txSetFillColor(TX_BLUE);
    txLine(566,484,517,484);
    txLine(566,484,544,467);
    txLine(566,484,544,500);
    txSetColor(TX_BLACK,5);
    txSetFillColor(TX_BLACK);
    txLine(544,467,530,485);
    txLine(544,500,570,510);
    txLine(517,484,500,475);
    txLine(517,484,500,500);
    txLine(500,475,515,455);
    txLine(500,500,470,490);
    txTextOut(560,490,"’-’");
}

void drawDiologMarmok()
 {
   txSetColor(TX_GREEN, 3);
   txDrawText(595,375,780,410,"·‡‡‡Ï");
 }
 void drawSmile(HDC Smile)
 {
    txSetColor(TX_WHITE);
    txSetFillColor (TX_WHITE);
    txRectangle(486,10,800,200);
    txTransparentBlt(txDC(), 486, 10 , 198, 223  ,Smile, 0, 0, TX_WHITE);

}

void drawTexttytru(int y)
{
   txSetColor(TX_GREEN, 3);
   txDrawText(200,y-300,550,y-250,"—œŒÕ—Œ–-HAZBIHcompany");
   txSetColor(TX_BLUE, 3);
   txDrawText(200,y-200,550,y-150,"—÷”Õ¿–»—“-¬¿Õ≈ _¿–“≈ÿŒ ");
   txSetColor(TX_GRAY, 3);
   txDrawText(200,y-50,550,y,"¿‘“Œ– »ƒ≈»-Ã‡ËÌ(Ã‡ÏÓÍ)");
   txSetColor(TX_BLACK, 3);
   txDrawText(210,y-100,560,y-50,"¿Õ»Ã¿“Œ–-¬¿Õ≈ _¿–“≈ÿŒ ");
   txSetColor(TX_PINK, 3);
   txDrawText(200,y+100,550,y+150,"’”ƒŒ∆Õ» -ÃEƒﬂ");

}
void drawWiliam1(HDC Wiliam1)
{
 txTransparentBlt (txDC(), 0, 0 , 805, 605 ,Wiliam1, 0, 0, TX_BLACK);
}

int main()
    {
    txCreateWindow (805, 605);


    int yTexttytru = 300 ;
    int xTime = 0 ;
    int xKnife = 83 ;
    int xKt = 26 ;

    HDC Wiliam1 =txLoadImage ("N-TIMER(1).bmp");
    HDC Smile = txLoadImage ("ËÒÔÛ„.bmp");
    HDC Avatar2= txLoadImage ("ÒÏ‡ÈÎ.bmp");
    HDC Avatar= txLoadImage ("‡‚‡Ú‡Í‡.bmp");
    HDC Mush= txLoadImage ("ÔÓÏÂıË.bmp");
    HDC Beginning3= txLoadImage ("ÙÓÌ3.bmp");
    HDC Beginning2= txLoadImage ("ÙÓÌ2.bmp");
    HDC Beginning= txLoadImage ("ÙÓÌ.bmp");
    HDC Akr2 = txLoadImage (" ŒÀ¿ÿ2.bmp");
    HDC Akr = txLoadImage (" ŒÀ¿ÿ.bmp");
    {
     drawScreensaver();
     drawAvatar(Avatar);

     txSleep(10000);
    }
    {
     drawScreensaver2();
     drawAvatar2(Avatar2);
     txSleep(5000);

    }






 while(xTime<805)
    {
     drawTime(xTime);
     drawBeginning(Beginning);

     xTime=xTime + 20;
     txSleep(100);
    }


    while(xKt<185)
    {

    drawMeed();
    drawAkr2(Akr2);
    drawMarmok();
    drawKt(xKt);
    drawKnife(xKnife);
    drawDiologKt();
    txSleep(200);
    drawDiologMarmok();

    xKt=xKt + 10;
    xKnife = xKnife + 10;

    txSleep(100);
    }

    while(xKt<545)
    {
        drawMeed();
        drawAkr2(Akr2);
        drawMarmok();
        drawKt(xKt);
        drawKnife(xKnife);
        drawDiologMarmok();
        xKt=xKt + 10;
        xKnife = xKnife + 10;

        txSleep(300);
    }

    {

     drawMeed();
     drawMarmok2();
     drawAkr(Akr);
     drawKt(xKt);
     drawKnife(xKnife);
     txSleep(100);

    }

    {

     drawMeed();
     drawMarmok2();
     drawKtDied();
     drawAkr(Akr);
     drawSmile(Smile);

     txSleep(10000);

    }

    {
     drawTime(xTime);
     drawBeginning3(Beginning3);

     txSleep(900);
    }


    {

     drawBeginning2(Beginning2);

     txSleep(900);
    }

    {

     drawMush(Mush);

     txSleep(2000);
    }
    while(yTexttytru<1000)
    {

        drawWiliam1(Wiliam1);


        drawTexttytru(yTexttytru);


        yTexttytru=yTexttytru - 2;

        txSleep(100);
    }
    txDeleteDC(Akr2);
    txDeleteDC(Akr);
    txDeleteDC(Beginning3);
    txDeleteDC(Beginning2);
    txDeleteDC(Beginning);
    txDeleteDC(Mush);
    txDeleteDC(Avatar2);
    txDeleteDC(Avatar);
    txDeleteDC(Smile);
    txTextCursor (false);
    return 0;
    }

