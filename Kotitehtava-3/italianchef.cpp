#include "italianchef.h"
#include "chef.h"


ItalianChef::ItalianChef(string s) : Chef(s)
{
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}

ItalianChef::~ItalianChef()
{
    cout<<"Chef "<<name<<" dekonstruktori"<<endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta"<<endl;
}
