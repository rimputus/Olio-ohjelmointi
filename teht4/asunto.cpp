#include "asunto.h"

Asunto::Asunto() : asukasMaara(0), neliot(0.0) {}

void Asunto::maaritaAsunnot(int asukkaidenMaara, double neliomaara) {
    asukasMaara = asukkaidenMaara;
    neliot = neliomaara;
}

int Asunto::annaAsukasMaara() const {
    return asukasMaara;
}

double Asunto::annaNeliot() const {
    return neliot;
}
