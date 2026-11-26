#include <iostream>
#include <fstream>
#include <cassert>
using namespace std;

int main()
{
    fstream fstr("pokemons.txt", ios::in | ios::out);
    if (!fstr.is_open())
    {
        cout << "intFileÀ» ¿­ ¼ö ¾ø½À´Ï´Ù!";
        assert(false);
    }
    string a;
    fstr >> a;
    cout << a;
    fstr.clear();
    fstr.seekp(0, ios::end);
    fstr << "\nsquirtle";

    fstr.close();
    return 0;
}