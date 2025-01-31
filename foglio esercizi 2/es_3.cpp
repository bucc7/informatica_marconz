/* Scrivere un programma che prenda in input un numero reale e ne stampi il valore assoluto. (senza usare fabs) */

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Inserisci un numero: ";
	cin >> n;
	if (n < 0)
	  cout << -1 * n;
	else
	  cout << n;

	return 0;
	
}
