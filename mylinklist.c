#include<stdio.h>
struct node {
	int data;
	struct node* next;
};

int main()
{
	printf("my linklist");
	struct node* head = NULL;
	struct node*  temp = (struct node*)(malloc(sizeof (struct node)));
	temp->data = 3;
	temp->next =  NULL;
	head = temp;
	struct node*  temp2 = (struct node*)(malloc(sizeof (struct node)));
	temp2->data = 4;
	temp2->next =  NULL;
	temp->next = temp2;
	return 0;
}
