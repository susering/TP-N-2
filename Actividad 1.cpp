#include <iostream> //libreria
using namespace std; //espacio de nombres estandar
int main() //funcion principal
{
	//Variables
	int n1;
	int n2;
	
	cout<<"**********************************"<<endl;
	cout<<endl;
	cout<<"Programa inicial de condicionales"<<endl;  //titulo del programa
	cout<<endl;
	cout<<"**********************************"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Por favor ingrese el primer numero: "; //salida de informacion pidiendo un numero entero
	cin>> n1;									//entrada de informacion dandole valor a la primera variable
	cout<<endl;
	cout<<"Por favor ingrese el segundo numero: "; //salida de informacion pidiendo un numero entero
	cin>> n2;									//entrada dde informacion dandole valora a la segunda variable
	
	if(n1>n2){						//inicio de la condicional
		
		cout<<endl;					
		cout<<"EL primer numero es mayor que el segundo";		//salida de informacion en caso que se cumpla la condcional
	}
	else{ 				//final de la condicional									
	
	cout<<endl;
	cout<<"El seguno numero es mayor que el primero"; //salida de informacion en caso que no se cumpla la condicional
}
		return 0;
}
