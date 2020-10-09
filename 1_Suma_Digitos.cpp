//1.Dado un número entero N, hacer un programa para sumar 
//los dígitos de cada uno de ellos. Ej. Si N= 45634,  
//la suma es 4+5+6+3+4=22

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

int Num_(int N, int &suma);								//Prototipo de la función

int main()
{
	int N, suma=0;
	cout<<"Ingrese los digitos a sumar: "<<endl;
	cin>>N;
	Num_(N, suma);										//Llamada de la función
	cout<<"La suma de los digitos es: "<<suma<<endl;		
	getch();
	
}

int Num_(int N, int &suma)								//Definición de la función
{
	int Num_Entero;
	while (N>0)
	{
		Num_Entero=N%10;
		suma=suma+Num_Entero;
		N=N/10;
	}
	return suma;
}
