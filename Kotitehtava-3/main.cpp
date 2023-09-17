#include <iostream>
#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    Chef obj("Jyrki");
    ItalianChef obj2("Mario");
    obj.makeSalad();
    obj2.makePasta();
    obj.makeSoup();
    return 0;
}
