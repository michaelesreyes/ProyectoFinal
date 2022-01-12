#include <iostream>
#include <fstream>

using namespace std;

void Docentes (int& numeroest)
{
  string nombreDoc;
  string cedula;
  string programaDoc;
  string ApellidoDoc;
  string Nombre_Archivo;
  
  ifstream lectura,esta;
  ofstream escritura;


  cout << "Por favor ingrese en número de cédula \n";
  
  cin >> cedula;

  Nombre_Archivo = cedula + ".txt";

  esta.open("Docentes/" + Nombre_Archivo);

  if(esta.is_open())
  {
    cout << "El docente ya se encuentra registrado \n";

    esta.close();
  }
  else
  {
    esta.close();

    if(!escritura.is_open())
    {
      escritura.open("Docentes/" + Nombre_Archivo);
    }
    
    cout << "Por favor ingrese el nombre del docente \n";

    cin >> nombreDoc;

    cout << "Por favor ingrese el apellido del docente  \n";

    cin >> ApellidoDoc;

    cout << "Por favor ingrese el programa del docente \n";
    
    cin >> programaDoc;

    cout << "Por favor ingrese el numero de estudiantes del docente \n";

    cin >> numeroest;

    if (numeroest > 10)
    {
      cout << "El número ingresado no es valido\n";

      cout << "ingrese nuevamente el número de estudiantes\n";
      cin >> numeroest;
      escritura.close();
    }
    else
    {
      escritura << "----------------------------------------------------------------\n";
      escritura << "Número de cédula del docente: " << cedula << "\n";
      escritura << "Nombre del docente: " << nombreDoc << " " << ApellidoDoc << "\n";
      escritura << "Programa del docente: " << programaDoc << "\n";
      escritura << "Numero de estudiantes: " << numeroest << "\n";
      escritura << "----------------------------------------------------------------\n";

      escritura.close();
    }

   
  }


}

  
