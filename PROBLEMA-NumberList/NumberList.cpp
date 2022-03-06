#include<iostream>
#include"NumberList.h"
using namespace std;
int i,j,numbers[10];

void NumberList::Init()
{
    count=0;
}

bool NumberList::Add(int x)
{
    if(count<10)
    {
        numbers[count]=x;
        count++;
        return true;
    }
    return false;
}

void NumberList::Sort()
{
    for(i=0; i<9; i++)
        for(j=i+1; j<=9; j++)
            if(numbers[i]>numbers[j])
                swap(numbers[i],numbers[j]);

}

void NumberList::Print()
{
    for(i=0; i<=9; i++)
        printf("%d ",numbers[i]);

}
