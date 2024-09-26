#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Array size declaration

int stack[MAX];
int top = -1; // Initial state of stack is empty (top = -1)

// Adding an element to the stack (Push operation)
void push(int value)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("Inserted %d\n", value);
    }
}

// Removing the element from the stack (Pop operation)
int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    else
    {
        int value = stack[top];
        top--;
        return value;
    }
}

// Peek operation to view the top element
int peek()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
        return -1;
    }
    else
    {
        return stack[top];
    }
}

// Display the current stack elements
void display()
{
    if (top == -1)
    {
        printf("Stack is empty!\n");
    }
    else
    {
        printf("Stack elements: ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main()
{
    push(10);  // Push 10 to the stack
    push(20);  // Push 20 to the stack
    push(30);  // Push 30 to the stack
    display(); // Display the stack

    printf("Popped: %d\n", pop()); // Pop the top element
    display();                     // Display the stack after pop

    printf("Top element: %d\n", peek()); // Peek the top element

    return 0;
}
