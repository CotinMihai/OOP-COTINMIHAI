#include <iostream>
#include"Math.h"
int x,y,z,count;
double a,b,c;
char sir1[30];
char sir2[30];
Math nr1;
using namespace std;

int main()
{
    cout<<"Introduceti nr intregi\n:";
    cin>>x>>y>>z;
    cout<<endl;
    cout<<"Introduceti count:\n";
    cin>>count;
    cout<<endl;
    printf("%d\n",nr1.Add(x,y));
    printf("%d\n",nr1.Add(x,y,z));
    printf("%d\n",nr1.Mul(x,y));
    printf("%d\n",nr1.Mul(x,y,z));
    printf("%d\n",nr1.Add(count,x,y,z));

    cout<<"Introduceti  nr reale\n:";
    cin>>a>>b>>c;
     cout<<endl;
    cout<<"Introduceti count\n:";
    cin>>count;
     cout<<endl;
    printf("%f\n",nr1.Add(a,b));
    printf("%f\n",nr1.Add(a,b,c));
    printf("%f\n",nr1.Mul(a,b));
    printf("%f\n",nr1.Mul(a,b,c));
    printf("%f\n",nr1.Add(count,a,b,c));


    cout<<"Introduceti primul sir:\n";
    cin>>sir1;
     cout<<endl;
     cout<<"Introduceti al doilea sir sir:\n";
    cin>>sir2;
     cout<<endl;

     printf("%s\n",nr1.Add(sir1,sir2));


















    return 0;
}
