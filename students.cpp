//
// Created by Paul Contreras on 30/01/24.
//
#include <iostream>
using namespace std;
// Include structures definitions
#include "students.h"

// Main header function
// Esta funcion imprime un mensaje de bienvenida
void mainHeader(){
    cout << "-----------------------------" << endl;
    cout << "| Sistema de Registro de Alumnos |" << endl;
    cout << "-----------------------------" << endl;
}
// Menu function
// Esta funcion imprime un menu
void menu(){
    cout << "|---------------------------|" << endl;
    cout << "|           MENU            |" << endl;
    cout << "|---------------------------|" << endl;
    cout << "[1] Ver alumnos registrados |" << endl;
    cout << "[2] Salir                   |" << endl;
    cout << "-----------------------------" << endl;
}
// Obtener info del estudiante
// Esta funcion simplifica la obtencion de informacion
// Tiene como parametro el objeto Estudiante
void getStudentInfo(Estudiante& estudiante){
    cout << "---- Registrar un nuevo estudiante ----" << endl << endl;
    cout << "Ingresa el nombre del estudiante: ";
    cin.getline(estudiante.nombre, 20, '\n');
    cout << "Ingresa el apellido paterno del estudiante: ";
    cin.getline(estudiante.apellidoPaterno, 20, '\n');
    cout << "Ingresa el apellido materno del estudiante: ";
    cin.getline(estudiante.apellidoMaterno, 20, '\n');
    cout << "Ingresa edad del alumno: ";
    cin >> estudiante.edad;
    cout << "Ingresa estatura del alumno: ";
    cin >> estudiante.estatura;
}
// Function para registrar alumnos
/*
 * Para optimizar defino un puntero para generar un array dinamico
 * Estudiante* es una funcion que returnara el array, es Estudiante por que el nombre de la estructura
 * toma como parametro el numero de estudiantes
 */
Estudiante* registerStudents(int num_students){
    // Crea un array dinamico asociado al puntero estudianteArray
    auto* estudianteArray = new Estudiante[num_students];
    // Ciclo for para ingresar datos
    for (int i=0; i<num_students; ++i){
        // Limpia el buffer de entrada
        fflush(stdin);
        // Llamamos a la funcion getStudentInfo, para obtener la informacion
        getStudentInfo(*estudianteArray);
    }
    // Returnamos el puntero que creamos al que asociamos el arreglo dinamico
    return estudianteArray;
}
// Function para ver alumnos registrados
// Tiene como parametros el puntero con el array Dinamico y el numero de alumnos
void displayStudents(const Estudiante* estudianteArray, int num_students){
    // Imprime mensaje de bienvenida
    cout << "---- Alumnos en el sistema ----" << endl;
    // Ciclo for para acceder a la informacion de cada estudiante
    for (int i=0; i<num_students; ++i){
        cout << "-------- Datos del alumno " << i+1 << "-------- " << endl;
        cout << "Nombre: " << estudianteArray[i].nombre << endl;
        cout << "Apellido Paterno: " << estudianteArray[i].apellidoPaterno << endl;
        cout << "Apellido Materno: " << estudianteArray[i].apellidoMaterno << endl;
        cout << "Edad: " << estudianteArray[i].edad << endl;
        cout << "Estatura: " << estudianteArray[i].estatura <<endl;
        cout << "-------------------" << endl;
    }
}
// Clear array
// Limpia el arreglo y desaloja la memoria
void freeStudentArray(Estudiante* estudianteArray){
    delete[] estudianteArray;
}