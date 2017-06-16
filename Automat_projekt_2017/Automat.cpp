#include <iostream>
#include "automat.h"
#include "headers.h"

using namespace std;

// liczy produkty w pliku
string Automat::policz_plik()
{
	string linia;
	ifstream plik;
	plik.open(this->sciezka.c_str(), ios::in);
	if (plik.good())
	{

		while(!plik.eof())
		{
			getline(plik, linia);
			if (linia == "#")
				break;
			++this->ilosc_produktow;
			// cout << this-> ilosc_produktow << ": " <<  linia << endl; //KONTROLNE WYPISANIE PLIKU

		}
		plik.close();
		return "Otwarto plik pomyslnie oraz zapisano iloœæ do glownego modulu";
	}
	else
	{
		plik.close();
		return "Nie udalo sie otworzyc pliku";
	}
}

int Automat::glowne_menu() 
{
	char klawisz='w';
	int wybor=0;
	while (klawisz != 'q') 
	{
		cout << "Produkty: \n";
		for (int i = 1; i <= this->getilosc_produktow(); i++)
		{
			// ENDED HERE
		}





		klawisz = _getch();
	}
	return wybor;

}
// zwraca ilosc produktow
int Automat::getilosc_produktow() {
	return this->ilosc_produktow;
}
void Automat::setsciezka(string path) {
	this->sciezka = path;

}
string Automat::getsciezka() {
	return this->sciezka;
}


// Wczytuje plik ze sciezki/dane do wektora produktow
vector<Produkt> Automat::wczytaj_produkty(int ile) {
	vector<Produkt> lokalny_wektor;
	ifstream plik;
	string linia;
	plik.open(this->sciezka.c_str(),ios::in);
	for (int i = 0; i < ile; i++)
	{

	}


	return lokalny_wektor;

}