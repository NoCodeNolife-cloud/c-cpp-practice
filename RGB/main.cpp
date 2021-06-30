#include <iostream>

using namespace std;

// struct of the color
struct RGB {
    bool R;/*Red*/
    bool G;/*Green*/
    bool B;/*Blak*/
};

void find(RGB);

// base color
const RGB color[] = {
        {false, false, false},
        {true,  false, false},
        {false, false, true},
        {false, true,  false},
        {false, true,  true},
        {true,  false, true},
        {true,  true,  false},
        {true,  true,  true}
};

// show the color name
string colorname[] = {
        "Black", "Red", "Blue", "Green", "BlueGreen", "Magenta", "Yellow", "White"
};

enum colorcode {
    Black, Red, Blue, Green, BlueGreen, Magenta, Yellow, White
};

int main() {
    RGB res1 = {bool(color[Blue].R | color[Green].R),
                bool(color[Blue].G | color[Green].G),
                bool(color[Blue].B | color[Blue].B)};
    RGB res2 = {bool(color[Yellow].R & color[BlueGreen].R),
                bool(color[Yellow].G & color[BlueGreen].G),
                bool(color[Yellow].B & color[BlueGreen].B)};
    RGB res3 = {bool(color[Red].R ^ color[Magenta].R),
                bool(color[Red].G ^ color[Magenta].G),
                bool(color[Red].B ^ color[Magenta].B)};

    find(res1);
    find(res2);
    find(res3);

    return 0;
}

void find(RGB _rgb) {
    for (int i = 0; i < 8; ++i) {
        if (_rgb.R == color[i].R and _rgb.G == color[i].G and _rgb.B == color[i].B) {
            cout << colorname[i] << endl;
            break;
        }
    }
}