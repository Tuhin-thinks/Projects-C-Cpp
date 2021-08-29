/**
 * @file C_stack_basics.c
 * @brief Program to implement stack data structure using C-Programming
 * @version 0.1
 * @date 2021-08-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define stack_size 10

int stack[stack_size];
int top = -1;

bool isEmpty()
{
    if (top == -1)
    {
        return true;
    }
    return false;
}

bool isFull()
{
    if (top == stack_size)
        return true;
    return false;
}

int peek()
{
    if (!isEmpty())
        return stack[top];
    return -1;
}

int push(int num)
{
    if (top == stack_size)
    {
        return -1;
    }
    else
    {
        top++;
        stack[top] = num;
        return 0;
    }
}

int pop()
{
    if (top == -1)
    {
        return -1; // stack is empty
    }
    else
    {
        static int data;
        data = stack[top];
        top--;
        return data;
    }
}

int main()
{
    int ret;

    ret = push(100);
    printf("push %s\n", ret == 0 ? "successful" : "failed");
    ret = push(120);
    printf("push %s\n", ret == 0 ? "successful" : "failed");
    ret = push(60);
    printf("push %s\n", ret == 0 ? "successful" : "failed");
    ret = push(30);
    printf("push %s\n", ret == 0 ? "successful" : "failed");
    ret = push(10);
    printf("push %s\n", ret == 0 ? "successful" : "failed");

    int data = peek();
    printf("top = %d, peek data=%d\n\n", top, data); // top = 4

    bool res;
    res = isFull();
    printf("isFull %s\n", res ? "true" : "false");

    res = isEmpty();
    printf("isEmpty %s\n", res ? "true" : "false");

    ret = push(0);
    printf("push %s\n", ret == 0 ? "successful" : "failed");
    ret = push(70);
    printf("push %s\n", ret == 0 ? "successful" : "failed");

    printf("\n");

    data = peek();
    printf("peek data=%d\n", data);

    ret = push(11);
    printf("push %s\n", ret == 0 ? "successful" : "failed");
    ret = push(19);
    printf("push %s\n", ret == 0 ? "successful" : "failed");
    ret = push(16);
    printf("push %s\n", ret == 0 ? "successful" : "failed");
    ret = push(13);
    printf("push %s\n", ret == 0 ? "successful" : "failed");
    
    ret = push(-1);
    printf("push %s\n", ret == 0 ? "successful" : "failed"); // failed

    printf("\n");

    res = isFull();
    printf("isFull %s\n", res ? "true" : "false"); // true

    res = isEmpty();
    printf("isEmpty %s\n", res ? "true" : "false");

    printf("\n");

    data = pop();
    printf("popped %d\n", data);  // 13

    res = isFull();
    printf("isFull %s\n", res ? "true" : "false");

    res = isEmpty();
    printf("isEmpty %s\n", res ? "true" : "false");

    printf("\ntop = %d\n", top);

    printf("\n");
    while (top != -1){
        data = pop();
        printf("popped %d\n", data);
    }

    printf("\n");
    res = isEmpty();
    printf("isEmpty %s\n", res ? "true" : "false");

    return 0;
}