#ifndef GESTOR_H
#define GESTOR_H


using namespace std;

typedef struct{
string dominio;
string usuarioActivo;
tCorreo listaCorreos[MAXCORREOS];
int contadorCorreos;

}tGestor;


#endif