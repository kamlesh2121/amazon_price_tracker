#include <stdio.h>
int stack[5],top=-1;
void push();
void pop();
void show();
void main()
{
	int ch;
	printf("\n1 push opretion");
	printf("\n2 pop opretion");
	printf("\n3 show opretion");
	printf("\n4 exit opretion");
	while(1)
	{
		printf("\nEnter the choice");
		scanf("%d",&ch);
		switch(ch)
		{
		    case 1: push();
			break;
			case 2: pop();
			 break;
				case 3: show();
			break;
				case 4: exit(0);
			break;
				default:
					printf("wrong choice \n");
	    }
	}
}
void push()
{
	int item;
	if(top==5-1)
	{
		printf("stack is overflow");
	}
	else
	{
		printf("push element in stack  ");
		scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("stack is empty ");
	}
	else
	{
		printf("element deleted%d",stack[top]);
		top=top-1; //top++
		
	}
}
void show()
{
	int i;
	if(top>0)
	{
		printf("\nstack element");
		for(i=0;i<=top;i++)
		{
			printf(" %d",stack[i]);
		}
	
	}
	else
	{
		printf("stack is empty");
	}
}
