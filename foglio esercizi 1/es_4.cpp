// esercizio base 4
/* Scrivere un programma che legga due numeri interi memorizzati in variabili di tipo short da
input e ne stampi la somma, la differenza, il prodotto, il rapporto e il modulo. 
Che cosa succede se inserite via input dei numeri che fuoriescono dal dominio del tipo? 
Che cosa succede invece se sono i risultati delle operazioni ad uscire da tale dominio? 
*/

#include <iostream>
using namespace std;

int main()
{
    
    short a;
    short b;
    cout << "Inserisci un numero: ";
    cin >> a;
    cout << "Inserisci un altro numero: ";
    cin >> b;
    cout << endl;
    
    cout << "somma = " << a+b << endl << "differenza = " << a-b << endl << "prodotto = " << a*b <<endl << "rapporto = " << a/b << endl << "resto = " << a%b << endl;
    
}