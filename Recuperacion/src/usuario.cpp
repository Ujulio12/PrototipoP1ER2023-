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
        //menuAlumno();
		break;
    case 2:
        //bit.desplegarBitacora(nameAdministrador,"7500");
        break;
    case 3:

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
