#include <iostream>
#include <istream>
#include <fstream>
#include <string>

using namespace std;

//función con la variable de control
void Estudiantes (int& numeroest)
{
  ifstream lectura,esta;
  ofstream escritura,estado,estado2,consejero;
  string ced, linea1, linea2,linea3,linea4,nombreEst,programaEst,estadoAc,ApellidoEst,Semestre,codigo,crear;
  

  cout << "Por favor escriba el número de cedula del docente consejero \n";

  cin >> ced;

  ced = ced + ".txt";

  esta.open("Docentes/" + ced);

  if(esta.is_open())
  {
    
    while(getline(esta,linea1))
    {
      getline(esta,linea2);
      getline(esta,linea3);
      getline(esta,linea4);
    }

    esta.close();

    if(numeroest == 0)
    {
      cout << "Por favor ingrese el número de estudiantes del profesor consejero\n";

      cin >> numeroest;
    }
    for(int i = 0; i < numeroest; i++)
    {

      cout << "Por favor ingrese el código del estudiante \n";

      cin >> codigo;

      crear = codigo + ".txt";

      lectura.open("Estudiantes/" + crear);

      if(lectura.is_open())
      {
        cout << "El/la estudiante ya se encuntra registrad@. \n";

        lectura.close();
      }
      else 
      {
        cout << "Por favor ingresar el nombre del estudiante o la estudiante \n";

        cin >> nombreEst;

        cout << "Por favor ingresar el apellido del estudiante o la estudiante \n";

        cin >> ApellidoEst;

        cout << "Por favor ingrese el programa del estudiante o la estudiante \n";

        cin >> programaEst;

        cout << "Por favor ingrese el semestre del estudiante o la estudiante\n";

        cin >> Semestre;

        cout << "Por favor ingrese el estado académico del estudiante o la estudiante\n(Regular/Prueba académica)\n";

        cin >> estadoAc;

        if(!escritura.is_open())
        {
          escritura.open("Estudiantes/" + crear);
        }
        if (!estado.is_open())
        {
          estado.open("Prueba/prueba.txt",ios::app);
        }
        if (!estado2.is_open())
        {
          estado2.open("Regular/regular.txt",ios::app);
        }

        escritura << "----------------------------------------------------------------\n";
        escritura << "Código del estudiante o la estudiante: " << codigo << "\n";
        escritura << "Nombre del estudiante o la estudiante: " << nombreEst << " " << ApellidoEst << "\n";
        escritura << "Programa del estudiante o la estudiante: " << programaEst << "\n";
        escritura << "Semestre del estudiante o la estudiante: " << Semestre << "\n";
        escritura << "Estado acádemico del estudiante o la estudiante: " << estadoAc << "\n";
        escritura << linea2 << "\n";
        escritura << "----------------------------------------------------------------";

        if(estadoAc == "regular" || estadoAc == "Regular")
        {
          
          estado2 << codigo << "\n";
          
        }
        else
        {
          
          estado << codigo << "\n";
          
        }
        if(!consejero.is_open())
        {
          consejero.open("Consejero/" + ced,ios::app);
        }

        
        consejero << codigo << "\n";
        

        escritura.close();
        estado.close();
        estado2.close();
        consejero.close();
      }
    }
  }
  else
  {
    cout << "El / la docente no se encuentra registrada. \n";

    esta.close();
  }

   
   

  

  numeroest = 0;
}
  

  