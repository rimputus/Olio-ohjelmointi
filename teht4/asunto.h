// asunto.h
#ifndef ASUNTO_H
#define ASUNTO_H

class Asunto {
private:
    int asukasMaara;
    double neliot;
public:
    Asunto();
    void maaritaAsunnot(int asukkaidenMaara, double neliomaara);
    int annaAsukasMaara() const;
    double annaNeliot() const;
};

#endif // ASUNTO_H
