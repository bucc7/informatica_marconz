/* Scrivere un programma che legga due char da standard input e stampi la stringa “Uguali” se
sono uguali e “Diversi” se sono diversi. Seguire lo pseudo-codice per implementare
l’algoritmo in C++. */

#include <iostream>
using namespace std;
int main() 
{
    char a, b;
    cout << "Inserisci due caratteri: ";
    cin >> a >> b;

    if (a == b)
        cout << "uguali" << endl;
    else
        cout << "diversi" << endl;
    return 0;
}