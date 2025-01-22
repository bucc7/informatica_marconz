// esercizio 7
/* Scrivere un programma che richieda in input quattro valori e scambi la loro posizione in
modo circolare “verso sinistra”. Per esempio se le variabili a, b, c e d contengono
rispettivamente 1, 2, 3 e 4, alla fine dell’esecuzione esse devono contenere rispettivamente 2
3, 4 e 1. */

#include <iostream>
using namespace std;

// print a, b, c, d as b, c, d, a
int main()
{
    int a, b, c, d;
    cout << "Inserisci il valore di a: ";
    cin >> a;
    cout << "Inserisci il valore di b: ";
    cin >> b;
    cout << "Inserisci il valore di c: ";
    cin >> c;
    cout << "Inserisci il valore di d: ";
    cin >> d;
    int temp = a;
    a = b;
    b = c;
    c = d;
    d = temp;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "c: " << c << endl;
    cout << "d: " << d << endl;
}