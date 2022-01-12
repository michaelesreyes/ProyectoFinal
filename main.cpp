#include <iostream>
#include <fstream>
#include <string>
#include<stdio.h>


using namespace std;

void Estudiantes(int&);
void Docentes(int&);
void Consejeria ();
void Datos();
void Informes();

int main() 
{
  int i = 0;
  int j = 0;
  int opcion = 0;
  int numeroest = 0;
  string nombreDoc, codigo;
  string l = "----------------------------------------------------------------";
  
  


  for (i = 0; i <= 1; j++)
  {
    cout << "----------------------------------------------------------------\n-     |°Bienvenido al programa de advising de ingeniería°|    -\n-               1.	Registrar docentes consejeros             -\n-               2.	Registrar estudiantes                     -\n-               3.  Registro advising                         -\n-               4.	Modificar datos/registros                 -\n-               5.	Generar informes de advising              -\n-               6.	Salir                                     -\n---------------------------------------------------------------\n";

    cin >> opcion;

    switch (opcion)
    {
      case 1: 

        Docentes (numeroest);
        
      break;

      case 2:

        Estudiantes(numeroest);

      break;

      case 3:

        Consejeria();

      break;

      case 4:

        Datos();

      break;

      case 5:

        Informes();

      break;

      case 6:

        cout << "Programa Terminado.\n";
        i = 2;

      break;

      default:
      cout <<"Ha seleccionado una opción incorrecta. \n"; 
    }
  }
}
