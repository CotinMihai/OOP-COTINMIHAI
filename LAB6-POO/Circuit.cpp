#include "Circuit.h"

Vreme Circuit::SetWeather(Vreme tip_vreme)
{
  return   this-> tip_vreme=tip_vreme;
}

void Circuit::SetLength(int length)
{
    this->length;
}

Circuit::Circuit()
{
	this->nr = 1;
	this -> length = 0;
	this->tip_vreme = insorita;


}
void Circuit::AddCar( car  masina)
{
	this->nr = nr;
	 cars[nr++] = masina;
}
car::car()
{
	fuel_capacity = 0;
	avg_speed = 0;
	fuel_consumption = 0;

	this->fuel_capacity = fuel_capacity;
	this->avg_speed = avg_speed;
	this->fuel_consumption = fuel_consumption;


}