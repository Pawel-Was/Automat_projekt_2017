#include <iostream>
#include "automat.h"
#include "headers.h"

using namespace std;


string Automat::policz_plik(string path)
{
	string linia;
	ifstream plik;
	plik.open(path.c_str(), ios::in);
	if (plik.good())
	{

		while(!plik.eof())
		{
			getline(plik, linia);
			++this->ilosc_produktow;
			// cout << this-> ilosc_produktow << ": " <<  linia << endl; //KONTROLNE WYPISANIE PLIKU
			if (linia == "")
				break;
		}
		return "Otwarto plik pomyslnie oraz zapisano iloœæ do glownego modulu";
	}
	else
	{
		return "Nie udalo sie otworzyc pliku";
	}
}

int Automat::glowne_menu() 
{
	char klawisz='w';
	int wybor;
	while (klawisz != 'q') 
	{
		cout << "Produkty: \n";
		for (int i = 1; i <= this->getilosc_produktow; i++)
		{
			// ENDED HERE
		}





		klawisz = _getch();
	}
	return wybor;

}

int Automat::getilosc_produktow() {
	return this->ilosc_produktow;
}