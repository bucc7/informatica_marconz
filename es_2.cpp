// esercizio guidato 2
#include <iostream>
using namespace std;

int main()
{
    
    int x = 1;
    int y = 2;
    cout << "x = " << x << endl << "y = " << y << endl;
    int z = x;
    x = y;
    y = z;
    cout << "x = " << x << endl << "y = " << z << endl;
    
}