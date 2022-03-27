#ifndef SORT_H_INCLUDED
#define SORT_H_INCLUDED



#endif // SORT_H_INCLUDED

class Sort
{

    int counter,i,j,v[10001],k,mini,maxi,n,st,dr;
    bool ascendent;

public:

    void InsertSort( int v[10001],bool ascendent=false);

    void QuickSort(int v[10001],bool ascendent,int st, int dr);

    void BubbleSort(int v[10001],bool ascendent=false);

    void Print(int v[10001]);

    int  GetElementsCount();

    Sort(int v[10001],int maxi,int mini,int n);

    int  GetElementFromIndex(int v[10001],int index);



};
