#include <iostream>
using namespace std;

int A[10];
int top = -1;

void Push(int x)
{
    A[++top] = x
}
void Pop()
{
}
void Print()
{
    for (int i = 0; i < 10; i++)
    {
        cout << A[i];
    }
}

void top()
{
    //cout << A[n - 1];
}

int main()
{
    Push(4);
    Print();
    Push(3);
    Print();
    Push(7);
    Print();
    Pop();
    Print();
    Pop();
    Print();
    Push(10);
    Print();
    top();
    Print();
}