#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    //ofstream outStrm;
    //outStrm.open("pokemons.txt");
    ofstream outStrm("pokemons.txt");
    if (!outStrm.is_open())
    {
        cout << "pokemons.txtÀ» ¿­ ¼ö ¾ø½À´Ï´Ù.";
        assert(false);
    }

    outStrm << "pikachu" << "  ";
    outStrm << "mu" << "  ";
    outStrm.close();
    return 0;
}