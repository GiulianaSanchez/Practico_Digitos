//3.	Hacer un programa para contar los dígitos pares 
//		que tiene un número N.  
//		Ej. Si N= 5678312, este tiene 3 dígitos pares (6, 8, 2).

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void Num(int N, int &pares);

int main()
{
	int N, pares=0;
	cout<<"Contador de dígitos pares"<<endl;
	cout<<"Ingrese los digitos: "<<endl;
	cin>>N;

	Num(N, pares);
	cout<<"Hay "<<pares<<" digitos pares"<<endl;
}

void Num(int N, int &pares)
{
	int NumPares;
	while(N>0)
	{
		NumPares=N%10;
		if (NumPares%2==0)
		{
			pares=pares+1;
		}
		N=N/10;
	}
}
