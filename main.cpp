//
// Created by Paul Contreras on 30/01/24.
//

#include <iostream>
#include "students.h"
using namespace std;

int main() {
    // Definimos variable de control para loop app
    // By default sera true para que se ejecute
    bool app = true;
    // Definimos variables para usar
    int userOption, numStudents;
    // Usamos un ciclo do while para ejecutar hasta que el usuario diga que no
    do {
        // Imprimimos el mensaje de bienvenida
        mainHeader();
        // Solicitamos el numero de estudiantes
        cout << "Ingrese el numero de estudiantes: ";
        cin >> numStudents;
        // creamos el arreglo llamando a la funcion para ingresar datos
        Estudiante* estudiantes = registerStudents(numStudents);
        // Imprimimos el menu
        menu();
        // Solicitamos una opcion para saber que hacer
        cout << "Ingrese una opcion: ";
        cin >> userOption;
        if(userOption == 1) {
            // Mostramos los datos
            displayStudents(estudiantes, numStudents);
        }else if (userOption == 2){

            // Salimos de la app
            app = false;
        }
        // Limpiamos el arreglo y espacio de la memoria
        freeStudentArray(estudiantes);
    } while (app);
}
