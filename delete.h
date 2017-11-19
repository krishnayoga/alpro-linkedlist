/* Memberikan referensi simpul pada awal linked list
dan memberikan isi simpul pertama yang ditemukan
 yang ingin dihilangkan (key) */
void delete(struct node **head_ref, int key)
{
    // Store head node
    struct node* temp = *head_ref, *prev;
 
    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;   // Changed head
        free(temp);               // free old head
        return;
    }
 
    /*Mencari data yang ingin dihapuskan
    Sembari mencari simpul yang berisikan data, 
	memberi jejak pada tiap simpul yang akan dipindahkan referensinya*/
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
 
    // Apabila yang ingin dihapus tidak ada
    if (temp == NULL) return;
 
    // Memindahkan referensi simpul menuju ke simpul berikutnya
    prev->next = temp->next;
 
    free(temp);  // Melepas memori
}
