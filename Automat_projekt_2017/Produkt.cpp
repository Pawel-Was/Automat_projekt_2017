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
	//######################################
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
	Produkt::Produkt(string nazwa ,int ilosc ,double cena ,bool Czy_uzup)
	{
		this->setNazwa(nazwa);
		this->setIlosc(ilosc);
		this->setCena(cena);
		this->setCzy_uzup(Czy_uzup);
	}
	Produkt::Produkt()
	{
		this->setNazwa("");
		this->setIlosc(0);
		this->setCena(0.0);
		this->setCzy_uzup(false);
	}
