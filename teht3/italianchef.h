#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef:public Chef
{
public:
    ItalianChef(string chefName, int a, int b);
    string getName();
    void makePasta();
private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
