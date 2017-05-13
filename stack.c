#include "Stack.h"
#include <stdio.h>

/* ��stack���D����top�b�����٦����ۤv�h�j */
void create( stack_t *newStack ,int stackSize )
{
    newStack->top = -1;
    newStack->size = stackSize;
}


/* ��stack���D�����F�S */ 
bool isFull( stack_t *sourceStack )
{
    if(sourceStack->top==sourceStack->size-1)
        return true;
    else
        return false;
}


/* ��stack���D���O���O�Ū� */ 
bool isEmpty( stack_t *sourceStack  )
{
    if(sourceStack->top==-1)
        return true;
    else
        return false;
}


/* �⤸���m��stack���� */ 
void push( stack_t *sourceStack , element_t *sourceElement )
{
	if(isFull(sourceStack)==true)
	//�����ɭԵL�k�m�J 
	{
		printf("The stack is full.");
	}
	else
	{
		scanf("%d", &sourceElement->key);
        sourceStack->container[++(sourceStack->top)].key=(sourceElement->key);
	}
    
}


/* ��̤W���������^�� */ 
element_t *pop( stack_t *sourceStack )
{
    if(isEmpty(sourceStack)!=true)
    {
        return &sourceStack->container[(sourceStack->top)--];
    }
    else
    {
        printf("The Stack is Empty!");
        return NULL;
    }
}


/* ��̤W���������^��(�bmain�̭��L�X��) */ 
element_t *popall( stack_t *sourceStack )
{
    if(isEmpty(sourceStack)!=true)
    {
        return &sourceStack->container[(sourceStack->top)--];
    }
    else
    {
        return NULL;
    }
}

