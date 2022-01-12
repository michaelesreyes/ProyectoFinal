#include <iostream>
#include <fstream>

using namespace std;

void Informes()
{
  int i,j,n,m;
  int h = 1000;
  char opcion;
  string linea,linea2,linea3,Situacion,Estado,EstadoA;
  string codest, cedu;
  ifstream lectura,lec;
  ofstream escribir;
  string estudiante[h];
  string docente[h];
  string estado[h];
  string situacion[h];
  bool entro = true;



  
 
  for (i = 0; i < 1; j++) {

    cout << "------------------------------------------------------------------------------------\n-          a. Buscar estudiante de acuerdo al código                               -\n-          b. Buscar docente de acuerdo al número de cédula                        -\n-          c. Listar estudiantes de acuero a su estado                             -\n-          d. Listar estudiantes de acuerdo a su situación académica               -\n-          e. Listar estudiantes de acuerdo a su situación motivacional            -\n-          f. Listar estudiantes por consejero asignado                            -\n-          g. Salir                                                                -\n------------------------------------------------------------------------------------\n"; 
    cin >> opcion;


    switch (opcion) {

      case 'a':

        cout << "Por favor ingrese el código del estudiante \n";

        cin >> codest;

        codest = codest + ".txt";

        lectura.open("Estudiantes/" + codest);

        if(lectura.is_open())
        {
          for(n = 0; n < h; n++)
          {
            while(!lectura.eof())
            {
              getline(lectura,estudiante[i]);

              cout << estudiante[i] << "\n";
            }
          }

          lectura.close();
        }
        else
        {
          cout << "No se encontró al estudiante\n";
        }
          
          
          
      

      break;

      case 'b':

        cout << "Por favor ingrese en número de cédula \n";
  
        cin >> cedu;

        cedu = cedu + ".txt";

        lectura.open("Docentes/" + cedu);

        if(lectura.is_open())
        {
          for(n = 0; n < h; n++)
          {
            while(!lectura.eof())
            {
              getline(lectura,docente[n]);

              cout << docente[n] << "\n";
            }
          }

          lectura.close();
        }
        else
        {
          cout << "No  se encontró al docente\n";
        }
          

      break;

      case 'c':

        cout << "Por favor ingrese el estado acádemico que desea listar\nPrueba/Regular\n(Por favor proporcione la situación en minusculas)\n";

        cin >> EstadoA;

        if(EstadoA == "prueba")
        {
          EstadoA = EstadoA + ".txt";

          lectura.open("Prueba/" + EstadoA);

    
    
          for (n = 0; n < h;n++)
          {
            while(!lectura.eof())
            {
              getline(lectura,estado[n]);
              
              estado[n] = estado[n] + ".txt";

              lec.open("Estudiantes/" + estado[n]);

              if(lec.is_open())
              {
                for(m = 0; m < h; m++)
                {
                  while(!lec.eof())
                  {
                    getline(lec,estudiante[m]);
                
                    cout << estudiante[m] << "\n";
                  }
                }
              }
              lec.close();
            }
          lectura.close();
          }

          entro = true;
        }
        if(EstadoA == "regular")
        {
          EstadoA = EstadoA + ".txt";

          lectura.open("Regular/" + EstadoA);

    
    
          for (n = 0; n < h;n++)
          {
            while(!lectura.eof())
            {
              getline(lectura,estado[n]);
              
              estado[n] = estado[n] + ".txt";

              lec.open("Estudiantes/" + estado[n]);

              if(lec.is_open())
              {
                for(m = 0; m < h; m++)
                {
                  while(!lec.eof())
                  {
                    getline(lec,estudiante[m]);
                
                    cout << estudiante[m] << "\n";
                  }
                }
              }
              lec.close();
            }
            lectura.close();

            entro = true;
          }
        }
        else if(entro == false)
        {
          cout << "Opcion incorrecta\n";
        }
        

        

   
        
        
    

        

      break;

      case 'd':

        cout << "Situacion del estudiante \n(Buena/Regular/Baja)\n(Por favor proporcione la situación en minusculas)\n";

        cin >> Situacion;

        Situacion = Situacion + ".txt";

        lectura.open("Consejeria/" + Situacion);

        for (n = 0; n < h;n++)
        {
          while(!lectura.eof())
          {
            getline(lectura,situacion[n]);
            
            situacion[n] = situacion[n] + ".txt";

            lec.open("Estudiantes/" + situacion[n]);

            if(lec.is_open())
            {
              for(m = 0; m < h; m++)
              {
                while(!lec.eof())
                {
                  getline(lec,estudiante[m]);
              
                  cout << estudiante[m] << "\n";
                }
              }
            }
            lec.close();
          }
          lectura.close();
        }
        

      break;

      case 'e':

        cout << "Situacion motivacional del estudiante \n(Animado/Necesita orientación) \n(Por favor proporcione la situación en minusculas)\n";
        cin >> Situacion;

        Situacion = Situacion + ".txt";

        lectura.open("Consejeria/" + Situacion);

        for (n = 0; n < h;n++)
        {
          while(!lectura.eof())
          {
            getline(lectura,estado[n]);
            
            situacion[n] = situacion[n] + ".txt";

            lec.open("Estudiantes/" + situacion[n]);

            if(lec.is_open())
            {
              for(m = 0; m < h; m++)
              {
                while(!lec.eof())
                {
                  getline(lec,estudiante[m]);
              
                  cout << estudiante[m] << "\n";
                }
              }
            }
            lec.close();
          }
          lectura.close();
        }

      break;

      case 'f':

        cout << "Por favor ingrese en número de cédula \n";
  
        cin >> cedu;

        cedu = cedu + ".txt";

        lectura.open("Consejero/" + cedu);

        for (n = 0; n < h;n++)
        {
          while(!lectura.eof())
          {
            getline(lectura,docente[n]);
            
            docente[n] = docente[n] + ".txt";

            lec.open("Estudiantes/" + docente[n]);

            if(lec.is_open())
            {
              for(m = 0; m < h; m++)
              {
                while(!lec.eof())
                {
                  getline(lec,estudiante[m]);
              
                  cout << estudiante[m] << "\n";
                }
              }
            }
            lec.close();
          }
          lectura.close();
        }
      
      break;

      case 'g':

        i = 2;
        cout << "Sesion terminada \n";

      break;

      default:
        cout << "Usted ha seleccionado una opción incorrecta\n";
    }


  }
}