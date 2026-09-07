#include <iostream>
using namespace std;

const int MAX = 100;

int stackArr[MAX];   
int top = -1;       



bool isEmpty()
{
    return (top == -1);
}


bool isFull()
{
    return (top == MAX - 1);
}



void push(int x)
{
    if (isFull())
    {
        cout << "Stack Overflow! Cannot push " << x << endl;
    }
    else
    {
        top = top + 1;
        stackArr[top] = x;

        cout << x << " pushed into stack." << endl;
    }
}


void pop()
{
    if (isEmpty())
    {
        cout << "Stack Underflow! Cannot pop." << endl;
    }
    else
    {
        cout << stackArr[top] << " popped from stack." << endl;

        top = top - 1;
    }
}


int peek()
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
        return -1;
    }
    else
    {
        return stackArr[top];
    }
}



void display()
{
    if (isEmpty())
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Stack elements: ";

        for (int i = 0; i <= top; i++)
        {
            cout << stackArr[i] << " ";
        }

        cout << endl;
    }
}



int main()
{
    push(10);
    push(20);
    push(30);

    display();

    cout << "Top element is: " << peek() << endl;

    pop();

    display();

    return 0;
}