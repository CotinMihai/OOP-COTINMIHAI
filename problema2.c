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
	scanf("%d", &numarCuvinte, 200);
	//printf("Introduceti o propozitie: ");
	char cuvant[100];
	//scanf("%19s", cuvant);
	int counter = 0;
	do
	{
		//if (strcmp(cuvant, "\n\n") == 0)
		//	break;
		printf("Dati cuvantul:\n");
		scanf("%19s", cuvant, 20);
		counter += 1;
		strcpy(m[counter],cuvant);
	
		
	}while (counter < numarCuvinte);

	for (i=1;i<n;i++)
	for (j=i+1;j<=n;j++)
	  {
		  if (strlen(m[i])<strlen(m[j]))
	     {
			 strcpy(aux,m[i]);
			 strcpy(m[i],m[j]);
			 strcpy(m[j],aux);
		 }
		 else if (strlen(m[i])==strlen(m[j]) && strcmp(m[i],m[j])>0) 
		 {
			 strcpy(aux,m[i]);
			 strcpy(m[i],m[j]);
			 strcpy(m[j],aux);
		}
	  }
for(i=1;i<=counter;i++)
    printf("%s\n",m[i]);
 return 0;
 }






