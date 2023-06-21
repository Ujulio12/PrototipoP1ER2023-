#ifndef USUARIO_H
#define USUARIO_H

#include "usuario.h"
#include "bitacora.h"
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <conio.h>
#include <iomanip>
#include <string>
#include <vector>
#include <chrono>
#define ENTER 13
#define BACKSPACE 8
#define INTENTOS 3

using namespace std;
class usuario
{
	private:
		string IDAdministrador,nameAdministrador,passwordAdministrador,code;
		string ID,name,password, jornada, correo,pelicula;
		int telefono,cantidad,total;
	public:
	    void menuGeneral();
	    void Compra();
	    void desplegarCompras();
	    void agregarAsignacion();
		void menuAdministrador();
		void insertarAdministrador();
		void desplegarAdministrador();
		void buscarAdministrador();
		void menuReportes();
		//void menuCatalogos();
		void Pago();
		void menuClientes();
		void insertarClientes();
		void desplegarClientes();
		void modificarClientes();
		void buscarClientes();
		void borrarClientes();
		void menuUsuario();
		/*void insertarUsuario();
		void desplegarUsuario();
		void modificarUsuario();
		void buscarUsuario();
		void borrarUsuario();*/
        void desplegarVentas();
};

#endif // USUARIO_H
