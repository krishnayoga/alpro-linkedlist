// Nurian Satya Wardana
// 1506717071

#include <stdio.h>
#include <stdlib.h>

typedef struct Simpul {
	int data;
	struct Simpul *next;
} node;


void push(node **depan, int data) {
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	if (*depan != NULL) temp->next = *depan; 
	else temp->next = NULL;
	*depan = temp;
}


void appendByRian(node **depan, int data) {
	node *simpul = *depan;
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;
    
    if (*depan != NULL) {
    	while (simpul->next != NULL) simpul = simpul->next;
    	simpul->next = temp; 	
	}
	
	else *depan = temp;   
}


void printNode(node *simpul) {
	int count = 0;
	
	while (simpul != NULL) {
		count++;
		printf("Simpul %d -> %d\n", count, simpul->data);
		simpul = simpul->next;
	}
}

int main() {
	// deklarasi "depan" yang nantinya berisi pointer
	// menuju node
	node *depan;
	
	// Saat program baru berjalan, depan dan belakang belum
	// menunjuk ke memori mana-mana
	depan = NULL;
	
	// Menambah nilai baru pada sisi depan linked list
	push(&depan, 20);
	append(&depan, 11);
	
	printNode(depan);
}
