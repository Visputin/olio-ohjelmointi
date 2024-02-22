#include "asunto.h"
#include <iostream>
using namespace std;

Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;
}

void Asunto::maarita(int a, int b)
{
    asukasMaara = a;
    neliot = b;
    cout<<"Asunto maaritetty, asukkaita = "<<a<<", nelioita = "<<b<<endl;
}

double Asunto::laskeKulutus(double hinta)
{
    return asukasMaara * neliot * hinta;
}

