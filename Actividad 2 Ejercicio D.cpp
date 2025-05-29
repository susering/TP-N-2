#include<iostream> //libreria
using namespace std; //espacio de nombre estándar
int main() //titulo
{
	//variables
	float n1;
	float n2;
	float n3;
	float promedio;
	
	cout<<"***************************"<<endl;
	cout<<endl;
	cout<<"Actividad 2 - Ejercicio D"<<endl; //titulo
	cout<<endl;
	cout<<"***************************"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Por favor ingrese sus tres notas."<<endl; //salida de informacion pidiendo notas
	cin>>n1>>n2>>n3; //entrada de datos para darle valor a 3 variables
	
	promedio = n1+n2+n3; //dandole valor a la cuarta variable

	if(promedio / 3 >= 7) //inicio de la condicional
	{
		cout<<endl;
		cout<<"Usted aprueba con TEA"; //resultado si se cumple el primer caso
	}
	else if(promedio / 3 >= 4 & promedio / 3 < 7) //segundo caso
	{
		cout<<endl;
		cout<<"Usted desaprueba con TEP"; //resultado si se cumple el segundo caso
	}
	else //fin de la condicional (tercer caso)
	{
	
		cout<<endl;
		cout<<"Usted desaprueba con TED"; //resultado si se cumple el tercer caso
	}
	
	return 0; //fin del código
}
