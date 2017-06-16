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
	char klawisz = 'w';
	int wybor;
	string tmp;
	while (klawisz != 'q')
	{
		cout << "Produkty: \n";
		for (int i = 0; i < autom.getilosc_produktow(); i++)
		{
			cout << i + 1 << ": " << " Nazwa produktu: " << autom.wektor_produktow[i].getNazwa() << endl ;
			cout << "Ilosc sztuk: " << autom.wektor_produktow[i].getIlosc() << "  ";
			cout << "Cena produktu: " << autom.wektor_produktow[i].getCena() << " PLN" << endl;
		}
		cout << "\nWybierz produkt(1-" << autom.getilosc_produktow() << "): " << endl;
		getline(cin,tmp);
		wybor = atoi(tmp.c_str());
		if ((wybor > 0) && (wybor <= autom.getilosc_produktow()))
		{
			cout << "Wybrales: " << autom.wektor_produktow[wybor-1].getNazwa() << endl;
		}
		else
		{
			system("cls");
			continue;
		}






		klawisz = _getch();
		system("cls");
	}
	//return wybor;

}