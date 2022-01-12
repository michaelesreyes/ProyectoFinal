#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void Datos ()
{
  
  int i,j,n,m,p = 5;
  int h = 8;
  char opcion;
  string l,cod,linea,linea2,linea3,linea4,linea5,linea6,linea7,linea8,linea9,ruta = "Estudiantes/";
  string Busca[h];
  ifstream lec;
  ofstream escribir,esc,escriv;
  bool esta = false;

  for (i = 0; i < 1; j++){

    cout << "----------------------------------------------------------------\n-              a. Modificar datos del estudiante               -\n-              b. Eliminar estudiante                          -\n-              c. salir                                        -\n----------------------------------------------------------------\n";
    cin >> opcion;

    switch(opcion)
    {
      case 'a':

      
        cout << "----------------------------------------------------------------\n-              a. Estado académico                             -\n-              b. Programa al que pertenece                    -\n-              c. Semestre                                     -\n----------------------------------------------------------------\n";

        cin >> opcion;
        
         cout << "Ingrese el código del estudiante\n";
        cin >> cod;

        l = cod + ".txt";

        ruta = ruta + l;
        

        switch (opcion)
        {
          case 'a':

         

          lec.open("Estudiantes/" + l);

          if(!lec.is_open())
          {
            cout << "El estudiante no ha sido registrado";

            lec.close();
          }

          if(!escribir.is_open())
          {
            escribir.open("Estudiantes/temp.txt");
          }
          while(getline(lec,linea))
          {
            getline(lec,linea2);
            getline(lec,linea3);
            getline(lec,linea4);
            getline(lec,linea2);
            getline(lec,linea5);
            getline(lec,linea6);
            getline(lec,linea7);
            getline(lec,linea8);
          }
          escribir << "----------------------------------------------------------------\n";
          escribir << linea2 << "\n";
          escribir << linea3 << "\n";
          escribir << linea4 << "\n";
          escribir << linea5 << "\n";
          cout << "Por favor ingresar el nuevo estado académico\n";
          cin >> linea6;
          escribir <<"Estado acádemico del estudiante o la estudiante: "<< linea6 << "\n";
          escribir << linea7 << "\n";
          escribir << "----------------------------------------------------------------\n";

          lec.close();
          escribir.close();

          


          remove(ruta.c_str());
          rename("Estudiantes/temp.txt",ruta.c_str());

          if(linea6 == "prueba"||linea6 == "Prueba")
          {
            lec.open("Regular/regular.txt");
            if(!escriv.is_open())
            {
              escriv.open("Prueba/temp.txt");
            }
            for(n = 0; n < h ; n++)
            {
              while(!lec.eof())
              {
                getline(lec,Busca[n]);

                if(Busca[n] == cod)
                {
                  esc.open("Prueba/prueba.txt");
                  esc << Busca[n];
                  esc.close();
                  }
                  else
                  {
                    escriv << Busca[n] << "\n";
                  }

              }
              lec.close();
            }
            remove("Regular/regular.txt");
            rename("Prueba/temp.txt","Regular/regular.txt");
          }
          else if (linea6 == "regular"||linea6 == "Regular")
          {
            lec.open("Prueba/prueba.txt");
            if(!escriv.is_open())
            {
              escriv.open("Regular/temp.txt");
            }
            for(n = 0; n < h ; n++)
            {
              while(!lec.eof())
              {
                getline(lec,Busca[n]);

                if(Busca[n] == cod)
                {
                  esc.open("Regular/regular.txt");
                  esc << Busca[n];
                  esc.close();
                  }
                  else
                  {
                    escriv<< Busca[n] << "\n";
                  }

              }
              lec.close();
            }
            remove("Prueba/prueba.txt");
            rename("Regular/temp.txt","Prueba/prueba");
          }

          

                
            
          break;

          case 'b':

          lec.open("Estudiantes/" + l);

           if(!lec.is_open())
          {
            cout << "El estudiante no ha sido registrado";

            lec.close();
          }


          if(!escribir.is_open())
          {
            escribir.open("Estudiantes/temp.txt");
          }
          while(getline(lec,linea))
          {
            getline(lec,linea3);
            getline(lec,linea4);
            getline(lec,linea2);
            getline(lec,linea5);
            getline(lec,linea6);
            getline(lec,linea7);
            getline(lec,linea8);
          }
          escribir << linea << "\n";
          escribir << linea2 << "\n";
          escribir << linea3 << "\n";
          cout << "Por favor ingresar el nuevo programa del estudiante";
          cin >> linea4;
          escribir << "Programa del estudiante o la estudiante:" << linea4 << "\n";
          escribir << linea5 << "\n";
          escribir << linea6 << "\n";
          escribir << linea7 << "\n";
          escribir << linea8 << "\n";
          lec.close();
          escribir.close();

          


          remove(ruta.c_str());
          rename("Estudiantes/temp.txt",ruta.c_str());
          
          
          
                
                

         

          break;

          case 'c':

          lec.open("Estudiantes/" + l);

           if(!lec.is_open())
          {
            cout << "El estudiante no ha sido registrado";

            lec.close();
          }

          if(!escribir.is_open())
          {
            escribir.open("Estudiantes/temp.txt");
          }
          while(getline(lec,linea))
          {
            getline(lec,linea3);
            getline(lec,linea4);
            getline(lec,linea2);
            getline(lec,linea5);
            getline(lec,linea6);
            getline(lec,linea7);
            getline(lec,linea8);
          }
          escribir << linea << "\n";
          escribir << linea2 << "\n";
          escribir << linea3 << "\n";
          escribir << linea4 << "\n";
          cout << "Por favor ingresar el nuevo Semestre del estudiante";
          cin >> linea5;
          escribir << "Semestre del estudiante o la estudiante: "<< linea5 << "\n";
          escribir << linea6 << "\n";
          escribir << linea7 << "\n";
          escribir << linea8 << "\n";
          lec.close();
          escribir.close();

          


          remove(ruta.c_str());
          rename("Estudiantes/temp.txt",ruta.c_str());

          
          

         

          break;
        }


      break;
      case 'b':

        cout << "Ingrese el código del estudiante\n";
        cin >> cod;

        

        l = cod + ".txt";
          
        ruta = ruta + l;

        remove(ruta.c_str());
             
      break;
      case'c':

        cout << "Programa terminado.\n";
        i += 1;

      break;

      default:

        cout << "Ha escogido una opción incorrecta\n";

    }

    
  }

  
}