#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
public:
    Kerros();
    virtual void maaritaAsunnot();
    double laskeKulutus(double);
private:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
};

class Katutaso:public Kerros
{
public:
    Katutaso();
    void maaritaAsunnot();
    double laskeKulutus(double);
private:
    Asunto as1;
    Asunto as2;
};

#endif // KERROS_H
