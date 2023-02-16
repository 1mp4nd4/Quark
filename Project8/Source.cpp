#include<iostream>

using namespace std;

int main()
{
    float num1;
    float num2;
    float num3;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;
    cout << "Ingrese otro numero: ";
    cin >> num3;

    if(num1)

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << "El mayor es: ";
            cout <<  num1;
            return 0;
        }
    }
    else if (num2 > num3)
    {
        cout << "El mayor es: ";
        cout << num2;
        return 0;
    }
    else
    {
        cout << "El mayor es: ";
        cout << num3;
        return 0;
    }
}
