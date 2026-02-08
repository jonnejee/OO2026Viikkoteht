#include "notifikaattori.h"
#include "seuraaja.h"
#include <iostream>
#include <string>
using namespace std;

notifikaattori::notifikaattori()
{
    cout << "Luodaan notifikaattori" << endl;
    seuraajat = nullptr;
}

void notifikaattori::lisaa(seuraaja* uusi)
{
    cout << "Notifikaattori lisaa seuraajan " << uusi->getNimi() << endl;
    uusi->next = seuraajat;
    seuraajat = uusi;
}
void notifikaattori::poista(seuraaja* poistettava)
{
    cout << "Notifikaattori poistaa seuraajan " << poistettava->getNimi() << endl;
    if (seuraajat == poistettava)
    {
        seuraajat = seuraajat->next;
        return;
    }
    seuraaja* edellinen = seuraajat;
    while (edellinen->next != nullptr && edellinen->next != poistettava)
    {
        edellinen = edellinen->next;
    }
    if (edellinen->next == poistettava)
    {
        edellinen->next = poistettava->next;
    }

}

void notifikaattori::tulosta()
{
    cout << "Notifikaattori seuraajat:" << endl;
    seuraaja* ptr = seuraajat;
    while (ptr != nullptr)
    {
        cout << "Seuraaja " << ptr->getNimi() << endl;
        ptr = ptr->next;
    }

}

void notifikaattori::postita(std::string viesti)
{
    cout << "Notifikaattori postaa viestin " << viesti << endl;
    seuraaja* ptr = seuraajat;
    while (ptr != nullptr)
    {
        ptr->paivitys(viesti);
        ptr = ptr->next;
    }
}
