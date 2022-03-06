#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED



#endif // STUDENT_H_INCLUDED
class  student
{

public:
    int i,j;
    float nota_mate,nota_eng,nota_ist,media;
    char nume[30];

    void setnume( char nume[30]);
    char* getnume();

    void setnota_mate(float nota);
    float getnota_mate();

    void setnota_eng(float nota);
    float getnota_eng();

    void setnota_ist(float nota);
    float getnota_ist();

    float getmedie_note();


    int compara_nume(student s2);
    int comparanota_eng(student s2);
    int comparanota_ist(student s2);
    int comparanota_mate(student s2);
    int compara_medie(student s2);



};
