#include <iostream>
#include"Student.h"
#include<cstring>

using namespace std;

int main()
{
    student s1;
    student s2;

//se dau parametrii in ()
   
    
    s1.setnume("Andrei-Zebra");
    printf("%s\n",s1.getnume());

    s1.setnota_eng(5.10);
    printf("%f\n",s1.getnota_eng());

    s1.setnota_ist(4.50);
    printf("%f\n",s1.getnota_ist());

    s1.setnota_mate(9.40);
    printf("%f\n", s1.getnota_mate());

    printf("%f\n",s1.getmedie_note());


    printf("\n");

    
 
    s2.setnume("Andrei-Marian ");
    printf("%s\n",s2.getnume());

    s2.setnota_eng(6.90);
    printf("%f\n",s2.getnota_eng());

    s2.setnota_ist(4.50);
    printf("%f\n",s2.getnota_ist());

    s2.setnota_mate(8.70);
    printf("%f\n", s2.getnota_mate());

    printf("%f\n",s2.getmedie_note());


    printf("\n");


    printf("%d\n",s1.compara_nume(s2));

    printf("%d\n",s1.comparanota_eng(s2));

    printf("%d\n",s1.comparanota_ist(s2));

    printf("%d\n",s1.comparanota_mate(s2));

    printf("%d\n",s1.compara_medie(s2));





    return 0;
}
