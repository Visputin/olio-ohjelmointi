#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    Chef a ("Gordon Ramsay");
    Chef b ("Anthony Bourdain");
    ItalianChef c ("Chef Mario", 50, 100);
    ItalianChef d ("Chef Jyrki", 100, 150);
    a.makeSalad();
    a.makeSoup();
    b.makeSalad();
    b.makeSoup();
    c.makeSalad();
    c.makeSoup();
    c.makePasta();
    d.makeSalad();
    d.makeSoup();
    d.makePasta();

    return 0;
}
