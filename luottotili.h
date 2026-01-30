#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "pankkitili.h"
class Luottotili : public Pankkitili
{
public:
    Luottotili(std::string nimi, double raja);
    bool withdraw(double amount) override;
private:
    double luottoRaja = 1000;
};

#endif // LUOTTOTILI_H
