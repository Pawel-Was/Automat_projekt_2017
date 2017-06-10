#include <iostream>
#include "headers.h"
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;
string flaga_zdarzenia; // PRZECHOWUJE GLOBALNE FLAGI ZDARZENIA





int main() {
	Automat main_module; // G³ówny obiekt
	main_module.setsciezka("Automat.txt");
	init(); // Copyright i duperele (Functions.cpp)
	flaga_zdarzenia = main_module.policz_plik();
	cout << flaga_zdarzenia << "\n wykryta ilosc produktow: " << main_module.getilosc_produktow();
	Sleep(2000);
	system("cls");




	cout << "\n\nNacisnij dowlony klawisz";
	_getch();

}