#include "asunto.h"

Asunto::Asunto()
{
    cout<<"asunto luotu"<<endl;
}

Asunto::~Asunto()
{
}

void Asunto::maarita(int asukkaat, int nelioMaara)
{
    cout<<"Asunto maaritetty asukkaita= "<<asukkaat<<" nelioita= "<<nelioMaara<<endl;
}

double Asunto::laskeKulutus(double n)
{
    double kulutus = n * asukasMaara * neliot;
    return kulutus;
}
