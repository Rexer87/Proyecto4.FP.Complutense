#ifndef LISTACORREOS_H
#define LISTACORREOS_H

#include "correo.h"

const int MAXCORREOS = 100;

typedef struct{
	tCorreo listaCorreos[MAXCORREOS];
	int contador;
} tListaCorreos;

#endif
