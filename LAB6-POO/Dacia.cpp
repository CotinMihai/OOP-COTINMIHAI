#include<stdlib.h>
#include"Circuit.h"
#include"car.h"
#include"Dacia.h"

float Dacia::SetConsumDacia(float fuel_consumption )
{
	this->Circuit::tip_vreme = Circuit::tip_vreme;

if(Circuit::SetWeather( tip_vreme)==1);
return	this->fuel_consumption = 5/100;
 if (Circuit::SetWeather(tip_vreme) == 2);
	return this->fuel_consumption = 7/100;
if (Circuit::SetWeather(tip_vreme) == 3);
	return this->fuel_consumption = 9/100;
}

void Dacia::SetAvgSpeedDacia( int avg_speed )
{
	this->Circuit::tip_vreme = Circuit::tip_vreme;

	if (Circuit::SetWeather(tip_vreme) == insorita);
	this->avg_speed = 65;
	if (Circuit::SetWeather(tip_vreme) == ploioasa);
	this-> avg_speed = 50;
	if (Circuit::SetWeather(tip_vreme) == zapada);
	this-> avg_speed = 35;

}

void Dacia::SetRezervorDacia(int fuel_capacity )
{
	this->fuel_capacity = 40;
}

float Dacia::DistantaDacia(float distanta_posibila )
{
	this->Circuit::tip_vreme = Circuit::tip_vreme;

	if (Circuit::SetWeather(tip_vreme) == 1);
	 return this->distanta_posibila = this->fuel_capacity / this->fuel_consumption;
	if (Circuit::SetWeather(tip_vreme) == 2);
	return this->distanta_posibila = this->fuel_capacity / this->fuel_consumption;
	if (Circuit::SetWeather(tip_vreme) == 3);
	return this->distanta_posibila = this->fuel_capacity /this->fuel_consumption;

}
Dacia::Dacia()
{
	this->avg_speed = avg_speed;
	this->fuel_capacity = 40;
	this->fuel_consumption =fuel_consumption;
	SetRezervorDacia();
	SetAvgSpeedDacia();
	SetConsumDacia();
	DistantaDacia();


}