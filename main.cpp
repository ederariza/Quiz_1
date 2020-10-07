
#include <iostream>

using namespace std;

int main(){

    int numero_estudiantes = 5;
    int numero_parciales = 3;
    int numero_laboratorios = 4;
    float nota_parcial = 0;
    float nota_laboratorio = 0;


    cout << "Hello World!" << endl;

    for (int i = 0; i <numero_estudiantes; i++){
        cout << "Ingrese las notas del estudiante " << i + 1  << endl;

        int contador_parciales = 0;
        int promedio_parciales = 0;
        for (int j = 0; j < numero_parciales; j++){

            contador_parciales += 1;
            cout << "Parcial " << contador_parciales << ": ";
            cin >> nota_parcial;
            promedio_parciales += nota_parcial;

        }

        int contador_laboratorios = 0;
        int promedio_laboratorios = 0;
        for (int j = 0; j < numero_laboratorios; j++){

            contador_laboratorios +=1;
            cout << "Nota " << contador_laboratorios <<  " laboratorio " << i + 1 << ": "  ;
            cin >> nota_laboratorio;
            promedio_laboratorios += nota_laboratorio;



        }

    }
    return 0;
}
