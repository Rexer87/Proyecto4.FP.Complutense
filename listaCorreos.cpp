using namespace std;
#include <iostream>
#include <fstream>
#include <string>

#include "listaCorreos.h"

void inicializar(tListaCorreos &correos){
	correos.contador = 0;
}

bool cargar(tListaCorreos &correos, string dominio){
}

void guardar(const tListaCorreos &correos, string dominio){
}

bool insertar(tListaCorreos &correos, const tCorreo &correo){
}

bool buscar(const tListaCorreos &correos, string id, int &pos){

	int ini = 0, fin = correos.contador-1, mitad;
	bool encontrado = false;			//Por defecto no se ha econtrado el elemento que se busca
	while(ini<=fin && !encontrado){		//Mientras que mi rango de busqueda exista y no haya encontrado el elemento
		mitad = (ini+fin) / 2;

		if(id < correos.listaCorreos[mitad].identidad){
		fin = mitad - 1;
		}
		else if(correos.listaCorreos[mitad].identidad < id){
		ini = mitad + 1;
		}
		else{
		encontrado = true;
		}
	}
	if(encontrado) pos = mitad;
	else pos = ini;
	
	return encontrado;
}

void ordenar_AF(tListaCorreos &correos){
}