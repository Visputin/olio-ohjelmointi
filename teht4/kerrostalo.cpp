#include "kerrostalo.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo()
{
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritetaan koko kerrostalon kaikki asunnot"<<endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kulutus = 0.0;
    kulutus += eka.laskeKulutus(hinta);
    kulutus += toka.laskeKulutus(hinta);
    kulutus += kolmas.laskeKulutus(hinta);
    return kulutus;
}
