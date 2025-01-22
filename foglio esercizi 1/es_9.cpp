// esercizio 9
/* Scrivere un programma che chieda all’utente una lettera minuscola e ne stampi la versione maiuscola. */

#include <iostream>
using namespace std;

int main() {
    char lettera;
    cout << "Inserisci una lettera: ";
    cin >> lettera;
    char maiuscola = lettera - 32;
    cout << maiuscola << endl;
    return 0;
}