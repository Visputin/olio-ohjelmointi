#include "kerrostalo.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo()
{
    cout<<"Maaritetaan koko kerrostalon kaikki asunnot"<<endl;
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();
    cout<<"Kerrostalo luotu"<<endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();

}

Kerrostalo::~Kerrostalo()
{
    delete eka;
    delete toka;
    delete kolmas;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kulutus = 0.0;
    kulutus += eka->laskeKulutus(hinta);
    kulutus += toka->laskeKulutus(hinta);
    kulutus += kolmas->laskeKulutus(hinta);
    return kulutus;
}
