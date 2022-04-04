#include<iostream>
#include<stdlib.h>
#include"Circuit.h"
#include"Dacia.h"
using namespace std;
Circuit c;
Vreme vreme = zapada;
car m1,m2,renault;
car cars[20];
Dacia logan;


int main()
{
	Circuit();
	//car(logan);//nu reusesc sa apelez constructorul "car" pt clasa dacia; este normal?
	c.AddCar(m1);
	c.SetLength(300);
	c.SetWeather(zapada);
	Dacia(logan);
	cout << logan.SetConsumDacia();//din motive ce imi scapa da 0..indiferent daca pun
	//functia de vvreme ==insorita etc.. sau ==1,2 si de aceea la functia de consum 
	//imparte la 0 si da infinit cred...
	cout<<logan.DistantaDacia();
	logan.AddCar(renault);
	;//nu am idee de ce spune ca e ambiguu. E ceva legat de circuit.h la derivare 
	//cand ii dau acces public la car, fara acel camp nu merge deloc,cu el da eroare la partea asta.
	


	return 0;
}