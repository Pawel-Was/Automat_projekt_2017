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
		return "Otwarto plik pomyslnie oraz zapisano ilosc do glownego modulu";
	}
	else
	{
		plik.close();
		return "Nie udalo sie otworzyc pliku";
	}
}

/*int Automat::glowne_menu() 
{
	char klawisz='w';
	int wybor=0;
	while (klawisz != 'q') 
	{
		cout << "Produkty: \n";
		for (int i = 0; i < this->getilosc_produktow(); i++)
		{
			cout << wektor_produktow[i].getNazwa() << endl;
			// ENDED HERE
		}





		klawisz = _getch();
		system("cls");
	}
	return wybor;

}*/


// Accesors
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
	string bufor_nazwa;
	int bufor_ilosc;
	double bufor_cena;
	bool bufor_czy_uzup;
	plik.open(this->sciezka.c_str(),ios::in);
	// cout <<  endl << this->getilosc_produktow() << endl; debug
	for (int i = 0; i < ile; i++)
	{
		plik >> bufor_nazwa;
		plik >> bufor_ilosc;
		plik >> bufor_cena;
		plik >> bufor_czy_uzup;
		lokalny_wektor.push_back(Produkt(bufor_nazwa, bufor_ilosc, bufor_cena, bufor_czy_uzup));
		//cout << lokalny_wektor[i].getNazwa() << " ";
		//cout << lokalny_wektor[i].getIlosc() << " ";
		//cout << lokalny_wektor[i].getCena() << " ";
		//cout << lokalny_wektor[i].getCzy_uzup() << " " << endl;
	}


	return lokalny_wektor;

}


// Wypisuje produkty i pozwala wybraæ 