#include "kerrostalo.h"

Kerrostalo::Kerrostalo()
{
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

Kerrostalo::~Kerrostalo()
{

}

double Kerrostalo::laskeKulutus(double hinta)
{
    double kokoKulutus = eka.laskeKulutus(hinta) + toka.laskeKulutus(hinta) + (2 * kolmas.laskeKulutus(hinta));
    return kokoKulutus;
}
