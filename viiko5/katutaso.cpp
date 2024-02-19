#include "katutaso.h"

Katutaso::Katutaso() : as1(new Asunto()), as2(new Asunto()) {}

void Katutaso::maaritaAsunnot(int asukkaidenMaara1, double neliomaara1, int asukkaidenMaara2, double neliomaara2) {
    as1->maaritaAsunnot(asukkaidenMaara1, neliomaara1);
    as2->maaritaAsunnot(asukkaidenMaara2, neliomaara2);
}

double Katutaso::laskeKulutus(double hinta) const {
    double kulutus = (as1->annaAsukasMaara() * as1->annaNeliot() * hinta) + (as2->annaAsukasMaara() * as2->annaNeliot() * hinta);
    return kulutus;
}
