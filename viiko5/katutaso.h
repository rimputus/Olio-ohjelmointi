#ifndef KATUTASO_H
#define KATUTASO_H

#include "asunto.h"

class Katutaso {
public:
    Katutaso();
    Asunto *as1;
    Asunto *as2;
    void maaritaAsunnot(int asukkaidenMaara1, double neliomaara1, int asukkaidenMaara2, double neliomaara2);
    double laskeKulutus(double hinta) const;
};

#endif // KATUTASO_H

