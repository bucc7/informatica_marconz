# tipi di variabili
(2^byte)

char 1 byte 

short 2b

int(eri)/float (decimali) 4b

long/double 8b

# assegnazione di variabili
int x = 30;

int x;
x = 30;

x = y; x = 2+3*x (x usa il valore precedente -> ci dev'essere un valore assegnato precedentemente)

# convenzioni di scrittura variabili
camelCase;

snake_case;

# operatori
divisione (intera)
> 7 / 3

resto
> 7 % 3 (resto = 1)

divisione (decimale)
> 7. / 3

# tabella ascii
> char a = 'n' <=> char a = 110; 

> char b = '1' != char a = 1;

le lettere minuscole e maiuscole in ascii sono lontane di 32 caratteri
> char x = 'm';

> x -= 32;

> ora x = 'M'

# costanti
> *const* float pi = 3.14;

solitamente i nomi delle costanti sono in maiuscolo

# concatenazione in output
```cpp
cout << "qualcosa" << "qualcos'altro" << endl;
```

# esempio di programma da esercizi guidati 1.1
```cpp
#include <iostream>
using namespace std;

int main()
{

	int a, b;
	cout << "Inserisci due numeri interi:" << endl;		

}

```