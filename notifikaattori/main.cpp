#include <iostream>
#include "notifikaattori.h"
#include "seuraaja.h"
using namespace std;

int main()
{
    notifikaattori n;
    seuraaja a("A");
    seuraaja b("B");
    seuraaja c("C");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);

    n.tulosta();
    n.postita("Tama on viesti 1");
    n.poista(&b);
    n.postita("Tama on viesti 2");


    return 0;
}
