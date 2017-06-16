
#include "produkt.h"
#include <fstream>
#include <vector>

#pragma once
using namespace std;
class Automat {
public:
	string policz_plik();
	int glowne_menu();
	int getilosc_produktow();
	vector<Produkt> wektor_produktow;
	vector<Produkt> wczytaj_produkty(int ile);




	void setsciezka(string path);
	string getsciezka();

private:
	fstream plik;
	string sciezka;
	int ilosc_produktow;


};