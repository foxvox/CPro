﻿#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

#define STACK_SIZE 100 

typedef int element; 

element stack[STACK_SIZE]; 
int top = -1; 

int isEmpty()
{
	if (top == -1)
		return 1;
	else
		return 0; 
}

int isFull() 
{
	if (top == STACK_SIZE - 1)
		return 1;
	else
		return 0; 
}

void push(element item)
{
	if (isFull())
	{
		printf("\n\n Stack is Full! \n");
		return;
	}
	else
		stack[++top] = item; 
}

element pop()
{
	if (isEmpty())
	{
		printf("\n\n Stack is Empty! \n");
		return 0;
	}
	else return stack[top--]; 
} 

element peek()
{
	if (isEmpty())
	{
		printf("\n\n Stack is Empty! ");
		exit(1);
	}
	else
		return stack[top]; 
}

void printStack()
{
	int i; 
	printf("\n STACK[ "); 
	for (i = 0; i <= top; i++)
		printf("%d ", stack[i]); 
	printf("]"); 
}

void main()
{
	element item; 
	printf("\n ** 순차 스택 연산 ** \n"); 
	printStack(); 
	push(1); printStack(); 
	push(2); printStack();
	push(3); printStack(); 

	item = peek(); printStack(); 
	printf("\t peek => %d", item); 

	item = pop(); 
	printStack(); 
	printf("\t pop => %d", item); 

	item = pop(); 
	printStack(); 
	printf("\t pop => %d", item); 

	item = pop(); 
	printStack(); 
	printf("\t pop => %d", item); 

	getchar();
}