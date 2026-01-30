#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <string>
#include "luottotili.h"
#include "pankkitili.h"

class Asiakas
{
public:
    Asiakas(std::string nimi, double luottoRaja);
    std::string getNimi() const;
    void showSaldo() const;
    bool talletus(double amount);
    bool nosto(double amount);
    bool luotonMaksu(double amount);
    bool luotonNosto(double amount);
    bool tiliSiirto(double summa, Asiakas & vastaanottaja);
private:
    std::string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;
};

#endif // ASIAKAS_H
