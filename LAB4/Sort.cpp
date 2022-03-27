#include"Sort.h"
#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<time.h>
using namespace std;




int  Sort::GetElementsCount()
{
    {
        n=this->n;
        printf("\nNumarul de elemente curent este:\n");

        return n;
    }


}

int Sort::GetElementFromIndex(int v[10001],int k)
{

    return v[k];
}

Sort::Sort(int v[10001],int maxi,int mini,int n)
{
    this->n=n;
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

void  Sort::Print(int v[10001])
{
    cout<<"Vectorul este:"<<endl;
    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";
}

void Sort::BubbleSort(int v[10001],bool ascendent)
{
    //crescator
    n=this->n;
    i=this->i;


    if(ascendent==true)
    {


        bool sortat;
        do
        {
            sortat = true;
            for(int i=1; i<n; i++)
                if(v[i] > v[i+1])
                {
                    int aux = v[i];
                    v[i] = v[i+1];
                    v[i+1] = aux;
                    sortat = false;
                }
        }
        while(!sortat);
    }
    else  if(ascendent==false)
    {
        //descrescator

        bool sortat;
        do
        {
            sortat = true;
            for(int i=1; i<n; i++)
                if(v[i]<v[i+1])
                {
                    int aux =v[i+1];
                    v[i+1] =v[i];
                    v[i] =aux;
                    sortat =false;
                }

        }
        while(!sortat);


    }
}

void Sort::InsertSort(int v[10001],bool ascendent)
{

    n=this->n;
    if (ascendent==true)
    {
        for(int i = 2 ; i <=n ; i ++)
        {
            int x = v[i];
            int p = i - 1;
            while(p>=1&&v[p]>x)
                v[p+1]=v[p];
            p--;
            v[p+1]=x;
        }
    }
    else if (ascendent==false)
    {
        for (int i = 2; i <=n; i++)
        {
            int x = v[i];
            int j = i - 1;
            while (x > v[j] && j >= 1)
            {
                v[j + 1] = v[j];
                --j;
            }
            v[j + 1] = x;
        }
    }
}

