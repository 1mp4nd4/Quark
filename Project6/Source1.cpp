#include<iostream>:

using namespace std;

int main()
{
	float note1;
	float note2;
	float note3;
	
	cout << "Ingrese la primer nota: ";
	cin >> note1;
	cout << "Ingrese la primer nota: ";
	cin >> note2;
	cout << "Ingrese la primer nota: ";
	cin >> note3;

	if(!note1 || !note2 || !note3){"Ingrese un numero valido" }

	float promedio = (note1 + note2 + note3) / 3;

	if (promedio >= 7)
	{
		cout << "Estas aprobado!";
	}
	else
	{
		cout << "Desaprobaste, intentalo nuevamente"
	}
}