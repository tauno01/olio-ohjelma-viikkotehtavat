#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    pKatutaso = new Katutaso;
    pKerros1 = new Kerros;
    pKerros2 = new Kerros;
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritellaan koko kerrostalon kaikki asunnot"<<endl;
    pKatutaso->maaritaAsunnot();
    pKerros1->maaritaAsunnot();
    pKerros2->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double katutasonKulutus = pKatutaso->laskeKulutus(hinta);
    double kerrostenKulutus = pKerros1->laskeKulutus(hinta) + pKerros2->laskeKulutus(hinta);
    return katutasonKulutus+kerrostenKulutus;
}
