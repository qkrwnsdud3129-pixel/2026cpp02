#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    int data;

    ifstream inStrm("pokemons.txt");
    if (!inStrm.is_open())
    {
        cout << "pokemons.txtÀ» ¿­ ¼ö ¾ø½À´Ï´Ù.";
        assert(false);
    }
    for (int i = 1; i <= 2; i++)
    {
        inStrm >> data;
        cout << data << "  ";
    }
    inStrm.close();

    return 0;
}