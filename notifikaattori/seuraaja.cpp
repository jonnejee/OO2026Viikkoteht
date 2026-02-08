#include "seuraaja.h"
#include <iostream>
using namespace std;


seuraaja::seuraaja(std::string nimi)
{
    this->nimi = nimi;
    next = nullptr;
    cout << "Luodaan seuraaja " << nimi << endl;
}

std::string seuraaja::getNimi()
{
    return nimi;
}

void seuraaja::paivitys(std::string viesti)
{
    cout << nimi << " sai viestin " << viesti << endl;
}
