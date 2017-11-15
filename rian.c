// Nurian Satya Wardana
// 1506717071

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
} node;

void push(node **depan, int data) {
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	if (*depan != NULL) temp->next = *depan; 
	else temp->next = NULL;
	*depan = temp;
}

void insert(node **depan, node **belakang, int data) {
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	
	(*depan)->next = temp;
	temp->next = *belakang;
}

void append(node **belakang, int data) {
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;
	(*belakang)->next = temp;
	*belakang = temp;
}

void printNode(node *simpul) {
	while (simpul != NULL) {
		printf("%d\n", simpul->data);
		simpul = simpul->next;
	}
}

int main() {
	// deklarasi pointer depan dan belakang yang nantinya berisi
	// struct berjenis node
	node *depan, *belakang;
	
	// Saat program baru berjalan, depan dan belakang belum
	// menunjuk ke memori mana-mana
	depan = belakang = NULL;
	
	// Menambah nilai baru pada sisi depan linked list
	push(&depan, 20);
	append(&belakang, 11);
	insert(&depan, &belakang, 10);
	
	printNode(depan);
}
