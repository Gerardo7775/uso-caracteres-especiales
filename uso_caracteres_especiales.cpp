#include<iostream>
#include<conio.h>
#include<locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "spanish");//Esta funcion nos permite extraer las configuraciones de nuestro ordenador
	
	cout<<"Hola niño ¿Comó estas?"<<endl;
	
	getch();
	return 0;
	
}
