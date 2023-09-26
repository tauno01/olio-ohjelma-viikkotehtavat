#ifndef KERROSTALO_H
#define KERROSTALO_H
#include <iostream>
using namespace std;
#include "katutaso.h"
#include "kerros.h"

class Kerrostalo
{
public:
    Kerrostalo();
    double laskeKulutus(double);
private:
    Katutaso * pKatutaso;
    Kerros * pKerros1;
    Kerros * pKerros2;
};

#endif // KERROSTALO_H
