#include "Animacion.h"

//El centrado de la animacion y menu
#define centradox 35 
#define centradoy 5 

using namespace std;

//Funcion gotoxy
void gotoxy(int x, int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y = y;
    SetConsoleCursorPosition(hcon, dwPos);
}

void animacion() {
    const char linea1[] = "   _____ _____  _    _ _____   ____      _  _    ___  ";
    const char linea2[] = "  / ____|  __ \\| |  | |  __ \\ / __ \\   _| || |_ / _ \\ ";
    const char linea3[] = " | |  __| |__) | |  | | |__) | |  | | |_  __  _| (_) |";
    const char linea4[] = " | | |_ |  _  /| |  | |  ___/| |  | |  _| || |_ > _ < ";
    const char linea5[] = " | |__| | | \\ \\| |__| | |    | |__| | |_  __  _| (_) |";
    const char linea6[] = "  \\_____|_|  \\_\\\\____/|_|     \\____/    |_||_|  \\___/ ";
    Sleep(1500);

    for (int i = 0; i < sizeof(linea6); i++)
    {

        gotoxy(i + centradox, 1 + centradoy);
        cout << linea1[i];
        gotoxy(i + centradox, 2 + centradoy);
        cout << linea2[i];
        gotoxy(i + centradox, 3 + centradoy);
        cout << linea3[i];
        gotoxy(i + centradox, 4 + centradoy);
        cout << linea4[i];
        gotoxy(i + centradox, 5 + centradoy);
        cout << linea5[i];
        gotoxy(i + centradox, 6 + centradoy);
        cout << linea6[i];
        Sleep(50); //Velocidad con la que escribe el logo


    }
    Sleep(1500);

}