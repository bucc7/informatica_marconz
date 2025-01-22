// esercizio guidato 3
/* 
Scrivere un programma che prenda da standard input la lunghezza dei lati di un rettangolo e
ne stampi l’area.
*/
#include <iostream>
using namespace std;

int main() 
{
    float base;
    float height;
    cout << "Inserisci la base del rettangolo: ";
    cin >> base;
    cout << endl;
    cout << "Inserisci l'altezza del rettangolo: ";
    cin >> height;
    cout << endl;
    
    cout << "La base del rettangolo è: " << base*height << endl;
    return 0;
}