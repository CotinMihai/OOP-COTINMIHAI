#ifndef NUMBERLIST_H_INCLUDED
#define NUMBERLIST_H_INCLUDED


#endif // NUMBERLIST_H_INCLUDED
class NumberList
{
private:
    int count;
    int numbers[10];
public:
    void Init();
    bool Add(int x);

    void Sort();
    void Print();
};
