#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <string>

class seuraaja
{
public:
    seuraaja(std::string nimi);
    std::string getNimi();
    void paivitys(std::string);
    seuraaja* next = nullptr;


private:
    std::string nimi;
};

#endif // SEURAAJA_H
