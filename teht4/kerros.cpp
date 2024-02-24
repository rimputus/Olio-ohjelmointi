#include "kerros.h"

Kerros::Kerros() : as1(new Asunto()), as2(new Asunto()), as3(new Asunto()), as4(new Asunto()) {}

void Kerros::maaritaAsunnot(int asukkaidenMaara1, double neliomaara1, int asukkaidenMaara2, double neliomaara2,
                            int asukkaidenMaara3, double neliomaara3, int asukkaidenMaara4, double neliomaara4) {
    as1->maaritaAsunnot(asukkaidenMaara1, neliomaara1);
    as2->maaritaAsunnot(asukkaidenMaara2, neliomaara2);
    as3->maaritaAsunnot(asukkaidenMaara3, neliomaara3);
    as4->maaritaAsunnot(asukkaidenMaara4, neliomaara4);
}

double Kerros::laskeKulutus(double hinta) const {
    double kulutus = (as1->annaAsukasMaara() * as1->annaNeliot() * hinta) + (as2->annaAsukasMaara() * as2->annaNeliot() * hinta) +
                     (as3->annaAsukasMaara() * as3->annaNeliot() * hinta) + (as4->annaAsukasMaara() * as4->annaNeliot() * hinta);
    return kulutus;
}
