/* Scrivere un programma che legga tre numeri interi e li stampi in ordine crescente. */

#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Inserisci tre numeri interi: ";
    cin >> a >> b >> c;
    int aux;

    if (a > b) // sostituisce i valori a e b
    {
        aux = a;
        a = b;
        b = aux;
    }

    if (a > c) // sostituisce i valori a e c
    {
        aux = a;
        a = c;
        c = aux;
    }

    if (b > c) // sostituisce i valori b e c
    {
        aux = b;
        b = c;
        c = aux;
    }

    cout << "I numeri inseriti in ordine crescente sono: " << a << ", " << b << ", " << c << endl;

    return 0;
}