#include<iostream>

using namespace std;

int main()
{
    int num1;
    cout << "Ingrese un numero positivo: ";
    cin >> num1;

    if(num1 < 0 || num1 > 999) { cout << "ingrese un numero valido"; return 0;}
    
    if (num1 > 9)
    {
        if (num1 > 99)
        {
            cout << "El numero tiene tres cifras";
            return 0;
        }
        else
        {
            cout << "El numero tiene dos cifras";
            return 0;
        }
    }
    else
    {
        cout << "El numero tiene 1 cifra";
        return 0;
    }
}
