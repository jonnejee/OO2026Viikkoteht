#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <string>


class Pankkitili
{
public:
    Pankkitili(std::string nimi);
    virtual ~Pankkitili() = default;

    double getBalance() const;
    virtual bool deposit(double amount);
    virtual bool withdraw(double amount);
protected:
    std::string omistaja;
    double saldo = 0;




};

#endif // PANKKITILI_H
