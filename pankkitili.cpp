#include "pankkitili.h"
#include <iostream>
using namespace std;


Pankkitili::Pankkitili(string nimi)
{
    omistaja = nimi;
    saldo = 0;
}

double Pankkitili::getBalance() const
{
    return saldo;
}

bool Pankkitili::deposit(double amount)
{
    if (amount <= 0)
    return false;

    saldo = saldo + amount;
    cout << "Pankkitili: talletus " << amount << " tehty" << endl;
    return true;
}

bool Pankkitili::withdraw(double amount)
{
    if (amount <= 0)
    return false;
    if (amount > saldo)
    return false;
    saldo = saldo - amount;
    cout << "Pankkitili: nosto " << amount << " tehty" << endl;
    return true;

}
