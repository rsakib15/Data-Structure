using System;

class Stack
{
    int[] stck;
    int tos;

    public Stack(int SIZE)
    {
        stck = new int[SIZE];
        tos = 0;
    } 
    public void push(int n)
    {
        if (tos == stck.Length)
        {
            Console.WriteLine("Stack is full");
            return;
        }
        stck[tos] = n;
        tos++; 
    }

    public void pop()
    {
        if (tos == 0)
        {
            Console.WriteLine("Stack is Empty");
            return;
        }
        tos--;
    }

    public bool isFull()
    {
        if (tos == stck.Length)
            return true;
        else
            return false;
    }

    public bool isEmpty()
    {
        if (tos == 0)
            return true;
        else
            return false;
    }

    public int capacity()
    {
        return stck.Length;
    }

    public int top()
    {
        return stck[tos-1];
    }
    public void stackElement()
    {
        Console.WriteLine("Stack Elements: ");
        for(int i = 0; i < tos; i++)
        {
            Console.WriteLine(stck[i]);
        }
    }
}

class Program
{
    public static void Main(String [] args)
    {
        Stack s = new Stack(10);

        s.push(12);
        s.push(11);
        s.push(1);
        s.push(56);
        s.push(36);

        s.stackElement();
        s.pop();

    }
}