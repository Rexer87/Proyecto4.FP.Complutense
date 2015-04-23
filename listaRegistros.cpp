#include <iostream>
#include <string>
#include <fstream>
#include "listaRegistros.h"

using namespace std;

typedef struct{
string identificador;
bool leido;
}tRegistro;

typedef struct{
tRegistro registro[];
int contador;
}tListaRegistos;


void inicializar(tListaRegCorreo &listaReg){
}

void cargar(tListaRegCorreo &listaReg, ifstream& archivo){
}

void guardar(const tListaRegCorreo &listaReg, ofstream& archivo){
}

bool insertar(tListaRegCorreo &listaReg, tRegCorreo registro){
}

bool borrar(tListaRegCorreo &listaReg, string id){
}

bool correoLeido(tListaRegCorreo &listaReg, string id){
}

int buscar(const tListaRegCorreo &listaReg, string id){
}