// esercizio 6
/* Scrivere un programma che chieda all’utente il raggio di base e l’altezza di un cono e ne
stampi il volume. */
#include <iostream>
using namespace std;

int main()
{
    float raggio, altezza;
    cout << "Inserisci il raggio di base del cono: ";
    cin >> raggio;
    cout << "Inserisci l'altezza del cono: ";
    cin >> altezza;
    cout << "Il volume del cono misura: " << ((3.14*raggio*raggio)*altezza)/3 << endl;
}