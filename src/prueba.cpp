#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
    std::string reset_position;
    int frame = 0;
    bool animation1 = true;
    bool animation2 = true;
    bool animation3 = true;
    bool animation4 = true;
    
    while (true)
    {
         auto can = Canvas(1000,1000);
       
        if(animation2 == true)
        {
        //triangulo superior
        can.DrawBlockLine(150,55 - frame,100,75 - frame);
        can.DrawBlockLine(100,75 - frame,200,75 - frame);
        can.DrawBlockLine(200,75 - frame,150,55 - frame);
        //triangulo derecho
        can.DrawBlockLine(200 + frame,75,150 + frame,95);
        can.DrawBlockLine(150 + frame,95,250 + frame,95);
        can.DrawBlockLine(250 + frame,95,200 + frame,75);
        //traingulo izquierdo
        can.DrawBlockLine(100 - frame,75,50 - frame,95);
        can.DrawBlockLine(50- frame,95,150 - frame,95);
        can.DrawBlockLine(150 - frame,95,100 - frame,75);

        if (animation1 == true ) frame++;
        else frame --;
        }
        else if(animation3 == true){
        can.DrawBlockLine(150 ,55,100 - frame,75);
        can.DrawBlockLine(100 - frame,75,200 + frame,75);
        can.DrawBlockLine(200 + frame,75,150,55);
        //triangulo derecho
        can.DrawBlockLine(200,75,150 - frame,95);
        can.DrawBlockLine(150 - frame,95,250 + frame,95);
        can.DrawBlockLine(250 + frame,95,200,75);
        //traingulo izquierdo
        can.DrawBlockLine(100,75,50 - frame,95);
        can.DrawBlockLine(50 - frame,95,150 + frame,95);
        can.DrawBlockLine(150 + frame,95,100,75);

        frame--;
        }
        else if(animation4 == true) {
        can.DrawBlockLine(150,55,100,75);
        can.DrawBlockLine(100,75,200,75);
        can.DrawBlockLine(200,75,150,55);
        //triangulo derecho
        can.DrawBlockLine(200,75,150,95);
        can.DrawBlockLine(150,95,250,95);
        can.DrawBlockLine(250,95,200,75);
        //traingulo izquierdo
        can.DrawBlockLine(100,75,50,95);
        can.DrawBlockLine(50,95,150,95);
        can.DrawBlockLine(150,95,100,75);
        
        //Espada
        can.DrawBlockLine(142,10 + frame,162,10 + frame);
        can.DrawBlockLine(142,15 + frame,162,15 + frame);

        can.DrawBlockLine(142,10 + frame,142,15 + frame);
        can.DrawBlockLine(162,10 + frame,162,15 + frame);

        can.DrawBlockLine(147,1 + frame,157,1 + frame);
        can.DrawBlockLine(147,1 + frame,147,65 + frame);
        can.DrawBlockLine(157,1 + frame,157,65 + frame);

        can.DrawBlockLine(147,65 + frame,152,70 + frame);
        can.DrawBlockLine(157,65 + frame,152,70 + frame);

        can.DrawBlockLine(142, 8 + frame,132,15 + frame);
        can.DrawBlockLine(142, 11 + frame,132,18 + frame);
        can.DrawBlockLine(162, 8 + frame,172,15 + frame);
        can.DrawBlockLine(162, 11 + frame,172,18 + frame);

        frame++;
        }

        else {
            //titulo
            //T
            can.DrawBlockLine(100,20,106,20);
            can.DrawBlockLine(103,20,103,30);
            //H
            can.DrawBlockLine(110,20,110,30);
            can.DrawBlockLine(116,20,116,30);
            can.DrawBlockLine(110,25,116,25);
            //E
            can.DrawBlockLine(120,20,120,30);
            can.DrawBlockLine(120,20,125,20);
            can.DrawBlockLine(120,25,125,25);
            can.DrawBlockLine(120,30,125,30);
            //L
            can.DrawBlockLine(135,20,135,30);
            can.DrawBlockLine(135,30,140,30);
            //E
            can.DrawBlockLine(143,20,143,30);
            can.DrawBlockLine(143,20,148,20);
            can.DrawBlockLine(143,25,148,25);
            can.DrawBlockLine(143,30,148,30);
            //G
            can.DrawBlockLine(152,30,152,20);
            can.DrawBlockLine(152,30,156,30);
            can.DrawBlockLine(158,30,156,25);
            can.DrawBlockLine(158,25,153,25);
            can.DrawBlockLine(152,20,157,20);
            //E
            can.DrawBlockLine(160,20,160,30);
            can.DrawBlockLine(160,20,165,20);
            can.DrawBlockLine(160,25,165,25);
            can.DrawBlockLine(160,30,165,30);
            //N
            can.DrawBlockLine(167,20,167,30);
            can.DrawBlockLine(173,20,173,30);
            can.DrawBlockLine(167,20,173,30);
            //D
            can.DrawBlockLine(177,20,177,30);
            can.DrawBlockLine(177,20,182,20);
            can.DrawBlockLine(177,30,182,30);
            can.DrawBlockLine(183,28,183,23);
            //O
            can.DrawBlockLine(192,20,192,30);
            can.DrawBlockLine(197,20,197,30);
            can.DrawBlockLine(192,20,197,20);
            can.DrawBlockLine(192,30,197,30);
            //F
            can.DrawBlockLine(202,20,202,30);
            can.DrawBlockLine(202,20,210,20);
            can.DrawBlockLine(202,25,206,25);
            //Z
            can.DrawBlockLine(70,50,102,50);
            can.DrawBlockLine(102,50,70,75);
            can.DrawBlockLine(102,75,70,75);
            //E
            can.DrawBlockLine(112,50,112,75);
            can.DrawBlockLine(112,50,140,50);
            can.DrawBlockLine(112,62,140,62);
            can.DrawBlockLine(112,75,140,75);
            //L
            can.DrawBlockLine(150,50,150,75);
            can.DrawBlockLine(150,75,175,75);
            //D
            can.DrawBlockLine(185,50,185,75);
            can.DrawBlockLine(185,50,210,50);
            can.DrawBlockLine(185,75,210,75);
            can.DrawBlockLine(211,72,211,53);
            //A
            can.DrawBlockLine(220,50,220,75);
            can.DrawBlockLine(240,50,240,75);
            can.DrawBlockLine(220,63,240,63);
            can.DrawBlockLine(222,48,238,48);
            //Espada
            can.DrawBlockLine(142,30,162,30);
            can.DrawBlockLine(142,45,162,45);

            can.DrawBlockLine(142,40,142,45);
            can.DrawBlockLine(162,40,162,45);

            can.DrawBlockLine(147,30,157,30);
            can.DrawBlockLine(147,30,147,95);
            can.DrawBlockLine(157,30 ,157,95);

            can.DrawBlockLine(147,95,152,100);
            can.DrawBlockLine(157,95,152,100);

            can.DrawBlockLine(142, 38,132,45);
            can.DrawBlockLine(142, 41,132,48);
            can.DrawBlockLine(162, 38,172,45);
            can.DrawBlockLine(162, 41,172,48);
        }

        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::White,canvas(&can));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(.2s);
        ///change to frame -- for movement animation
        if(frame == 20 && animation1 == true) animation1 = false;
        //change to rotation animation
        if(frame == -1 && animation2 == true) {
        animation2 = false;
        frame = 0;
        }
        //change to sword animation
        if (frame == -100 && animation3 == true)  {
        animation3 = false;
        frame = 0;
        }
        //chango to menu animation
        if (frame == 35 && animation4 == true)  {
        animation4 = false;
        frame = 0;
        }
         
        
    }

    return 0;
}