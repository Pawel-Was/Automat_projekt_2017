#include <iostream>
#include <conio.h>
#include "nominaly.h"
#pragma once
using namespace std;


double * Nominaly::getWsk_nominaly() {
	return this->wsk;
	}

void Nominaly::setWsk_nominaly(double *wsk){
		this->wsk = wsk;
	}
