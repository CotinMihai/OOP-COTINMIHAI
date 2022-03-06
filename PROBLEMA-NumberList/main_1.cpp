#include <iostream>
#include"NumberList.h"
using namespace std;

int main()
{
    int x;
    NumberList nr;
    nr.Init();
    for (int i=0;i<=9;i++)
    {
        cin>>x;
        nr.Add(x);
    }
    nr.Sort();
    nr.Print();
    return 0;
}
