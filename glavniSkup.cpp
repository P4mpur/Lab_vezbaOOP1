#include <iostream>
#include "Skup.h"
using namespace std;

int main()
{
    Skup kompir(10);
    Skup* drugi = new Skup(5);

    cout << kompir.duzina_Niza() << endl;
    kompir.Set();
    kompir.pripada_Skupu(2) ? cout << "Pripada" : cout << "ne pripada";
    cout << endl;
    kompir.isteraj_Dupli();
    kompir.Sortiraj();
    kompir.Get();

    drugi->Set();
    drugi->pripada_Skupu(4)? cout << "Pripada" : cout << "Ne pripada" ;
    cout << endl;
    cout << drugi->duzina_Niza() << endl;
    drugi->isteraj_Dupli();
    drugi->Sortiraj();
    drugi->Get();
}