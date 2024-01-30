#include "italianchef.h"
#include "chef.h"

ItalianChef::ItalianChef(string chefName, int a, int b):Chef(chefName)
{
    vesi = a;
    jauhot = b;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<name<<" makes pasta with special recipe"<<endl;
    cout<<name<<" uses vesi = "<<vesi<<endl;
    cout<<name<<" uses jauhot = "<<jauhot<<endl;
}
