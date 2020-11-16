/*Tipos de datos b�sicos de C++. Este programa muestra en la salida est�ndar el valor de una variable de
tipo float, se utiliza para almacenar n�meros de tipo real, se almacena mediante coma flotante, tiene un rango
de almacenamiento m�ximo de 3.4E+38	y m�nimo de 3.4E-38, utiliza 4 bytes de espacio en memoria para guardar los
datos*/

#include <iostream>//Librer�a est�ndar de entrada o salida de datos
# include <locale.h>//Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std;//Damos acceso al espacio de nombres

int main(){
	setlocale(LC_CTYPE, "Spanish");//Llamamos a la librer�a y colocamos el valor para manejo de caracteres
	cout<<"Este es un ejemplo de n�mero de tipo float, con precisi�n en 4 o menos d�gitos decimales significativos"<<endl;//Imprimimos en pantalla esto
float numero = 13.5342;//Definimos la constante	

	cout<<numero;//Imprimimos la constante
	
	return 0;//Finalizamos el programa
	
}

	
