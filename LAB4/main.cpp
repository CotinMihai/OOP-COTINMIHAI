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
   // s1.Print();
    cout<<endl;
    cout<<"Introduceti valoarea minima si maxima a intervalului de sortare:";
    cout<<endl;

    cin>>mini1>>maxi1;
   // s1.QuickSort(v,true,mini1,maxi1);
cout<<endl;
cout<<"introduceti pozitia elementului dorit\n:";
cin>>k;
cout<<"elementul de pe pozitia ceruta este:\n";
cout<<s1.GetElementFromIndex(v,k);

cout<<s1.GetElementsCount();


s1.Print();

}
