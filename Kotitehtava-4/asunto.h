#ifndef ASUNTO_H
#define ASUNTO_H
#include <iostream>
using namespace std;

class Asunto
{
public:
    int asukasMaara = 2;
    int neliot = 100;
    Asunto();
    ~Asunto();
    void maarita(int, int);
    double laskeKulutus(double);
};

#endif // ASUNTO_H
