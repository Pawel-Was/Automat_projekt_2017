#include <iostream>
#include <string>
#include "produkt.h"
using namespace std;
//ACCESORS
	void Produkt::setCena(double Cena) {
		this->Cena = Cena;
	}
	void Produkt::setIlosc(int Ilosc) {
		this->Ilosc = Ilosc;
	}
	void Produkt::setNazwa(std::string Nazwa) {
		this->Nazwa = Nazwa;
	}
	void Produkt::setCzy_uzup(bool war) {
		this->Czy_uzup = war;
	}
	//Getters
	double Produkt::getCena() {
		return this->Cena;
	}
	int Produkt::getIlosc() {
		return this->Ilosc;
	}
	string Produkt::getNazwa() {
		return this->Nazwa;
	}
	bool Produkt::getCzy_uzup() {
		return this->Czy_uzup;
	}
