#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"


class Katutaso:public Kerros
{
public:
    Asunto as1, as2;
    Katutaso();
    ~Katutaso();
    void maaritaAsunnot() override;
    double laskeKulutus(double);
};

#endif // KATUTASO_H
