#include <stdio.h>
#define N 100
int stack[N];
int top = -1;

void push(int value)
{
    if(top >= N) printf("Stack is full!!\n");
    else{
        top++;
        stack[top] = value;
    }
}

void pop()
{
    if(top < 0) printf("Stack is empty!!\n");
    else{
        top--;
    }
}

void print()
{
    int temp = top;
    printf("Stack is: ");
    if(temp < 0){
        printf("empty!!\n");
        return;
    }
    while(temp >= 0){
        printf("%d ", stack[temp]);
        temp--;
    }
    printf("\n");
}


int main()
{
    printf("Menu:\n1. PUSH\n2. POP\n3. PRINT\n0. EXIT\nEnter your choice: ");
    while(1)
    {
        int choice;
        scanf("%d", &choice);
        if(choice == 1)
        {
            int val;
            scanf("%d", &val);
            push(val);
        }
        else if(choice == 2)
        {
            pop();
        }
        else
        {
            print();
        }
    }

    return 0;
}