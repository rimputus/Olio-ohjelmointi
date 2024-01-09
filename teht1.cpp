#include <iostream>
#include <cstdlib>
#include <ctime>
int leikki(int maxluku);

using namespace std;

int main() {
    int maxluku;
    cout<<"maxluku"<<endl;
    cin>>maxluku;
    srand(20);
    int arvaukset = leikki(maxluku);
    cout<<"arvauksia oli "<<arvaukset<<endl;

}

int leikki(int maxluku){

int luku = rand() % maxluku ;
int arvaus;
int quesses = 1;
do {
    cout << "Arvaa luku 1-"<<maxluku<<endl;
    cin >> arvaus;

    if (arvaus < luku) {
        cout << "isompi" << endl;
        quesses++;
    } else if (arvaus > luku) {
        cout << "pienempi" << endl;
        quesses++;
    } else {
        cout << "oikein!" << endl;
    }
} while (arvaus != luku);
return quesses;
}
