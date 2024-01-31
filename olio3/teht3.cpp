#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main(){
    Chef kokki1("ramsey");
    ItalianChef italianKokki("spagettimafia", 100, 250);
    kokki1.makeSalad();
    kokki1.makeSoup();
    italianKokki.makePasta(250, 100);
    return 0;
}
