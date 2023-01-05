#include<stdio.h>

void push();
void pop();
void show();
#define size 4
int top = -1;


int collection[size];
int main()


{
    int choice;
    while (1) {
        printf("********************my stack**************\n");
        printf("1. push \n 2. pop \n 3.show \n 4.exit\n");
        printf("please enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            show();
            break;
        case 4:
            return 0;
            default: printf( "invalid choice");
        }
    }
    return 0;
}

void push()
{
	if (top + 1 >= size)
	{	printf("stack is full\n");
	} else
	{
		int value;
		printf("enter a new value----\n");
		scanf("%d", &value);
		top = top + 1;
		collection[top] = value;

	}
	return;


}
void pop(){
if (top <= -1)

{
	printf("stack is empty\n");

} else
{

	printf("poped value is--% d", collection[top]);
	top--;

}
return;
}
void show(){
	for(int i=top;i>=0;--i)
	{
		printf("%d",collection[i]);
	}
}

