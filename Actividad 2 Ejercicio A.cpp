#include <iostream>
using namespace std;
int main()
{
	//variables
	int n1;
	
	cout<<"***************************"<<endl;
	cout<<endl;
	cout<< "Actividad 2 - Ejercicio A"<<endl;
	cout<<endl;
	cout<<"***************************"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Por favor ingrese un numero: ";
	cin>>n1;
	
	if(n1 > 0)
	{
		cout<<endl;
		cout<<"El numero ingresado es positivo";
		}
	else if(n1==0)
	{
		cout<<endl;
		cout<<"EL numero ingresado es nulo";
	}
	else
	{
		cout<<endl;
		cout<<"El numero ingresado es negativo";
	}

	return 0;
}
