#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Consejeria ()
{
  int i,j;
  const int m = 1000;
  ifstream leer,lec;
  ofstream escribir,esc;
  string estudiante[m];
  string cod,Estudiante;
  string SituacionA,SituacionM;
  

  cout << "Por favor proporcione el código del estudiante\n";

  cin >> cod;

  Estudiante = cod + ".txt";

  leer.open("Estudiantes/" + Estudiante);

  if(!leer.is_open())
  {
    cout << "El estudiante no ha sido registrado";

    leer.close();
  }
  else
  {
    leer.close();

    cout << "Por favor digite la situacion académica del estudiante\n(Buena/Regular/Baja)\n\033[1;36m(Por favor proporcione la situación en minusculas)\033[0m\n\n";

    cin >> SituacionA;

    cout << "Por favor digite la situación motivacional del estudiante\n(Animado/Orientación)\n\033[1;36m(Por favor proporcione la situación en minusculas)\n\033[0m\n\n";

    cin >> SituacionM;

    if(SituacionM == "orientacion")
    {
      cout << "\033[1;31m¡Alerta! El estudiante se debe remitir al programa de orientación estudiantil.\n Por favor, enviar un correo electrónico al decano con la información del estudiante.\033[0m\n\n";

      for(i = 0; i < m; i++)
      {
        while(!leer.eof())
        {
          getline(leer,estudiante[i]);
          cout << estudiante[i] << "\n";
        }
      }
    }

    SituacionA = SituacionA + ".txt";
    SituacionM = SituacionM + ".txt";

    escribir.open("Consejeria/" + SituacionA,ios::app);
    esc.open("Consejeria/" + SituacionM,ios::app);

    esc << cod << "\n";
    escribir << cod << "\n";

    esc.close();
    escribir.close();

    
  }
}