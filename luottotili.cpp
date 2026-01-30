#include "luottotili.h"
#include <iostream>
using namespace std;

Luottotili::Luottotili(string nimi, double raja)
    : Pankkitili(nimi), luottoRaja(raja)
{
    saldo = raja;
}

bool Luottotili::withdraw(double amount)
{
    if (amount <= 0)
    return false;
    if (amount > saldo + luottoRaja)
    return false;
    saldo = saldo - amount;
    cout << "Luottotili: nosto " << amount << " tehty, luottoa jäljellä " << saldo << endl;
    return true;
}
