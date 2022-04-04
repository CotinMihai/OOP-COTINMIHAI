#pragma once
#include"vreme.h"
#include"car.h"
class Circuit:
	public car
{
public:	
	Circuit();
	
	car cars[20];
	Vreme tip_vreme;
	int length,nr;

	Vreme SetWeather( Vreme tip_vreme);
	void SetLength(int length);
	void AddCar( car masina);
};

