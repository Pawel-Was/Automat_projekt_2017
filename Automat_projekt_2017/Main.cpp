#include <iostream>
#include "headers.h"
#include <conio.h>
#include <fstream>
#include <string>

using namespace std;
string flaga_zdarzenia; // PRZECHOWUJE GLOBALNE FLAGI ZDARZENIA





int main() {
	Automat main_module; // G³ówny obiekt
	main_module.setsciezka("Automat.txt"); // Sciezka
	flaga_zdarzenia = main_module.policz_plik();
	init(main_module.getsciezka(),flaga_zdarzenia,main_module.getilosc_produktow());
	Sleep(4000);
	system("cls");
 	main_module.wektor_produktow =  main_module.wczytaj_produkty(main_module.getilosc_produktow());
	glowne_menu(main_module);




	cout << "\n\nNacisnij dowolny klawisz";
	_getch();

}