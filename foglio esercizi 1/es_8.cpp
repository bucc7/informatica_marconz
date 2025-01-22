// esercizio 8
/* Scrivere un programma che legga da input valori di diverso tipo (per esempio un intero, poi
un float e poi un char) e poi ne ristampi i valori. 
Che cosa succede se non inseriamo tutti i dati? il programma si blocca
Cosa succede se ne inseriamo di più di quelli richiesti? salta un input
Che cosa succede se inseriamo un dato incompatibile con la variabile di destinazione? se metto un float nell'int la parte decimale finisce nel float, se metto un char nell'int, l'intero diventa zero, il float 8.81584e-39 e il char nullo
*/
#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char c;
    cout << "Inserisci un intero: ";
    cin >> a;
    cout << "Inserisci un float: ";
    cin >> b;
    cout << "Inserisci un char: ";
    cin >> c;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    return 0;
}