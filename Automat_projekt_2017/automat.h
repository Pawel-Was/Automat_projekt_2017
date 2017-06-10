
#include "produkt.h"
#include <fstream>

#pragma once
using namespace std;
class Automat {
public:
	string policz_plik(string path);
	int glowne_menu();
	int getilosc_produktow();
private:
	fstream plik;
	string sciezka;
	int ilosc_produktow;


};