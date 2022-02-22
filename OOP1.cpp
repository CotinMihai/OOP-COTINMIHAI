#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;









int main()

{
FILE* fp;
	if (fopen(&fp, "in.txt", "r") != 0)
	{
		printf("Eroare. Nu am putut deschide fisierul\n");
	}
	else {
		printf("Am deschis fisierul cu success!\n");

return 0;
}



		