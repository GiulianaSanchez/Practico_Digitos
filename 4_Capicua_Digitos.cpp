//4.	Dado un número entero, comprobar si el número es capicúa,
//		es decir, si leídos de la izquierda a la derecha y 
//		viceversa dan el mismo valor o número.  
//		Ej. 34543

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void Capicua(int N, int suma, int &resultado);

int main()
{
	int N, suma=0, resultado;
	cout<<"Comprobar si el numero es capicua"<<endl;
	cout<<"Ingrese su numero"<<endl;
	cin>>N;

	Capicua(N, suma, resultado);
}

void Capicua(int N, int suma, int &resultado)
{
	int Cap;
	resultado=N;
	while (N>0)
	{
		Cap=N%10;
		suma=suma*10+Cap;
		N=N/10;
	}
	if (resultado==suma)
		{
			cout<<"Si es capicua, se puede leerse al derecho y al reves"<<endl;
		}
	else 
		{
			cout<<"No es capicua"<<endl;
		}
}

