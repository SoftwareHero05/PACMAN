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
    int i = 0;
    auto can = Canvas(100,100);
    can.DrawPointCircle(50,25,20);
    auto ColorSupport = vbox({
                            Terminal::ColorSupport() >= Terminal::Color::Palette1
                                ? text(" 16 color palette support : Yes")
                                : text(" 16 color palette support : No"),
                            Terminal::ColorSupport() >= Terminal::Color::Palette256
                                ? text("256 color palette support : Yes")
                                : text("256 color palette support : No"),
                            Terminal::ColorSupport() >= Terminal::Color::TrueColor
                                ? text("       True color support : Yes")
                                : text("       True color support : No"),
                        });
    while (true)
    {
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element personaje = spinner(i,frame);
        Element lienzo = bgcolor(Color::White, border(vbox(ColorSupport,personaje,canvas(&can))));
        Render(pantalla, lienzo);
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);
        this_thread::sleep_for(.5s);
        frame++;
        i++;
        if(i>22) i = 0;
    }

    return 0;
}