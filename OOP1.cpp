#include<fstream>
#include<iostream>
#include <stdlib.h>
#include<cstring>
using namespace std;
ifstream fin ("in.txt");
int numere[200],i=1,j,vect[200],ok,x,contor_caractere,sum,suma_sparta,contor_string,temp,l; 
//mult cod foarte tare 
char stringtare[201];
int main()
{  FILE* fp=fopen("/Users/mihaicotin/Documents/GIT/Fără titlu/in.txt","r");//doar in acest fel am reusit 
//sa fac aceasta functie sa functioneze; in alte cazuri da o eroare ciudata cu "call";
 if (!fp)//daca nu functioneaza.
	{
		printf("Eroare. Nu am putut deschide fisierul\n");
	}
	else 
	 {printf("Am deschis fisierul cu success!\n");
	
		
	while (fgets(stringtare, 201, fp))
		{	
			vect[i]=x;
			contor_caractere++;//cate numere citește din fișier
			i++;//alocăm o locație diferita pentru fiecare  element nou 
			ok=1;//daca citește;
		}
		if(ok==1)
		{
			printf("Am citit din fisier: \n");
		}

	}

 for(i=1;i<=contor_caractere;i++)
 {sum=sum+vect[i];//suma sub forma intreaga:)
 }


printf( "%d\n",sum);//afisarea prin printf
 fclose(fp);//1187109
 
 return 0;
 }






