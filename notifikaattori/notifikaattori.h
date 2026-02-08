#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include <string>

class seuraaja;

class notifikaattori
{
public:
    notifikaattori();
    void lisaa(seuraaja* s);
    void poista(seuraaja* s);
    void tulosta ();
    void postita(std::string viesti);

private:
    seuraaja* seuraajat;
};

#endif // NOTIFIKAATTORI_H
