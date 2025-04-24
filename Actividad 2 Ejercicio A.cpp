#include <iostream> //libreria
using namespace std; //espacio de nombre estandar
int main() //funcion principal
{
	//variables
	int n1;
	
	cout<<"***************************"<<endl;
	cout<<endl;
	cout<< "Actividad 2 - Ejercicio A"<<endl; //titulo
	cout<<endl;
	cout<<"***************************"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Por favor ingrese un numero: "; //salida de informacion mostrando un mensaje
	cin>>n1; //entrada de informacion para el valor de la variable
	
	if(n1 > 0) //inicio de la condicional
	{
		cout<<endl;
		cout<<"El numero ingresado es positivo";  //resultado si se cumple el primer caso
		}
	else if(n1==0) //segundo caso de la condicional
	{
		cout<<endl;
		cout<<"EL numero ingresado es nulo"; //resultado si se cumple el segundo caso
	}
	else // tercer caso en la condicional
	{
		cout<<endl;
		cout<<"El numero ingresado es negativo"; //resultado si se cumple el tercer caso
	}

	return 0; //fin del codigo
}
