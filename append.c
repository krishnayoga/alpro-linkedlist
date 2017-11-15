#include <stdio.h>
#include <stdlib.h>
#include "append.h"
struct tes{
	int a;
	struct tes *next;
};
void append(struct tes** head_ref, int new_data)
{
    /* 1. allocate node */
    struct tes* new_node = (struct tes*) malloc(sizeof(struct tes));
 
    struct tes *last = *head_ref;  /* used in step 5*/
 
    /* 2. put in the data  */
    new_node->a  = new_data;
 
    /* 3. This new node is going to be the last node, so make next of
          it as NULL*/
    new_node->next = NULL;
 
    /* 4. If the Linked List is empty, then make the new node as head */
    if (*head_ref == NULL)
    {
       *head_ref = new_node;
       return;
    }
 
    /* 5. Else traverse till the last node */
    while (last->next != NULL)
        last = last->next;
 
    /* 6. Change the next of last node */
    last->next = new_node;
    return;
}
void printList(struct tes *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->a);
     node = node->next;
  }
}
int main(){
	struct tes* head = NULL;
	int n,pilih;
	printf("\nmasukkan angka : ");
	scanf("%d", &n);
	append(&head, n);
	printf("\nMasukkan lagi?\n1. Ya\n2. Tidak\nPilihan : ");
	scanf("%d", &pilih);
	if(pilih==1){
		main();
	}
	printList(head);
	return 0;
}
