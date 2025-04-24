#include<iostream> //libreria
using namespace std; //espacio de nombre estandar
int main() //funcion principal
{
	//variables
	float n1;
	float n2;
	
	
	
	
	
	cout<<"***************************"<<endl;
	cout<<endl;
	cout<< "Actividad 2 - Ejercicio B"<<endl; //titulo
	cout<<endl;
	cout<<"***************************"<<endl;
	cout<<endl;
	cout<<endl;
	
	
	cout<<"Por favor ingrese un numero"<<endl; //salida de informacion pidiendo un numero
	cin>>n1;								//entrada de informacion ingresando el numero
	cout<<endl;
	cout<<"Por favor ingrese el segundo numero"<<endl; //salida de informacion pidiendo un segundo numero
	cin>>n2;										 //entrada de informacion ingresando un segundo numero
	
	if (n1 > n2)	//inicio de la condicional
	{
		cout<<endl;
		cout<<"La suma entre estos numeros es: "<< n1+n2<<endl; //resultado de la operacion aritmetica
		cout<<"La cuenta hecha para este resultado es: "<<n1<<" + "<<n2<<endl; //proceso detras de la operacion
		cout<<endl;
		cout<<"La resta entre estos numeros es: "<<n1-n2<<endl;	//resultado de la operacion aritmetica
		cout<<"La cuenta hecha para este resultado es: "<<n1<<" - "<<n2<<endl;	//proceso detras de la operacion
	}
	else //fin de la condicional
	{
		cout<<endl;
		cout<<"El producto entre estos numeros es: "<<n1*n2<<endl;		//resultado de la operacion aritmetica
		cout<<"La cuenta hecha para este resultado es: "<<n1<<" * "<<n2<<endl;	//proceso detras de la operacion
		cout<<endl;
		cout<<"La division entre estos numeros es: "<<n1/n2<<endl;	//resultado de la operacion aritmetica
		cout<<"La cuenta hecha para este resultado es: "<<n1<<" / "<<n2<<endl;	//proceso detras de la operacion
	}		
	
	return 0; //fin del codigo
}
