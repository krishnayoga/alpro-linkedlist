// Akmal Hugo Prasetyo

#include <stdio.h>
#include <stdlib.h>

// Mendeklarasikan struct Simpul yang berisi data dan pointer.
// Sekaligus mendeklarasikan S sebagai struct berjenis Simpul.
typedef struct Simpul {
	int data;
	struct simpul *simpulSelanjutnya;
} S;

void del()
{
struct Simpul *temp;

node *temp = (node*)malloc(sizeof(node));
+	temp->data = data;

free(temp);
printf("nThe Element deleted Successfully ");
}

int main() {
	//char terminate = 'n';
	
	// Mendeklarasikan pointer berjenis struct S dengan nama head, simpul1, simpul2, simpul3.
	S *head, *simpul1, *simpul2, *simpul3;
	
	// Mengalokasikan memori untuk head, simpul1, simpul2.
	// Sekarang head, simpul1, simpul2, simpul3 berisi pointer yang menunjuk alamat
	// dimana struct tersebut berada.
	head = (S *)malloc(sizeof(S));
	simpul1 = (S *)malloc(sizeof(S));
	simpul2 = (S *)malloc(sizeof(S));
	simpul3 = (S *)malloc(sizeof(S));
	
	// Mengisi data pada head dan menyambungkannya dengan simpul1.
	head->data = 1;
	head->simpulSelanjutnya = simpul1;
	
	// Mengisi data pada simpul1 dan menyambungkannya dengan simpul2.
	simpul1->data = 2;
	simpul1->simpulSelanjutnya = simpul2;
	
	// Mengisi data pada simpul2 dan menyambungkannya dengan simpul3.
	simpul2->data = 3;
	simpul2->simpulSelanjutnya = simpul3;
	
	// Mengisi data pada simpul3 dan tidak mengisi simpul selanjutnya 
	// sebagai NULL sebagai tanda bahwa list berakhir.
	simpul3->data = 4;
	simpul3->simpulSelanjutnya = NULL;
	
	// Mendeklarasikan test sebagai alamat yang sama dimana struct head berada.
	S *test = head;
	
	while(test != NULL) {
    	printf("Isi data: %d\n", test->data);
    	test = test->simpulSelanjutnya;
	}
	
	void del(simpul1);
}
