///2.	Dado un número entero N, hacer un programa para invertir
///		el número en otra variable Z.  
///		Ej. Si N= 456721, el número invertido es Z=127654.

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void Num_Inv(int N, int &z);		//Prototipo de la función

int main ()
{
	int N, z=0;
	cout<<"Invertidor de dígitos"<<endl;
	cout<<"Ingrese los digitos a invertir: "<<endl;
	cin>>N;

	Num_Inv(N, z);				//Llamada de la funcion
	cout<<"El número invertido es "<<z<<endl;

}

void Num_Inv(int N, int &z)		//Definición de la funcion
{
	int Num_;
	while (N>0)
	{
		Num_=N%10;
		N=N/10;
		z=z*10+Num_;
	}
}
