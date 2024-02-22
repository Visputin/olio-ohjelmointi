#include "kerrostalo.h"
#include <iostream>

using namespace std;

int main()
{

    Kerrostalo k;
    double hinta = 1.0;
    cout<<"Kerrostalon kulutus = "<<k.laskeKulutus(hinta)<<endl;


    return 0;
}
