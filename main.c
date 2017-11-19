#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "push.h"
#include "append.h"
#include "insert.h"

void display();

struct node {
	int data;
  	struct node *next;
}*start=NULL;

int main(){
	int pilih;
	struct node *temp = start; //Move to First Node
	
	printf("Membuat dan Modifikasi Linked List\n");
	printf("==================================\n");

	char ch;
 	do{
		struct node *new_node,*current;
	
	  	new_node=(struct node *)malloc(sizeof(struct node));
	
	  	printf("\nMasukkan data : ");
	  	scanf("%d",&new_node->data);
	  	new_node->next=NULL;
	
	  	if(start==NULL){
	  		start=new_node;
	  		current=new_node;
	  	}
	  	else{
	  		current->next=new_node;
	  		current=new_node;
	  	}
	
	 	printf("\nTambah lagi? (y/n) : ");
	 	ch=getche();
	}while(ch!='n');
 
 	display();
 	printf("Menu Pilihan\n"
	 	   "1. Push\n"
		   "2. Append\n"
		   "3. Insert\n"
		   "4. Delete\n"
		   "Pilihan Anda (1/2/3/4): ");
	scanf("%d",&pilih);
	switch(pilih){
		case 1:
			push();
		case 2:
			append();
		case 3:
			insert();
		case 4:
			deleteLL();
		default:
			printf("error");
	}
 	display();
}

void display(){
	struct node *new_node;
 	printf("The Linked List : n");
 	new_node=start;
 	while(new_node!=NULL){
   		printf("%d--->",new_node->data);
   		new_node=new_node->next;
   }
  	printf("NULL");
}
