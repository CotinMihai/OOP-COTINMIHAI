#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int numere[200],i=1,j,vect[200],ok,x,contor_caractere,sum,suma_sparta,contor_string,temp,l1,l2,n; 
char *p;
char m[100][100],aux[100];
//mult cod foarte tare 
char string1[201];
int main()
{
printf("Introduceti numarul de cuvinte din propozitie: ");
	int numarCuvinte;
	scanf("%d", &numarCuvinte, 4);
	printf("Introduceti o propozitie: ");
	char cuvant[20];
	//scanf("%19s", cuvant);
	int counter = 0;
	while (scanf("%19s", cuvant, 19))
	{
		//if (strcmp(cuvant, "\n\n") == 0)
		//	break;
		printf("Cuvantul citit este: %s\n", cuvant);
		counter += 1;
		strcpy(m[counter],cuvant);
		if (counter >= numarCuvinte)
			break;
	}

for(i=1;i<counter;i++)
{for(j=i+1;j<=counter;j++)
printf("%d %d",l1,l2);
	l1=strlen(m[i]);
	l2=strlen(m[j]);
	if((l1<l2)||(l1==l2&&strcmp(m[i],m[j])>0))
{
	strcpy(aux,m[i]);
	strcpy(m[i],m[j]);
	strcpy(m[j],aux);
}
}

for(i=1;i<=counter;i++)
printf("%s\n", m[i]);

 return 0;
 }






