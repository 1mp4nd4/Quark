#include<iostream>

using namespace std;

int main()
{
	int lado;
	cout << "Ingrese el valor del lado: ";
	cin >> lado;
	if (lado)
	{
		cout << "La superficie del cuadrado es: ";
		cout << lado * lado;
		cout << "\n";
		cout << "El perimetro del cuadrado es: ";
		cout << lado * 4;

	}
	else
	{
		cout << "Ingrese un valor valido";
		return 0;
	}


}