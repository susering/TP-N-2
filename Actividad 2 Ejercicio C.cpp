#include<iostream> //libreria
using namespace std; //espacio de nombre estandar
int main() //funcion principal
{
	cout<<"***************************"<<endl;
	cout<<endl;
	cout<< "Actividad 2 - Ejercicio C"<<endl; //titulo
	cout<<endl;
	cout<<"***************************"<<endl;
	cout<<endl;
	cout<<endl;

	//variables
	int a;
	int b;
	int c;
	
	cout<<"Por favor ingrese tres numeros"<<endl; //mensaje en pantalla pidiendo al usuario que ingrese tres valores
	cin>>a>>b>>c; //espacio para que el usuario ingrese los valores
	
	if(a>b && b>c)	//inicio de la condicional
	{
		cout<<"El numero mas grande es: "<<a<<endl;
		cout<<"El numero mas chico es: "<<c;
	}
	else if(a>c && c>b) //2do caso de la condicional
	{
		cout<<"El numero mas grande es: "<<a<<endl;
		cout<<"El numero mas chico es: "<<b;
	}
	else if (b>a && a>c) //3er caso de la condicional
	{
		cout<<"El numero mas grande es: "<<b<<endl;
		cout<<"El numero mas chico es: "<<c;
	}
	else if (b>c && c>a) //4to caso de la condicional
	{
		cout<<"El numero mas grande es: "<<b<<endl;
		cout<<"El numero mas chico es: "<<a;
	}
	else if (c>b && b>a) //5to caso de la condicional
	{
		cout<<"El numero mas grande es: "<<c<<endl;
		cout<<"El numero mas chico es: "<<a;
	}
	else if (c>a && a>b) //6to caso de la condicional
	{
		cout<<"El numero mas grande es: "<<c<<endl;
		cout<<"El numero mas chico es: "<<b;
	}
	if (a == b || b == c) //Nueva estructura condicional, englobando la posibilidad de que valores sean iguales
	{
		cout<<"¡No se pueden repetir numeros!";
		return 0;
	}
	//else if(a == c) 
//	{
//		cout<<"¡No se pueden repetir numeros!";
//		return 0;
//	}
	
	return 0;
}

 

