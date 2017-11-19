// Nurian Satya Wardana
// 1506717071

void push();
void printNode();
void appendAlt();


void push(struct node **depan, int data) {
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	if (*depan != NULL) temp->next = *depan; 
	else temp->next = NULL;
	*depan = temp;
}


void appendAlt(struct node **depan, int data) {
	struct node *simpul = *depan;
	struct node *temp = (struct node*)malloc(sizeof(struct node));
	temp->data = data;
	temp->next = NULL;
    
    if (*depan != NULL) {
    	while (simpul->next != NULL) simpul = simpul->next;
    	simpul->next = temp; 	
	}
	
	else *depan = temp;   
}


void printNode(struct node *simpul) {
	int count = 0;
	
	while (simpul != NULL) {
		count++;
		printf("Simpul %d -> %d\n", count, simpul->data);
		simpul = simpul->next;
	}
}
