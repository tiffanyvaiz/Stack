#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

int main()
{
    int size;
    stack_t *stack;
    stack=(stack_t*)malloc(sizeof(stack_t));

    element_t *element;
    element=(element_t*)malloc(sizeof(element_t));

    printf("Enter size of the stack:");
    scanf("%d",&size);

    create(stack,size);

    int option;
    printf("�п�J�ﶵ(-1����)�G\n(1)push�Ȧܰ��|\n(2)pop���ݭ�\n(3)pop all\n$c> ");
	
    while(scanf("%d",&option)!=EOF)
    {
        switch(option)
        {
        case 1:
            push(stack,element);
            break;
        case 2:
            element=pop(stack);
            printf("%d",element->key);
            break;
        case 3:
            while(element=popall(stack))
            {
               printf("%d\n",element->key);
            }
            printf("The Stack is Empty!");
            break;
        }
        
        printf("�п�J�ﶵ(-1����)�G\n(1)push�Ȧܰ��|\n(2)pop���ݭ�\n(3)pop all\n$c> ");
    }

    return 0;
}

