#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct node* next;
};

//typedef struct node *lptr;

struct Node *head=NULL;
void insert(int x);
void display();
void delete_even();
void reverse();


void insert(int x)
{
	struct Node *new,*ptr;
	new=(struct Node*)malloc(sizeof(struct Node));
	
	if(new==NULL)
	{
		printf("No space is available!!!");
	}
	
	new->data=x;
	new->next=NULL;
	
	if(head==NULL)
	{
		head=new;
	}
	else
	{	
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=new;
	//	printf("Element inserted.");
	}
}
void delete_even()
{
	struct Node *temp1,*temp2;
	if(head==NULL)
	{
		printf("There is no elements to delete!!!!");
	}
	else
	{
		temp1=head;
		temp2=head->next;
		while(temp1 != NULL && temp2 != NULL)
		{
			temp1->next = temp2->next;
			free(temp2);
			temp1=temp1->next;
			if(temp2 != NULL)
				temp2=temp1->next;
		}
	}
}

void reverse()
{
	struct Node *current = head,*prev = NULL,*next = NULL;
	while(current != NULL)
	{
		// Store next
        next = current->next;
 
        // Reverse current node's pointer
        current->next = prev;
 
        // Move pointers one position ahead.
        prev = current;
        current = next;
	}
	head = prev;
	
}

void display()
{
	struct Node *temp;
	if(head==NULL)
	{
		printf("No elements in the list");
	}
	else
	{
		temp = head;
		while(temp != NULL)
		{
			printf("%d ->",temp->data);
			temp=temp->next;
		}
		printf("%d",temp->data);
	}
}


int main()
{
	insert(10);
	insert(20);
	insert(30);
	insert(40);
	insert(50);
	//display();
	
//	delete_even();
	reverse();
	display();
	return 0;
}
