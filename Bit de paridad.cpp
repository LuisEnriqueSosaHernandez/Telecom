#include <stdio.h>
#include <algorithm>
#include <windows.h>
#include <iostream>
#include <cstring>
using namespace std;
string b;//String que guarda la cadena de bits
int main(){
	int bit;//Para almacenar la cantidad de unos
    cout <<"Inserte 7 elementos como cadena bits:\n";
	cin >> b;
    int decimal = 0;

	for(int x=0;x<b.size();x++){
        decimal = (decimal * 2 + b[x] - '0');//En la posicion del string , convertimos a decimal con -'0' o se puede utilizar un parseo
	}
    bit = __builtin_popcount(decimal); //Con esta funcion incluida en algorithm,devolvemos la cantidad de unos o bits encendidos
    system("cls");//Limpieza de pantalla
    cout <<"\nCantidad de bits encendidos: " << bit << "\n\n";
    cout <<"Bit de paridad Par: \n";
    cout <<b << "\t"<<((bit%2 == 0) ? "0\n\n" : "1\n\n"); //Si es par imprime 0 else o ? 1
	cout <<"Bit de paridad Impar: \n";
	cout <<b << "\t"<<((bit%2 == 0) ? "1\n\n" : "0\n\n"); //Si es par imprime 1 else o ? 0
	system("pause");
	return 0;
}
