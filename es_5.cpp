// esercizio 5
/* Scrivere un programma che chieda all’utente le iniziali del suo nome, la sua età e la sua
altezza e stampi queste informazioni a schermo. */
#include <iostream>
using namespace std;
int main()
{
    cout << "Inserisci l'iniziale del tuo nome: ";
    char iniziale_nome;
    cin >> iniziale_nome;
    cout << "Inserisci l'iniziale del tuo cognome: ";
    char iniziale_cognome;
    cin >> iniziale_cognome;
    cout << "Inserisci la tua età: ";
    int età;
    cin >> età;
    cout << "Inserisci la tua altezza: ";
    float altezza;
    cin >> altezza;
    
    cout << "Nome: " << iniziale_nome << endl << "Cognome: " << iniziale_cognome << endl << "Età: " << età << endl << "Altezza: " << altezza;
    return 0;
}