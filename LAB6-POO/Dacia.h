#pragma once
#include"car.h"

class Dacia:
	public Circuit, car
	  
{public:
	float fuel_consumption = 0, avg_speed = 0, fuel_capacity = 0, distanta_posibila = 0;
	 Dacia();
	float  SetConsumDacia(float fuel_consumption=0);
	void SetAvgSpeedDacia(int avg_speed=0);
	void SetRezervorDacia(int fuel_capacity=40);
	float DistantaDacia(float distanta_posibila=0);

};