//5.	Hallar el complemento a 9 de un número entero N.  
//		Ej. 4567, su complemento es 5432.

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void Comple(int N, int num, int &suma);

int main()
{
	int N, num=1, suma=0;
	cout<<"Complemento a 9 de un numero"<<endl;
	cout<<"Ingrese el numero entero: "<<endl;
	cin>>N;

	Comple(N, num, suma);
	cout<<"Su complemento sera "<<suma<<endl;
}

void Comple(int N, int num, int &suma)
{
	int Complemento, d;
	while (N>0)
	{
		Complemento=N%10;
		num=num*10;
		d=9-Complemento;
		suma=suma+d*num;
		N=N/10;
	}
	suma=suma/10;
}
