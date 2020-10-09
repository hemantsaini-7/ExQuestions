#include <iostream>
using namespace std;

struct ArrayStack
{
    int top;
    int capacity;
    int *array;
};

struct ArrayStack *createStack(int cap)
{
    struct ArrayStack *s;
    s = (struct ArrayStack *)malloc(sizeof(struct ArrayStack *));
    s->top = -1;
    s->capacity = cap;
    s->array = (int *)malloc(sizeof(int) * s->capacity);

    return s;
}

int isFull(struct ArrayStack *s)
{
    if (s->top == s->capacity - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct ArrayStack *s)
{
    if (s->top == -1)
    {
        return 1;
    }
    return 0;
}

void Push(struct ArrayStack *s, int x)
{

    if (!isFull(s))
    {
        s->top++;
        s->array[s->top] = x;
    }
}

int Pop(struct ArrayStack *s)
{
    if (!isEmpty(s))
    {
        int data;
        data = s->array[s->top];
        s->top--;
        return data;
    }
    return -1;
}
int main()
{
    struct ArrayStack *stack;
    stack = createStack(4);
    int choice;
    while (1)
    {
        cout << endl
             << "1.Push";
    }
}