#include <iostream>

#include "BaseCake.h"
#include "Cake.h"
#include "ChocolateCake.h"
#include "StrawberryCake.h"


using namespace std;

int main(void)
{
    Cake* baseCake = new BaseCake();
    cout << "Basic Cake \n";
    cout << baseCake->Serve() << endl;
    cout << baseCake->price() << endl;

    Cake* decoratedCake = new ChocolateCake(baseCake);
    cout << "Chocolate decorated Cake \n";
    cout << decoratedCake->Serve() << endl;
    cout << decoratedCake->price() << endl;

    delete decoratedCake;

    decoratedCake = new StrawberryCake(baseCake);
    cout << "Strawberry decorated Cake \n";
    cout << decoratedCake->Serve() << endl;
    cout << decoratedCake->price() << endl;

    delete decoratedCake;
    delete baseCake;
    return 0;

}
