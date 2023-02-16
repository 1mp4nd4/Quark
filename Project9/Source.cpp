#include<iostream>;

using namespace std;

int main()
{
	int num1;
	cout << "Ingrese un numero: ";
	cin >> num1;
	
	if (num1)
	{
		if (num1 > 0)
		{
			cout << "El numero es positivo";
		}
		else
		{
			cout << "El numero es negativo";
		}

	}
	else
	{
		cout << "El numero es nulo";
	}
}