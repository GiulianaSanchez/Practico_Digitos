//	6.	Dado un número entero en base 8, comprobar si alguno 
//	de sus dígitos no corresponden a su base.  
//	Ej. El número 2762823, el dígito 8 no corresponde a la base 

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

void Base(int N);

int main()
{
	int N;
	cout<<"Comprobar si algun digitono corresponde a la base 8"<<endl;
	cout<<"Ingrese su numero entero: "<<endl;
	cin>>N;

	Base(N);
}

void Base(int N)
{
	int Base_;
	while (N>0)
	{
		Base_=N%10;
		if (Base_%8==0)
		{
			cout<<"El digito "<<Base_<<" no corresponde a la base."<<endl;
		}
		if (Base_%9==0)
		{
			cout<<"El digito "<<Base_<<" no corresponde a la base."<<endl;
		}
		if ((Base_%8!=0)&&(Base_%9!=0))
		{
			cout<<"El digito "<<Base_<<" si corresponde a la base"<<endl;
		}
		N=N/10;
	}			
}
