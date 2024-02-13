#include "kerros.h"
#include <iostream>
using namespace std;

Kerros::Kerros()
{
    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();
    cout<<"Kerros luotu"<<endl;
}

Kerros::~Kerros()
{
    delete as1;
    delete as2;
    delete as3;
    delete as4;
}

Katutaso::Katutaso()
{
    as1 = new Asunto();
    as2 = new Asunto();
    cout<<"Katutaso luotu"<<endl;
}

Katutaso::~Katutaso()
{
    delete as1;
    delete as2;
}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan 4kpl kerroksen asuntoja"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
    as3->maarita(2,100);
    as4->maarita(2,100);
}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    cout<<"Maaritetaan 2kpl katutason asuntoja"<<endl;
    as1->maarita(2,100);
    as2->maarita(2,100);
}

double Kerros::laskeKulutus(double hinta)
{
    double kulutus = 0.0;
    kulutus += as1->laskeKulutus(hinta);
    kulutus += as2->laskeKulutus(hinta);
    kulutus += as3->laskeKulutus(hinta);
    kulutus += as4->laskeKulutus(hinta);
    return kulutus;
}

double Katutaso::laskeKulutus(double hinta)
{
    double kulutus = 0.0;
    kulutus += as1->laskeKulutus(hinta);
    kulutus += as2->laskeKulutus(hinta);
    return kulutus;
}
