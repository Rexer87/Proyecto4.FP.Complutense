/**

alta de nuevos usuarios

*/



/**

carga de usuarios

En el modulo listaUsuarios
*/
bool cargar(tListaUsurios & usuarios, string dominio){
	inicializar(usuarios);
	string nombreFichero = dominio + FICHERO;
	
	fichero.open(nombreFichero);
	if(!fichero.open()){
	ok = false;
	}
	else{
		while (cargarUsuario(fichero, usuario) && listaLlena){
		
		añadir(lista, usuario);
		}
		fichero.close();
		ok = true;
	}
}

bool cargarUsuario( fichero, usuario){
	fichero >> identificador;
	if(usuario.identificador == CENTINELA) ok = false;
	else{
		fichero >> usuario.contrasenia;
		cargarBandejaEntrada(fichero, usuario.recibidos);
		cargarBandejaEntrada(fichero, usuario.enviados);
	return ok;
	}
}

/**
mdulo de lista registro
*/

cargar (ficherp, tlistaRegistro & registros){
	inicializar(registros);
	fih >> resgistros.contador;
	for(int = 0; i<registros.contador; i++){
		cargarRegistro();
		añadirRegistro();
	}
}


/**
guardado de usuarios

analogo a la carga pero sin control de escrituras.
*/



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/**
Carga de correos
analogo a la carga de usuarios pero con un nive menos
*/



/**
 Cargar un correo
 campo asunto recoger con getline()
*/

//necesitaremos una funcion de tipo cargarCuerpo (getline a getine hasta encontrar un centinela XXX)

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/**
	Esbozo del main
*/

const 	string DOMINIO = "fdimail.com";

int main(){
	tGestor gestor;

	
	if(!arrancar(gestor,DOMINIO)){
	cout << "se arranca con listas vacias";
	do{
		op = menu(); //funcion en el gestor mejor;
		swich(op)
			case = 1;
			if(inicarSesion(gestor))
				gestionarSesion(gestor);
				break;
			case = 2;
			if(crearCuenta(gestor))
				gestionarSesion(gestor);
			break;
			
			
		}while(op != 0);
	}
}

/**
Modulo gestor
aqui esta el mamotreco en condiciones;
*/

bool arrancar(tGestor& gestor){
	inicializar(gestor, dominio);//igual es inecesario, se trara de inicializar las listas
	return (cargar(gestor.listaUsuarios, dominio) && cargar(gestor.listaCorreos, dominio));
}

void gestionarSesion(tGestor& gestor){

	do{
		mostrarInterfazUsuario(gestor);
		cin >> op;
		if(op ==1){}
		else if(op == 2){}
		else if(op == 3){}
		else if(op == 5){}
	}while(op != 0);
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
