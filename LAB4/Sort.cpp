#include"Sort.h"
#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<iostream>
#include<time.h>
using namespace std;




int  Sort::GetElementsCount()
{
    {n=this->n;
        printf("\nNumarul de elemente curent este:\n");

        return n;
    }


}

int Sort::GetElementFromIndex(int v[10001],int k)
{

    return v[k];
}

Sort::Sort(int v[10001],int maxi,int mini,int n)
{this->n=n;
    srand (time(NULL));
    int m=n;
    while(m)
    {
        int   iSecret = rand() % maxi + mini;
        v[m]=iSecret;
        m--;
    }
    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";
}


void Sort::QuickSort(int v[10001],bool ascendent, int st, int dr)
{
    if(st < dr)
    {
        //pivotul este inițial v[st]
        int m = (st + dr) / 2;
        int aux = v[st];
        v[st] = v[m];
        v[m] = aux;
        int i = st, j = dr, d = 0;
        while(i < j)
        {
            if((v[i] > v[j] && ascendent==true)||(v[i]<v[j]&&ascendent==false))
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                d = 1 - d;
            }
            i += d;
            j -= 1 - d;
        }
        QuickSort(v,ascendent, st, i - 1);
        QuickSort(v,ascendent, i + 1, dr);
    }




}

void Sort::Print()
{

    printf("Vectorul sortat este:\n");
    for(i=1; i<=GetElementsCount(); i++)
        printf("%d, ",v[i]);
}


