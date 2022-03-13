#include<stdarg.h>
#include "Math.h"
#include<cstring>
#include<stdlib.h>
#include<stdio.h>



int Math::Add( int x, int y)
{
    return x+y;
}

int Math::Add(int x, int y, int z)
{
    return x+y+z;

}

double    Math::Add( double a,  double b)
{
    return  a+b;
}

double Math::Add( double  a, double  b, double c)
{

    return  a+b+c;
}

double Math::Mul(double a, double b)
{
    return  a*b;
}
double Math::Mul( double a,double b,double c)
{

    return  a*b*c;
}
int Math::Mul( int x, int y)
{
    return x*y;
}

int Math::Mul( int x, int y, int z)
{
    return x*y*z;
}

double Math::Add(int count,...)
{
    va_list v1;
    double s=0;
    va_start(v1,count);
    for( int i=0; i<count; i++)
    {
        s=s+va_arg(v1,double);
    }
    va_end(v1);
    return s;
}

char* Math::Add(  const char* sir1, const  char* sir2)
{char* name;
    if(sir1==nullptr or sir2==nullptr)
        return nullptr;
    int sizeToRealloc;
    sizeToRealloc=strlen(sir1)+strlen(sir2)+1;
    if (name == nullptr)
    {
        name = (char*)malloc(sizeToRealloc);

        memset(name, 0, sizeToRealloc);
        if (name != nullptr)
        {

            memcpy(name, sir1, strlen(sir1));
            memcpy(name + strlen(sir1), sir2, strlen(sir2));
        }
        return name;
    }


    else
    {

        name = (char*) realloc(name, sizeToRealloc);

        memset(name, 0, sizeToRealloc);
        if (name != nullptr)
        {

            memcpy(name, sir1, strlen(sir1));
            memcpy(name + strlen(sir1), sir2, strlen(sir2));

        }
        return name;

    }
}


