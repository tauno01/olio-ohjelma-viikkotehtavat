#include <iostream>
using namespace std;
#include "asunto.h"
#include "katutaso.h"
#include "kerrostalo.h"

int main()
{
    Kerrostalo kerrostalo;
    cout<<"Kerrostalon kulutus = "<<kerrostalo.laskeKulutus(1)<<endl;
    return 0;
}
