#include "Stack.h"
#include <stdio.h>

/* 讓stack知道它的top在哪裡還有它自己多大 */
void create( stack_t *newStack ,int stackSize )
{
    newStack->top = -1;
    newStack->size = stackSize;
}


/* 讓stack知道它滿了沒 */ 
bool isFull( stack_t *sourceStack )
{
    if(sourceStack->top==sourceStack->size-1)
        return true;
    else
        return false;
}


/* 讓stack知道它是不是空的 */ 
bool isEmpty( stack_t *sourceStack  )
{
    if(sourceStack->top==-1)
        return true;
    else
        return false;
}


/* 把元素置於stack頂端 */ 
void push( stack_t *sourceStack , element_t *sourceElement )
{
	if(isFull(sourceStack)==true)
	//滿的時候無法置入 
	{
		printf("The stack is full.");
	}
	else
	{
		scanf("%d", &sourceElement->key);
        sourceStack->container[++(sourceStack->top)].key=(sourceElement->key);
	}
    
}


/* 把最上面的元素回傳 */ 
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


/* 把最上面的元素回傳(在main裡面印出來) */ 
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

