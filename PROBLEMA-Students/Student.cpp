#include"Student.h"
#include<cstring>
#include<iostream>
using namespace std;

void student::setnume(char nume[30])
{
    strcpy(this->nume,nume);
}

char* student::getnume()
{
    return this->nume;
}


void student::setnota_eng(float nota)
{
    this->nota_eng=nota;
}
float student::getnota_eng()
{
    return this->nota_eng;
}


void student::setnota_mate(float nota)
{
    this->nota_mate=nota;
}
float student::getnota_mate()
{
    return this->nota_mate;

}


void student::setnota_ist(float nota)
{
    this->nota_ist=nota;
}
float student::getnota_ist()
{
    return this->nota_ist;
}


float student::getmedie_note()
{
    float   media=(nota_eng+nota_ist+nota_mate)/3;
    return media;
}


int student::compara_nume(student s2)
{
    if (strcmp(this->nume,s2.nume)==0)
        return 0;
    else if (strcmp(this->nume,s2.nume)<0)
        return 1;
    else
        return -1;
   
    }


int student::comparanota_eng(student s2)
{
    if (this->nota_eng>s2.getnota_eng())
        return 1;
    else if (this->nota_eng==s2.getnota_eng())
        return 0;
    else
        return -1;
}


int student::comparanota_ist(student s2)
{

    if (this->nota_ist>s2.getnota_ist())
        return 1;
    else if (this->nota_ist==s2.getnota_ist())
        return 0;
    else
        return -1;
}


int student::comparanota_mate(student s2)
{

    if (this->nota_mate>s2.getnota_mate())
        return 1;
    else if (this->nota_mate==s2.getnota_mate())
        return 0;
    else
        return -1;
}


int student::compara_medie(student s2)
{


    if (this->media>s2.getmedie_note())
        return 1;
    else if (this->media==s2.getmedie_note())
        return 0;
    else
        return -1;
}




