#include<iostream>;
using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;

	cout << "Inserte el primer numero : ";
	cin >> num1;
	cout << "Inserte el segundo numero : ";
	cin >> num2;
	cout << "Inserte el tercer numero : ";
	cin >> num3;
	cout << "Inserte el cuarto numero : ";
	cin >> num4;

	if (num1 && num2 && num3 && num4)
	{
		int suma(num1 + num2);
		int producto(num3 * num4);
		cout << "La suma es: ";
		cout << suma;
		cout << "\n";
		cout << "El producto es: ";
		cout << producto;
	}
	else
	{
		"Ingrese un numero valido";
	}
	
}