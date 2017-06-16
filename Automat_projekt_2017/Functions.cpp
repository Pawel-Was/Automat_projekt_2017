#include <iostream>
#include <string>
#include "headers.h"

using namespace std;


void init(std::string sciezka,std::string flaga, int ilosc) {

	cout << "Wykryto plik o nazwie: " << "\"" << sciezka << "\"" << endl;
	cout << flaga << "\nWykryta ilosc produktow: " << ilosc << endl;
	cout << "\n\nAutomat wersja 0.1\n" << endl << "Created by Pawel Was\n"
		<< "Copyright © 2017\n";

}
void glowne_menu(Automat &autom)
{
	//zmienne
	char klawisz = 'w';
	int wybor;
	int ilosc;
	string tmp;
	//#################################
	while (klawisz != 'q') // G³ówna pêtla
	{
		// inicjalizacja i uzupelnienie listy produktów:
		cout << "Produkty: \n";
		autom.wektor_produktow = autom.wczytaj_produkty(autom.getilosc_produktow());
		autom.uzupelnienie();
		// Wypisanie produktów i wybór (A)
		for (int i = 0; i < autom.getilosc_produktow(); i++)
		{
			cout << i + 1 << ": " << " Nazwa produktu: " << autom.wektor_produktow[i].getNazwa() << endl ;
			cout << "Ilosc sztuk: " << autom.wektor_produktow[i].getIlosc() << "  ";
			cout << "Cena produktu: " << autom.wektor_produktow[i].getCena() << " PLN" << endl;
		}
		cout << "\nWybierz produkt(1-" << autom.getilosc_produktow() << "): " << endl;
		getline(cin,tmp);
		wybor = atoi(tmp.c_str());

		// Warunek wyboru (A)
		if ((wybor > 0) && (wybor <= autom.getilosc_produktow())) // warunek 
		{
			cout << "Wybrales: " << autom.wektor_produktow[wybor-1].getNazwa() << endl;
			cout << "Podaj ilosc: ";
			getline(cin, tmp);
			ilosc = atoi(tmp.c_str());
			if (ilosc <= autom.wektor_produktow[wybor - 1].getIlosc())
			{
				cout << "Cena: " << autom.wektor_produktow[wybor - 1].getCena()*ilosc << " PLN" << endl;

			}
			else
			{
				cout << "Podano nieprawidlowa ilosc produktow\n";
				Sleep(1000);
					continue;
			}

		}
		else
		{
			system("cls");
			continue;
		}


		//wyjscie z petli
		cout << "\n Nacisnij Q aby wyjsc lub dowolny klawisz aby kontynuowac";
		klawisz = _getch();
		system("cls");
	}
}