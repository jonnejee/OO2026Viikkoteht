#include <iostream>
#include "asiakas.h"

using namespace std;

int main()
{
    Asiakas aapeli("Aapeli", 1000.0);
    aapeli.showSaldo();

    aapeli.talletus(250);
    aapeli.luotonNosto(150);
    aapeli.showSaldo();

    Asiakas bertta("Bertta", 1000.0);
    bertta.showSaldo();

    cout << "Aapeli" << endl;
    aapeli.showSaldo();
    aapeli.tiliSiirto(50, bertta);
    cout << "Bertta" << endl;
    bertta.showSaldo();


    return 0;
}
