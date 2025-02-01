#include <conio.h>  //para _kbhit() y _getch()
#include <windows.h> //para sleep y gotoxy
#include "Animacion.h"

using namespace std;

//Opciones menu principal
string opciones1[] = { "Suma de matrices", "Resta de matrices", "Multiplicacion de matrices", "Salir" };
int nopciones1 = sizeof(opciones1) / sizeof(opciones1[0]); //Numero de opciones
//Para obetner el numero de opciones se divide la suma de todos los bytes por el tamanyo de un solo elemento

//Opciones sub menu suma 
string opciones2[] = { "Sumar", "Ayuda", "Regresar"};
int nopciones2 = sizeof(opciones1) / sizeof(opciones1[0]);

int opc = 0; //Opcion seleccionada, debe regresar a 0 al cambiar de menu
int nmenu = 1; //Menu que se esta mostrando en pantalla


void leer_flechas() {
    char tecla = _getch();
    cout << tecla;
    if ((tecla == 72) && (opc > 0)) {  //Flecha arriba
        opc = opc - 1;
    }
    if (tecla == 80) {  //Flecha abajo
        opc = opc + 1;
    }
    

}

void leer_enter() {



}

//Funcion que dibuja todo en la pantalla segun la variable nmenu
void dibujar_pantalla(int menu) {
    switch (nmenu)
    {
        case 1:
        {
            cout << "----------MENU----------" << endl;
            for (int i = 0; i < nopciones1; i++) 
            {
                if (i == opc) {
                    cout << "> " << opciones1[i] << endl;
                }
                else {
                    cout << "  " << opciones1[i] << endl;
                }
            }
            break;
        }

        case 2:
        {
            cout << "----------SUMA DE MATRICES----------" << endl;
            for (int i = 0; i < nopciones2; i++)
            {
                if (i == opc) {
                    cout << "> " << opciones2[i] << endl;
                }
                else {
                    cout << "  " << opciones2[i] << endl;
                }
            }



        }
    }


}










int main() {
    bool salir = false;
    animacion();


    while (salir == false) {
        system("cls");
        dibujar_pantalla(nmenu);
        leer_flechas();
    }

    return 0;
}