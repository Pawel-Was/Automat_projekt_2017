
#include "produkt.h"
#include <fstream>
#include <vector>

#pragma once
using namespace std;
class Automat {
public:
	vector<Produkt> wektor_produktow;


	string policz_plik();
	int getilosc_produktow();
	vector<Produkt> wczytaj_produkty(int ile);
	void uzupelnienie();
	void setsciezka(string path);
	string getsciezka();
private:
	fstream plik;
	string sciezka;
	int ilosc_produktow;


};