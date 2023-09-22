#include "katutaso.h"

Katutaso::Katutaso()
{
    cout<<"katutaso luotu"<<endl;
}

Katutaso::~Katutaso()
{
}

void Katutaso::maaritaAsunnot()
{
    cout<<"Maaritetaan 2 kpl katutason asuntoja"<<endl;
    as1.maarita(2, 1);
    as2.maarita(2, 1);
}

double Katutaso::laskeKulutus(double hinta)
{
    double kulutus = 2 * hinta * 2 * 100;
    return kulutus;
}
