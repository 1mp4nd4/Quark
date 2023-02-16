#include<iostream>;

using namespace std;

/*
    Realizar un programa que solicite la carga por teclado de dos números, si el primero es mayor al segundo informar su suma y diferencia, en caso contrario informar el producto y la división del primero respecto al segundo.
    Se ingresan tres notas de un alumno, si el promedio es mayor o igual a siete mostrar un mensaje "Promocionado".
    Se ingresa por teclado un número positivo de uno o dos dígitos (1..99) mostrar un mensaje indicando si el número tiene uno o dos dígitos.
    (Tener en cuenta que condición debe cumplirse para tener dos dígitos un número entero)
*/
int main()
{
 
    float num1;
    float num2;
    cout << "Ingrese un numero: ";
    cin >> num1;
    cout << "Ingrese otro numero: ";
    cin >> num2;
    //test
    if (!num1 || !num2)
    {
        cout << "Ingrese un numero valido";
    }
   
    if(num1 > num2)
    {
        cout << "La suma es: ";
        cout << num1 + num2;
        cout << "\n";
        cout << "La diferencia es: ";
        cout << num1 - num2;
        return 0;
    }
    else
    {
        cout << "El producto es: ";
        cout << num1 * num2;
        cout << "\n";
        cout << "El cociente es: ";
        cout << num1 / num2;
        return 0;
    }
    
}