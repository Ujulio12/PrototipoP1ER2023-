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
string nameAdministrador;
using namespace std;
string codigo;
string auxCODE,auxNOMBRE;
bitacora bit;
void usuario::menuAdministrador()
{
    int Opciones;
	char x;
	do
    {
	system("cls");
	cout << "\t\t\t*==============================*" << endl;
	cout << "\t\t\t|   INGRESO DE ADMINISTRADOR   |" << endl;
	cout << "\t\t\t*==============================*" << endl;
	cout << "\t\t\t 1. Ingresar Administrador" << endl;
	cout << "\t\t\t 2. Salir del sistema" << endl;
	cout << "\t\t\t*==============================*" << endl;
	cout << "\t\t\t    Opciones a escoger:[1/2]  " << endl;
	cout << "\t\t\t*==============================*" << endl;
	cout << "\t\t\t    Ingresa una Opcion: ";
    cin >> Opciones;
    switch(Opciones)
    {
    case 0:
        system("cls");
        std::cout << "*===========================================*" << std::endl;
        std::cout << "||    Bienvenido al Programa EASTER EGG    ||" << std::endl;
        std::cout << "*===========================================*" << std::endl;
        std::cout << std::endl;
        std::cout << "    UUUU   UUUU   MMMM     MMM   GGGGGG   " << std::endl;
        std::cout << "    UUUU   UUUU   MMMMM   MMMM  GGGGGGGG  " << std::endl;
        std::cout << "    UUUU   UUUU   MMMMMM MMMMM GGG        " << std::endl;
        std::cout << "    UUUU   UUUU   MMM MMMM MMM GGG   GGGGG " << std::endl;
        std::cout << "    UUUU   UUUU   MMM  MM  MMM GGG    GGGG  " << std::endl;
        std::cout << "    UUUU   UUUU   MMM      MMM  GGGGGGGGG   " << std::endl;
        std::cout << "    UUUUUUUUUUU   MMM      MMM   GGGGGGG  " << std::endl;
        std::cout << "     UUUUUUUUU    MMM      MMM    GGGGG   " << std::endl;
        std::cout << std::endl;
        std::cout << "            Bienvenido al programa" << std::endl;
        std::cout << "Esperamos que disfrutes explorando nuevas posibilidades." << std::endl;
        std::cout << std::endl;
        std::cout << "=============================================" << std::endl;
        std::cout << "||            NOMBRE DE EL CREADOR         ||" << std::endl;
        std::cout << "=============================================" << std::endl;
        std::cout << "||     9959-22-8           Julio Molina    ||" << std::endl;
        std::cout << "=============================================" << std::endl;
        std::cout << std::endl;
        break;
    case 1:
        insertarAdministrador();
		break;
	case 2:
	    system("cls");
	    cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )===================================( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|            vuelva pronto            |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)===================================(_____)"<< endl;
		exit(0);
	default:
	    std::cout << "=====================================================" << std::endl;
        std::cout << "||  Opcion invalida...Por favor prueba otra vez..  ||" << std::endl;
        std::cout << "=====================================================" << std::endl;
	}
	getch();
    }while(Opciones!= 2);
}
void usuario::insertarAdministrador()
{

    vector<string> usuarios;
    vector<string> claves;

    usuarios.push_back("Julio");

    claves.push_back("JUL");


    int contador = 0;
    bool ingresa = false;
    do
    {
        system("cls");
        fstream file;
        cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )===================================( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / | INGRESA LOS DATOS DE ADMINISTRACION | / |"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)===================================(_____)"<< endl;
        cout << "\        ================================================="<< endl;
        cout << "\t\t\tIngresa Usuario \n";

        cout << "\t\t\tUsuario: ";
        cin >> nameAdministrador;

        char caracter;
        cout << "\t\t\tPassword: ";
        caracter = getch();
        getline(cin, passwordAdministrador);

        while (caracter != ENTER)
        {

            if (caracter != BACKSPACE)
            {
                passwordAdministrador.push_back(caracter);
                cout << "*";
            }
            else
            {
                if (passwordAdministrador.length() > 0)
                {
                    cout << "\b \b";
                    passwordAdministrador = passwordAdministrador.substr(0, passwordAdministrador.length() - 1);
                }
            }

            caracter = getch();
        }

        for (int i = 0; i < usuarios.size(); i++)
        {
            if (usuarios[i] == nameAdministrador && claves[i] == passwordAdministrador)
            {
                ingresa = true;
                break;
            }
        }
        if (!ingresa)
        {
            system("cls");
            std::cout << "=====================================================" << std::endl;
            std::cout << "||  El Administrador y/o password son incorrectos  ||" << std::endl;
            std::cout << "=====================================================" << std::endl;
            cin.get();
            contador++;
        }

    } while (ingresa == false && contador < INTENTOS);

    if (ingresa == false)
    {
        system("cls");
        std::cout << "================================================================" << std::endl;
        std::cout << "||  Haz fallado 3 veces, no puedes acceder al sistema. ADIOS  ||" << std::endl;
        std::cout << "================================================================" << std::endl;
       codigo="7000";
        bitacora bit;
        bit.ingreso(nameAdministrador,codigo);
    }

    else
    {
   /*codigo="7001";
    bitacora bit2;
    bit2.ingreso(nameAdministrador,codigo);*/
    int Opciones;
	char x;
	do{
    system("cls");
	std::cout << "**=========================================================================================================**" << std::endl;
	std::cout << "||       BBBBBB   IIII   EEEEEEE  NN     NN   VV     VV   EEEEEEE   NN    NN   IIII   DDDDDD   OOOOOOO     ||" << std::endl;
    std::cout << "||       BB   BB   II    EE       NNNN   NN   VV     VV   EE        NNNN  NN    II    DD   DD  OO   OO     ||" << std::endl;
    std::cout << "||       BBBBBB    II    EEEEE    NN NN  NN    VV   VV    EEEEE     NN NN NN    II    DD   DD  OO   OO     ||" << std::endl;
    std::cout << "||       BB   BB   II    EE       NN   NNNN     VV VV     EE        NN  NNNN    II    DD   DD  OO   OO     ||" << std::endl;
    std::cout << "||       BBBBBB   IIII   EEEEEEE  NN    NNN       V       EEEEEEE   NN   NNN   IIII   DDDDDD   OOOOOOO     ||" << std::endl;
    std::cout << "**=========================================================================================================**" << std::endl;
    std::cout << "||                            Bienvenido, " << nameAdministrador << " al programa de nomina                                     ||" << std::endl;
    std::cout << "||       Esperamos que esta herramienta sea de utilidad para calcular los salarios de los empleados        ||" << std::endl;
    std::cout << "**=========================================================================================================**" << std::endl;
    std::cout << std::endl;
    system("pause");
    system("cls");
    cout << "" << endl;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )===================================( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |            MENU DE INICIO           | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)===================================(_____)"<< endl;
    cout << "\        ================================================="<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                 |   Porfavor, elije una opcion  |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 | 1. Catalogos                  |"<< endl;
    cout << "                 | 2. Informes                   |"<< endl;
    cout << "                 | 3. Procesos                   |"<< endl;
    cout << "                 | 4. Salir del sistema          |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                      Ingresa una Opcion: ";
    cin >> Opciones;
    switch(Opciones)
    {
    case 1:
        menuClientes();
		break;
    case 2:
        menuReportes();
        break;
    case 3:
        Compra();
		break;
	case 4:
	    system("cls");
	    cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )===================================( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|            vuelva pronto            |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)===================================(_____)"<< endl;
		exit(0);
	default:
	    std::cout << "=====================================================" << std::endl;
        std::cout << "||  Opcion invalida...Por favor prueba otra vez..  ||" << std::endl;
        std::cout << "=====================================================" << std::endl;
	}
	getch();
    }while(Opciones!= 4);
    }
}
void usuario::menuReportes()
{
     int Opciones;
	char x;
	do{
    system("cls");
	std::cout << "**=========================================================================================================**" << std::endl;
	std::cout << "||       BBBBBB   IIII   EEEEEEE  NN     NN   VV     VV   EEEEEEE   NN    NN   IIII   DDDDDD   OOOOOOO     ||" << std::endl;
    std::cout << "||       BB   BB   II    EE       NNNN   NN   VV     VV   EE        NNNN  NN    II    DD   DD  OO   OO     ||" << std::endl;
    std::cout << "||       BBBBBB    II    EEEEE    NN NN  NN    VV   VV    EEEEE     NN NN NN    II    DD   DD  OO   OO     ||" << std::endl;
    std::cout << "||       BB   BB   II    EE       NN   NNNN     VV VV     EE        NN  NNNN    II    DD   DD  OO   OO     ||" << std::endl;
    std::cout << "||       BBBBBB   IIII   EEEEEEE  NN    NNN       V       EEEEEEE   NN   NNN   IIII   DDDDDD   OOOOOOO     ||" << std::endl;
    std::cout << "**=========================================================================================================**" << std::endl;
    std::cout << "||                            Bienvenido, " << nameAdministrador << " al programa de nomina                                     ||" << std::endl;
    std::cout << "||       Esperamos que esta herramienta sea de utilidad para calcular los salarios de los empleados        ||" << std::endl;
    std::cout << "**=========================================================================================================**" << std::endl;
    std::cout << std::endl;
    system("pause");
    system("cls");
    cout << "" << endl;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )===================================( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |            MENU DE INFORMES         | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)===================================(_____)"<< endl;
    cout << "\        ================================================="<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                 |   Porfavor, elije una opcion  |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 | 1. Clientes                   |"<< endl;
    cout << "                 | 2. Bitacora                   |"<< endl;
    cout << "                 | 3. Regresar al menu anterior  |"<< endl;
    cout << "                 | 4. Salir del sistema          |"<< endl;
    cout << "                 | 5. Compras                    |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                      Ingresa una Opcion: ";
    cin >> Opciones;
    switch(Opciones)
    {
    case 1:
        desplegarClientes();
		break;
		case 5:
        desplegarCompras();
		break;
    case 2:

        bit.desplegarBitacora(nameAdministrador,"7500");
        break;
    case 3:
        system("cls");
        cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
        cout << "" << endl;
        cout << "          __^__                                     __^__"<< endl;
	    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|    Redireccionando al inicio....    |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
                break;
	case 4:
	    system("cls");
	    cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )===================================( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|            vuelva pronto            |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)===================================(_____)"<< endl;
		exit(0);
	default:
	    std::cout << "=====================================================" << std::endl;
        std::cout << "||  Opcion invalida...Por favor prueba otra vez..  ||" << std::endl;
        std::cout << "=====================================================" << std::endl;
	}
	getch();
    }while(Opciones!= 3);
}
void usuario::insertarClientes()
{
	system("cls");
	fstream file;
    cout << "" << endl;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |    Agregar informacion Clientes     | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
	cout << "\t\t  Ingresa Codigo de Boleto del Clientes: ";
	cin >> ID;
	cout << "\t\t  Ingresa Nombre del Clientes : ";
	cin >> name;
	cout << "\t\t  Ingresa el correo del Clientes : ";
	cin >> correo;
	cout << "\t\t  Ingrese Horario de Reserva T/N (Tarde o Noche) ";
	cin >> jornada;
	cout << "\t\t  Ingresa El telefono del Clientes : ";
	cin >> telefono;
    system("cls");
    cout << "=============================================" <<endl;
    cout << "||     Listo! nuevo Clientes agregado         ||" <<endl;
    cout << "=============================================" <<endl;
	if (jornada=="T")
    {
        jornada="Tarde";
    }
    if (jornada=="N")
    {
        jornada="Noche";
    }
    file.open("Clientes.txt", ios::app | ios::out);
    file << std::left << std::setw(14) << ID << std::left << std::setw(12) << name << std::left << std::setw(32) << correo << std::left << std::left << std::setw(20)<< jornada << std::setw(15)<< telefono << endl;
	bitacora bit;
	codigo="7301";
	bit.ingreso(nameAdministrador,codigo);
	file.close();
}
void usuario::desplegarClientes()
{
	system("cls");
	fstream file;
	string ver;
	int total = 0;
    cout << "" << endl;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
	cout << "                                               __^__                                     __^__"<< endl;
    cout << "                                              ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "                                               | / |                                     | / |"<< endl;
    cout << "                                               | / |   Tabla de Detalles de Clientes     | / |"<< endl;
    cout << "                                               |___|                                     |___|"<< endl;
    cout << "                                              (_____)-----------------------------------(_____)"<< endl;
    cout << "===============================================================================================================================================================" << endl;
    cout << "CB           NOMBRE       CORREO                           RESERVA         TELEFONO" << endl;
    cout << "===============================================================================================================================================================" << endl;
	file.open("Clientes.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		while(!file.eof())
		{
			total++;
			getline(file,ver);
            cout << ver << endl;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
    bitacora bit;
	codigo="7302";
	bit.ingreso(nameAdministrador,codigo);
}
void usuario::modificarClientes()
{
	system("cls");
	fstream file,file1;
	string user_ID;
	int found = 0;
	cout << "\n-------------------------Modificacion Detalles Usuario-------------------------"<<endl;
	file.open("Clientes.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{   cout << "" << endl;
	    cout << "\n\tUsuario: " << nameAdministrador << endl << endl;
		cout << "\n Ingrese ID del usuario que quiere modificar: ";
		cin >> user_ID;
		file1.open("Record.txt",ios::app | ios::out);
		        file >> ID >> name >> correo >> jornada >> telefono ;
		while(!file.eof())
		{
			if(user_ID!=ID)
			{
    file << std::left << std::setw(14) << ID << std::left << std::setw(12) << name << std::left << std::setw(32) << correo << std::left << std::left << std::setw(20)<< jornada << std::setw(15)<< telefono << endl;
			}
			else
			{
				cout << "\t\t\tCodigo del boleto de el Cliente: " << ID << endl;
				cout << "\t\t\tIngrese Nombre del Cliente: ";
				cin >> name;
				cout << "\t\t\tIngrese correo del Cliente: ";
				cin >> correo;
				cout << "\t\t\tReserva del Cliente: "<< jornada << endl;
                cout << "\t\t\tIngrese telefono del Clientes: ";
				cin >> telefono;
    file1 << std::left << std::setw(14) << ID << std::left << std::setw(12) << name << std::left << std::setw(32) << correo << std::left << std::left << std::setw(20)<< jornada << std::setw(15)<< telefono << endl;
				found++;
			}
		        file >> ID >> name >> correo >> jornada >> telefono ;

		}
		file1.close();
		file.close();
		remove("Clientes.txt");
		rename("Record.txt","Clientes.txt");
        bitacora bit;
        codigo="7303";
        bit.ingreso(nameAdministrador,codigo);
	}
}
void usuario::buscarClientes()
{
	system("cls");
	fstream file;
	int found = 0;
	file.open("Clientes.txt",ios::in);
	if(!file)
	{

		cout << "\n-------------------------Datos del Clientes buscada------------------------" << endl;
		cout << "\n\t\t\tNo hay informacion...";
	}
	else
	{
		string user_ID;
        cout << "" << endl;
        cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
		cout << "          __^__                                      __^__"<< endl;
        cout << "         ( ___ )------------------------------------( ___ )"<< endl;
        cout << "          | / |                                      | / |"<< endl;
        cout << "          | / |     Datos del Clientes buscado     | / |"<< endl;
        cout << "          |___|                                      |___|"<< endl;
        cout << "         (_____)------------------------------------(_____)"<< endl;
		cout << "\nIngrese ID del cliente que quiere buscar: ";
		cin >> user_ID;
		        file >> ID >> name >> correo >> jornada >> telefono ;
		while(!file.eof())
		{
			if(user_ID == ID)
			{
				cout << "                 *============================* "<< endl;
                cout << "                                              "<< endl;
                cout << "                   Codigo de boleto: "<< ID << endl;
                cout << "                   Nombre Clientes : "<< name << endl;
                cout << "                   Correo: "<< correo << endl;
                cout << "                   Reserva: "<< jornada << endl;
                cout << "                   Telefono: "<< telefono << endl;
                cout << "                                              "<< endl;
                cout << "                 *============================* "<< endl;
				found++;
			}
		        file >> ID >> name >> correo >> jornada >> telefono ;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t Clientes no encontrado...";
		}
		file.close();
		bitacora bit;
        codigo="7304";
        bit.ingreso(nameAdministrador,codigo);
	}
}
void usuario::borrarClientes()
{
	system("cls");
	fstream file,file1;
	string user_ID;
	int found = 0;
	cout << "\n-------------------------Detalles Usuario a Borrar-------------------------" << endl;
	file.open("Clientes.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{   cout << "" << endl;
	    cout << "\n\tUsuario: " << nameAdministrador << endl << endl;
		cout << "\n Ingrese el ID del Usuario que quiere borrar: ";
		cin >> user_ID;
		file1.open("Record.txt",ios::app | ios::out);
        file >> ID >> name >> correo >> jornada >> telefono ;
		while(!file.eof())
		{
			if(user_ID!=ID)
			{
        file1 << std::left << std::setw(15) << ID << std::left << std::setw(25) << name << std::left << std::setw(15) << correo << std::left << std::left << std::setw(30)<< jornada << std::setw(15)<< telefono << endl;
			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
        file >> ID >> name >> correo >> jornada >> telefono ;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t ID Persona no encontrado...";
		}
		file1.close();
		file.close();
		remove("Clientes.txt");
		rename("Record.txt","Clientes.txt");
        bitacora bit;
        codigo="7305";
        bit.ingreso(nameAdministrador,codigo);
	}
}
void usuario::menuClientes()
{
    int Opciones;
	char x;
	do
    {
    system("cls");
    cout << "                                                                                                  "<< endl;
    cout << "                                                                                                  "<< endl;
    cout << "                    88        88  88b           d88    ,ad8888ba,                                 "<< endl;
    cout << "                    88        88  888b         d888   d8''    `'8b                                "<< endl;
    cout << "                    88        88  88`8b       d8'88  d8'                                          "<< endl;
	cout << "                    88        88  88 `8b     d8' 88  88                                           "<< endl;
	cout << "                    88        88  88  `8b   d8'  88  88      88888                                "<< endl;
	cout << "                    88        88  88   `8b d8'   88  Y8,        88                                "<< endl;
	cout << "                    Y8a.    .a8P  88    `888'    88   Y8a.    .a88                                "<< endl;
	cout << "                    `''Y8888Y''   88     `8'     88   `''Y88888P''                                "<< endl;
    cout << "                                                                                           "<< endl;
	system("pause");
	system("cls");
    bitacora bit;
	codigo="7300";
	bit.ingreso(nameAdministrador,codigo);
    cout << "" << endl;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )===================================( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |             Clientes UMG             | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)===================================(_____)"<< endl;
    cout << "\        ================================================="<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                 |   Porfavor, elije una opcion  |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 | 1. Ingresar Clientes          |"<< endl;
    cout << "                 | 2. Desplegar Clientes         |"<< endl;
    cout << "                 | 3. Modificar Clientes         |"<< endl;
    cout << "                 | 4. Buscar Clientes            |"<< endl;
    cout << "                 | 5. Borrar Clientes            |"<< endl;
    cout << "                 | 6. Regresar al inicio         |"<< endl;
    cout << "                 | 7. Salir del sistema          |"<< endl;
    cout << "                 |                               |"<< endl;
    cout << "                 *===============================*"<< endl;
    cout << "                    Ingresa una Opcion: ";
    cin >> Opciones;
    switch(Opciones)
    {
    case 1:
    	do
    	{
    		insertarClientes();
    		cout << "          __^__                                     __^__"<< endl;
            cout << "         ( ___ )===================================( ___ )"<< endl;
            cout << "          | / |                                     | / |"<< endl;
            cout << "          | / |    Desea gregar un nuevo Cliente?   | / |"<< endl;
            cout << "          |___|                                     |___|"<< endl;
            cout << "         (_____)===================================(_____)"<< endl;
            cout << "         =================================================" <<endl;
            cout << "                Pulsa Y para si ||| Pulsa N para No     " <<endl;
            cout << "         =================================================" <<endl;
            cout << "                Selecciona una respuesta: ";
    		cin >> x;
		}while(x == 'y'||x == 'Y');
		break;
	case 2:
		desplegarClientes();
		break;
	case 3:
		modificarClientes();
		break;
	case 4:
		buscarClientes();
		break;
	case 5:
		borrarClientes();
		break;
    case 6:
        system("cls");
        cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
        cout << "" << endl;
        cout << "          __^__                                     __^__"<< endl;
	    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|    Redireccionando al inicio....    |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
                break;
	case 7:
	    system("cls");
	    bitacora bit;
        codigo="7999";
        bit.ingreso(nameAdministrador,codigo);
        cout << "\t\t\tNombre Administrador: " << nameAdministrador << endl;
        cout << "" << endl;
	    cout << "          __^__                                     __^__"<< endl;
        cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
        cout << "          | / |                                     | / |"<< endl;
        cout << "          | / |     Muchas gracias por ingresar     | / |"<< endl;
        cout << "          |___|            vuelva pronto            |___|"<< endl;
        cout << "          |___|                                     |___|"<< endl;
        cout << "         (_____)-----------------------------------(_____)"<< endl;
        exit(0);
	default:
		cout << "\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(Opciones!= 6);
}
void usuario::Compra()
{
    int total;
    system("cls");
	fstream file;
	int found = 0;
	file.open("Clientes.txt",ios::in);
	if(!file)
	{

		cout << "\n-------------------------Datos del Clientes buscada------------------------" << endl;
		cout << "\n\t\t\tNo hay informacion...";
	}
	else
	{
		string user_ID;
        cout << "" << endl;
        cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
		cout << "          __^__                                      __^__"<< endl;
        cout << "         ( ___ )------------------------------------( ___ )"<< endl;
        cout << "          | / |                                      | / |"<< endl;
        cout << "          | / |     Datos del Clientes buscado     | / |"<< endl;
        cout << "          |___|                                      |___|"<< endl;
        cout << "         (_____)------------------------------------(_____)"<< endl;
		cout << "\nIngrese ID del cliente que quiere buscar: ";
		cin >> user_ID;
		        file >> ID >> name >> correo >> jornada >> telefono ;
		while(!file.eof())
		{
			if(user_ID == ID)
			{
				cout << "                 *============================* "<< endl;
                cout << "                                              "<< endl;
                cout << "                   Codigo de boleto: "<< ID << endl;
                cout << "                   Nombre Clientes : "<< name << endl;
                cout << "                                              "<< endl;
                cout << "                 *============================* "<< endl;
				found++;
				auxCODE=ID;
				auxNOMBRE=name;
			}
		        file >> ID >> name >> correo >> jornada >> telefono ;
		}
		if(found == 0)
		{
			cout<<"\n\t\t\t Clientes no encontrado...";
		}
		file.close();
		bitacora bit;
        codigo="7304";
        bit.ingreso(nameAdministrador,codigo);
        }
    int precio=35;
    system("cls");
	fstream file2;
    cout << "" << endl;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
    cout << "          __^__                                     __^__"<< endl;
    cout << "         ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "          | / |                                     | / |"<< endl;
    cout << "          | / |    Agregar informacion Clientes     | / |"<< endl;
    cout << "          |___|                                     |___|"<< endl;
    cout << "         (_____)-----------------------------------(_____)"<< endl;
	cout << "\t\t  Codigo boleto del Clientes: "<<auxCODE<< endl;
	cout << "\t\t  Nombre del Cliente : "<<auxNOMBRE<< endl;
	cout << "\t\t  Ingresa la cantidad de boletos:";
	cin >> cantidad;
	total=cantidad*precio;
	cout << "\t\t  Ingrese Pelicula a ver S/T/F/B (Spiderman,Transformers,Flash,Barbie) ";
	cin >> pelicula;
    system("cls");
    cout << "=============================================" <<endl;
    cout << "||     Listo! el Cliente ha Comprado        ||" <<endl;
    cout << "=============================================" <<endl;
	if (pelicula=="F")
    {
        pelicula="Flash";
    }
    if (pelicula=="S")
    {
        pelicula="Spiderman";
    }
	if (pelicula=="T")
    {
        pelicula="Transformers";
    }
    if (pelicula=="B")
    {
        pelicula="Barbie";
    }
    file2.open("Compras.txt", ios::app | ios::out);
    file2 << std::left << std::setw(14) << auxCODE << std::left << std::setw(12) << auxNOMBRE << std::left << std::setw(12) << cantidad << std::left << std::setw(12) << total << std::left << std::left << std::setw(20)<< pelicula << endl;
	bitacora bit;
	codigo="7301";
	bit.ingreso(nameAdministrador,codigo);
	file2.close();
}
void usuario::desplegarCompras()
{
	system("cls");
	fstream file;
	string ver;
	int total = 0;
    cout << "" << endl;
    cout << "\t\t    Nombre Administrador: " << nameAdministrador << endl;
    cout << "" << endl;
	cout << "                                               __^__                                     __^__"<< endl;
    cout << "                                              ( ___ )-----------------------------------( ___ )"<< endl;
    cout << "                                               | / |                                     | / |"<< endl;
    cout << "                                               | / |   Tabla de Detalles de Compras      | / |"<< endl;
    cout << "                                               |___|                                     |___|"<< endl;
    cout << "                                              (_____)-----------------------------------(_____)"<< endl;
    cout << "===============================================================================================================================================================" << endl;
    cout << "CB           NOMBRE       CANTIDAD       PRECIO         PELICULA" << endl;
    cout << "===============================================================================================================================================================" << endl;
	file.open("Compras.txt",ios::in);
	if(!file)
	{
		cout << "\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		while(!file.eof())
		{
			total++;
			getline(file,ver);
            cout << ver << endl;
		}
		if(total == 0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
    bitacora bit;
	codigo="7912";
	bit.ingreso(nameAdministrador,codigo);
}
