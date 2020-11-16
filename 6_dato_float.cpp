/*Tipos de datos básicos de C++. Este programa muestra en la salida estándar el valor de una variable de
tipo float, se utiliza para almacenar números de tipo real, se almacena mediante coma flotante, tiene un rango
de almacenamiento máximo de 3.4E+38	y mínimo de 3.4E-38, utiliza 4 bytes de espacio en memoria para guardar los
datos*/

#include <iostream>//Librería estándar de entrada o salida de datos
# include <locale.h>//Librería estándar de localización (regionalización)

using namespace std;//Damos acceso al espacio de nombres

int main(){
	setlocale(LC_CTYPE, "Spanish");//Llamamos a la librería y colocamos el valor para manejo de caracteres
	cout<<"Este es un ejemplo de número de tipo float, con precisión en 4 o menos dígitos decimales significativos"<<endl;//Imprimimos en pantalla esto
float numero = 13.5342;//Definimos la constante	

	cout<<numero;//Imprimimos la constante
	
	return 0;//Finalizamos el programa
	
}

	
