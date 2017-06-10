#include <iostream>
#include "headers.h"
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;
string flaga_zdarzenia; // PRZECHOWUJE GLOBALNE FLAGI ZDARZENIA
string path = "Automat.txt"; //ŒCIE¯KA DO PLIKU Z JEDZENIEM
int main() {
	Automat main_module; // G³ówny obiekt
	init(); // Copyright i duperele (Functions.cpp)
	flaga_zdarzenia = main_module.policz_plik(path);
	cout << flaga_zdarzenia << "\n wykryta ilosc produktow: " << main_module.getilosc_produktow();
	Sleep(2000);
	system("cls");




	cout << "\n\nNacisnij dowlony klawisz";
	_getch();

}