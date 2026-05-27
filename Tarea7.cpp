#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

//Creacion de la clase Estudiante
class Estudiante{
    private:
    //Variables que se van a utilizar
    int n;
    int total;
    string nombre[100];
    float notas[100][3];
    float promedio[100];
    string estado[100];
    int aprobado=0, reprobado=0;
    
    //Constructor de la clase
    public:
    Estudiante(){
        n=0;
        for (int i = 0; i < n; i++) {
        nombre[i] = "";
        for (int j = 0; j < 3; j++) {
        notas[i][j] = 0;
        }
    }
    }

    //Metodo para ingresar informacion de los estudiantes
    void ingresarInfo(){
    do{
    cout << "Ingrese el numero de estudiantes a ingresar: ";
        cin >> n;
        cin.ignore();

        if(n<0 || n>100){
            cout << "El valor ingresado es incorrecto! ";
        }
    }while(n<0 || n>100);

        for (int i = 0; i < n; i++){
        float suma=0;
        cout << "Ingrese el nombre completo del estudiante " << (i+1) << ": ";
        getline(cin, nombre[i]);
        for (int j = 0; j < 3; j++){
        
        //Ingreso y validacion de datos
        do{
        cout << "Ingrese la nota " << (j+1) << " del estudiante: ";
        cin >> notas[i][j];

        if(notas[i][j]>10 || notas[i][j]<0){
        cout << "El valor ingresado es invalido! \n";
        }
        }while (notas[i][j]>10 || notas[i][j]<0);
        
        //Acumulador
        suma += notas[i][j];
        
        }

        //Calculo del promedio
        promedio[i]=(suma/3);

        //Contadores y estado del estudiante
        if(promedio[i]>=7){
            aprobado++;
            estado[i]="Aprueba";
        }else{
            reprobado++;
            estado[i]="Reprueba";
        }
        cin.ignore();
        }
        
    }

    //Metodo para mostrar la informacion de los estudiantes
    void mostrarInfo(){
        cout << left << setw(15) << "Estudiante" 
        << right << setw(15) << "Nota 1"
        << right << setw(15) << "Nota 2" 
        << right << setw(15) << "Nota 3"
        << right << setw(15) << "Promedio"
        << right << setw(15) << "Estado\n";

        cout << "=====================================================================\n";

        for (int i = 0; i < n; i++){
        //Uso de setw para imprimir con formato
        cout << left << setw(15) << nombre[i]
        << fixed << setprecision(2) << right << setw(15) << notas[i][0] 
        << right << setw(15) << notas[i][1] 
        << right << setw(15) << notas[i][2]
        << right << setw(15) << promedio[i]
        << right << setw(15) << estado[i]
        << endl;
        }

        cout << "=====================================================================\n";
        cout<< "Aprobados: " << aprobado << "\t\tReprobados: " << reprobado << endl;
        
    };

    void buscarInfo(){
        string buscar;
        bool encontrado=false;

        cout << "Ingrese el nombre y apellido del estudiante: ";
        cin.ignore();
        getline(cin,buscar);

        for(int i=0; i<n; i++){
            if(nombre[i]==buscar){
            cout << "Estudiante " << nombre[i] << " encontrado!\n";
            cout << "=============================DATOS DEL ESTUDIANTE=============================\n";
            cout << left << setw(15) << "Estudiante" 
            << right << setw(15) << "Nota 1"
            << right << setw(15) << "Nota 2" 
            << right << setw(15) << "Nota 3"
            << right << setw(15) << "Promedio"
            << right << setw(15) << "Estado\n";
            cout << left << setw(15) << nombre[i]
            << right << setw(15) << notas[i][0] 
            << right << setw(15) << notas[i][1] 
            << right << setw(15) << notas[i][2]
            << right << setw(15) << promedio[i]
            << right << setw(15) << estado[i]
            << endl;
            encontrado=true;
            break;
            }
        }

        if(!encontrado){
            cout << "El estudiante " << buscar << " no se encuentra registrado\n";
        }
    };
    };

    //Main del programa
    int main(){
        Estudiante e;
        int opcion;
        int a;

        do{
        cout << "Ingrese una opcion: \n";
        cout << "1. Ingresar datos \n";
        cout << "2. Mostrar reporte estadistico \n";
        cout << "3. Buscar estudiante\n";
        cout << "4. Salir del programa\n";
        cin >> opcion;

        switch (opcion){
        case 1:
        e.ingresarInfo();
        break;
        case 2:
        cout << "\n=====================Datos de los estudiantes=====================\n";
        e.mostrarInfo();
        break;
        case 3:
        e.buscarInfo();
        break;
        default:
        cout << "Opcion Invalida!";
        }
        }while (opcion!=4);
        
        return 0;

    }