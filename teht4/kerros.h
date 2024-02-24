#ifndef KERROS_H
#define KERROS_H

#include "katutaso.h"
#include "asunto.h"

class Kerros : public Katutaso {
public:
    Kerros();
    Asunto *as1, *as2, *as3, *as4;
    void maaritaAsunnot(int asukkaidenMaara1, double neliomaara1, int asukkaidenMaara2, double neliomaara2,
                        int asukkaidenMaara3, double neliomaara3, int asukkaidenMaara4, double neliomaara4);
    double laskeKulutus(double hinta) const;
};

#endif // KERROS_H
