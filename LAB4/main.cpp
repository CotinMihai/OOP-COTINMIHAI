#include <iostream>
#include"Sort.h"
using namespace std;
int n,i,j,k,v[10001],mini,maxi,mini1,maxi1;
int main()
{
    cout<<"Introduceti valoarea minima a sirului de numere:\n";
    cin>>mini;
    cout<<"Introduceti valoarea maxima a sirului de numere:\n";
    cin>>maxi;
    cout<<"Introduceti lungimea sirului de numere:\n";
    cin>>n;

    Sort s1(v,maxi,mini,n);
    cout<<endl;
    cout<<endl;
    cout<<"Introduceti valoarea minima si maxima a intervalului de sortare:";
    cout<<endl;
//false- descrescator, true-crescator
    cin>>mini1>>maxi1;// marimea intervalului pentru quick sort!!
    // s1.QuickSort(v,false,mini1,maxi1);//test
    // s1.BubbleSort(v,false);//test
    s1.InsertSort(v,true);
    cout<<endl;
    cout<<"introduceti pozitia elementului dorit\n:";
    cin>>k;
    cout<<"elementul de pe pozitia ceruta este:\n";
    cout<<s1.GetElementFromIndex(v,k);
    cout<<endl;
    cout<<s1.GetElementsCount();

    cout<<endl;
    s1.Print(v);
    cout<<endl;

    for(i=1; i<=n; i++)
        cout<<v[i]<<" ";
}
