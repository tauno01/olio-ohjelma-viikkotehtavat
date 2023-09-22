#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
public:
    Asunto as1, as2, as3, as4;
    Kerros();
    ~Kerros();
    virtual void maaritaAsunnot();
    double laskeKulutus(double);
};

#endif // KERROS_H
