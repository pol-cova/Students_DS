//
// Created by Paul Contreras on 30/01/24.
//

#ifndef DS_STUDENT_STUDENTS_H
#define DS_STUDENT_STUDENTS_H

// Declarar estructura Address
/*
 * estado -> 20 chars
 * ciudad -> 20 chars
 * colonia -> 20 chars
 * calle -> 20 chars
 * numCasa -> int
 */
struct Address{
    char estado[20];
    char ciudad[20];
    char colonia[20];
    char calle[20];
    int numCasa;
};


// Declarar la estructura estudiante
/*
 * nombre -> 20 chars
 * apellido_paterno -> 20 chars
 * apellido_materno -> 20 chars
 * edad -> int
 * estatura -> float
 */
struct Estudiante{
    char nombre[20];
    char apellidoPaterno[20];
    char apellidoMaterno[20];
    int edad;
    float estatura;
    // Llamamos la estructura
    struct Address domicilio;
};

// Definir funciones para optimizar el proyecto
// Esta function imprime mensaje de bienvenida
void mainHeader();
// Esta function imprime menu
void menu();
// Function para obtener info
void getStudentInfo(Estudiante& estudiante);
// Function para registrar alumnos
Estudiante* registerStudents(int num_students);
// Function para ver alumnos registrados
void displayStudents(const Estudiante* estudianteArray, int num_students);
// Clear memory
void freeStudentArray(Estudiante* estudianteArray);



#endif //DS_STUDENT_STUDENTS_H
