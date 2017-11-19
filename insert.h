void insert(struct node* prev_node, int new_data) {
    if (prev_node == NULL) { 
       printf("\nProses gagal.\n");       
       return;  
    }  
          
    struct node* new_node =(struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
