#include "kerros.h"

Kerros::Kerros()
{
    cout<<"kerros luotu"<<endl;
}

Kerros::~Kerros()
{

}

void Kerros::maaritaAsunnot()
{
    cout<<"Maaritetaan katutasolta perittyja asuntoja"<<endl;
    cout<<"Maaritetaan 4kpl kerroksen asuntoja"<<endl;
    as1.maarita(2, 1);
    as2.maarita(2, 1);
    as3.maarita(2, 1);
    as4.maarita(2, 1);
}

double Kerros::laskeKulutus(double hinta)
{
    double kulutus = 4 * hinta * 2 * 100;
    return kulutus;
}

