#pragma once
//#include <string>
class Produkt {

public:
	//Setters
	void setCena(double Cena);
	void setIlosc(int Ilosc);
	void setNazwa(std::string Nazwa);
	void setCzy_uzup(bool war);
	//Getters
	double getCena();
	int getIlosc();
	std::string getNazwa();
	bool getCzy_uzup();
	Produkt(std::string nazwa, int ilosc, double cena, bool Czy_uzup);
	Produkt();
private:
	double Cena;
	int Ilosc;
	std::string Nazwa;
	bool Czy_uzup;
};
