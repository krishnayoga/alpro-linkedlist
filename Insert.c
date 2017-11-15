#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

void display();
void insert_mid();

struct node {
  int data;
  struct node *next;
}*start=NULL;

int main(){
	struct node *temp = start; //Move to First Node

	char ch;
 do
 {
  struct node *new_node,*current;

  new_node=(struct node *)malloc(sizeof(struct node));

  printf("\nEnter the data : ");
  scanf("%d",&new_node->data);
  new_node->next=NULL;

  if(start==NULL)
  {
  start=new_node;
  current=new_node;
  }
  else
  {
  current->next=new_node;
  current=new_node;
  }

 printf("nDo you want to creat another : ");
 ch=getche();
 }while(ch!='n');
 
 display();
 insert_mid();
 display();
}

void display()
{
struct node *new_node;
 printf("The Linked List : n");
 new_node=start;
 while(new_node!=NULL)
   {
   printf("%d--->",new_node->data);
   new_node=new_node->next;
   }
  printf("NULL");
}

void insert_mid()
{
    int pos,i;
    struct node *new_node,*current,*temp,*temp1;

    new_node=(struct node *)malloc(sizeof(struct node));

    printf("nEnter the data : ");
    scanf("%d",&new_node->data);

    new_node->next=NULL;
    st :
    printf("nEnter the position : ");
    scanf("%d",&pos);

    if(start==NULL)
       {
       start=new_node;
       current=new_node;
       }
    else
       {
       temp = start;
             for(i=1;i< pos-1;i++)
             {
             temp = temp->next;
             }
       temp1=temp->next;
       temp->next = new_node;
       new_node->next=temp1;
       }
}

