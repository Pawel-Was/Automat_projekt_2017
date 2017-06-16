#pragma once
class Nominaly;
class Produkt;
class Automat;
#include "automat.h"
#include "nominaly.h"
#include "produkt.h"
#include <string>
#include <conio.h>
#include <Windows.h>
void init(std::string path,std::string flaga, int ilosc);
void glowne_menu(Automat &autom);