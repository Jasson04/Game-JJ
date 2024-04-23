// Jasson De Jesus Sepulveda
// Justin

//PROJECTO PROGRAMACION

//Se identifican las bibliotecas
#include <iostream>
#include <string>
using namespace std;




// Programa principal
int main(){

    //Se identifican las variables
    int selection, number;
    char letter;

    //Menu del juego
    cout << "[{-ADIVINATION-}]" << endl;
    cout << " " << endl; // Se deja espacio entre el titulo del juego y las opciones que ofrece
    cout << "1-Start" << endl;
    cout << "2-Exit" << endl;
    //El usuario selecciona que hacer en el Menu colocando un numero
    cin >> selection;

    if (selection == 1) {
        // Usuario selecciona "Start" para iniciar el juego

    }
    else if (selection == 2) {
        // Usuario selecciona "Exit" para salir del programa
        cout << "Bye bye" << endl;
    }
    else {
        cout << "ERROR" << endl;
    }




    return 0;
}