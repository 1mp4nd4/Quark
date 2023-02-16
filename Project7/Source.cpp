#include<iostream>;

using namespace std;

int main()
{
	int num;
	
	cout << "Ingrese un numero del 1 al 99: " ;
	cin >> num;
	num = abs(num);
	if (!num || num > 99) { cout << "Ingrese un numero valido"; return 0; }

	cout << "\n";

	if (num > 9)
	{
		cout << "El numero tiene dos digitos";
	}
	else
	{
		cout << "El numero tiene un digito";
	}
}