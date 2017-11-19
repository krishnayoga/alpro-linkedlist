/*
Ida Bagus Krishna Yoga Utama - 1506716983
Nurian Satya Wardana - 1506717071
Fadel Erian Saffiq - 1506717235
Akmal Hugo Prasetyo - 1506746973
*/

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


void insert();
void push();
void display();
void append();
void deleteLL();

struct node {
	int data;
  	struct node *next;
}*start=NULL;

int main(){
	int pilih;
	char pil;
	struct node *temp = start; //Move to First Node
	
	printf("Membuat dan Modifikasi Linked List\n");
	printf("==================================\n");

	char ch;
 	do{
		struct node *new_node,*current;
	
	  	new_node=(struct node *)malloc(sizeof(struct node));
	
	  	printf("Masukkan data : ");
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
	
	 	printf("Tambah lagi? (y/n) : ");
	 	scanf(" %c",&pil);
	}while(pil == 'y');
 
 	display();
 	
 	printf("\n\nMenu Pilihan\n"
	 	   "1. Push\n"
		   "2. Append\n"
		   "3. Insert\n"
		   "4. Delete\n"
		   "Pilihan Anda (1/2/3/4): ");
	scanf("%d",&pilih);
	switch(pilih){
		case 1:
			push();
			break;
		case 2:
			append();
			break;
		case 3:
			insert();
			break;
		case 4:
			deleteLL();
		break;
		default:
			printf("\nerror");
			break;
	}
	
 	display();
}

void display(){
	struct node *new_node;
 	printf("Isi linked list : ");
 	new_node=start;
 	while(new_node!=NULL){
   		printf("%d-->",new_node->data);
   		new_node=new_node->next;
   	}
  	printf("NULL");
}

void push(){
	struct node *new_node,*current;

	new_node=(struct node *)malloc(sizeof(struct node));

 	if(new_node == NULL){
 		printf("\nError");
	 }
    
	printf("\nMasukkan data : ");
 	scanf("%d",&new_node->data);
 	new_node->next=NULL;

   	if(start==NULL){
   		start=new_node;
   		current=new_node;
	}
   	else{
   		new_node->next=start;
   		start=new_node;
	}
	
}

void insert(){
    int pos,i;
    struct node *new_node,*current,*temp,*temp1;

    new_node=(struct node *)malloc(sizeof(struct node));

    printf("\nMasukkan data : ");
    scanf("%d",&new_node->data);

    new_node->next=NULL;
    st :
    printf("\nMasukkan posisi data : ");
    scanf("%d",&pos);

    if(start==NULL){
       	start=new_node;
       	current=new_node;
    }
    else{
       	temp = start;
        
	for(i=1;i< pos-1;i++){
    	temp = temp->next;
    	}
       
	temp1=temp->next;
       	temp->next = new_node;
       	new_node->next=temp1;
    }
}

void append(){
	struct node *new_node,*current, *temp;

	new_node=(struct node *)malloc(sizeof(struct node));

	if(new_node == NULL){
		printf("\nFailed to Allocate Memory");
	}
   
 	printf("\nEnter the data : ");
 	scanf("%d",&new_node->data);
 	new_node->next=NULL;

 	if(start==NULL){
   		start=new_node;
   		current=new_node;
	}
 	else{
   		temp = start;
     	
		while(temp->next!=NULL){
     		temp = temp->next;
     	}
   		
		temp->next = new_node;
 	}
}

void deleteLL(){
	struct node *temp;

	temp = start;
	start = start->next;

	free(temp);
	
	printf("nThe Element deleted Successfully ");
}
