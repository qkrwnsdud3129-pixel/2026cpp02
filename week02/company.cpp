#include "company.h"

Company::Company(string name, string tel) : name(name), tel(tel)
{
}

Company::~Company()
{
}

void Company::print() const
{
    cout << "상호명 : " << name << '\n';
    cout << "전화번호 : " << tel << '\n';
}