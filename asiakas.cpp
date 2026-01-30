#include "asiakas.h"
#include <iostream>

using namespace std;

Asiakas::Asiakas(string nimi, double raja)
    : nimi(nimi),
    kayttotili(nimi),
    luottotili(nimi,raja)
{
    cout <<"Pankkitili luotu " << nimi << ":lle" << endl;
    cout <<"Luottotili luotu " << nimi << ":lle, luottoraja: " << raja << endl;
    cout << "Asiakkuus luotu " << nimi << endl;

}

void Asiakas::showSaldo() const
{
    cout << "Kayttotilin saldo " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double amount)
{
    return kayttotili.deposit(amount);
}

bool Asiakas::nosto(double amount)
{
    return kayttotili.withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount)
{
    return luottotili.deposit(amount);
}

bool Asiakas::luotonNosto(double amount)
{
    return luottotili.withdraw(amount);
}

bool Asiakas::tiliSiirto(double summa, Asiakas &vastaanottaja)
{
    if (summa <= 0)
    return false;

    if (summa > kayttotili.getBalance())
    return false;

    kayttotili.withdraw(summa);
    vastaanottaja.kayttotili.deposit(summa);

    cout << getNimi() << "Pankkitili: siirtaa " << summa << " " << vastaanottaja.getNimi() << ":lle" << endl;
    cout << vastaanottaja.getNimi() << " Pankkitili: talletus " << summa << " tehty" << endl;
    return true;
}

string Asiakas::getNimi() const
{
    return nimi;
}
