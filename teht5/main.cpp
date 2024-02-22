#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{

    Kerrostalo *k;
    k = new Kerrostalo;
    double hinta = 1.0;
    cout<<"Kerrostalon kulutus = "<<k->laskeKulutus(hinta)<<endl;
    delete k;

    return 0;
}
