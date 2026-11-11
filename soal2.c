// Nama         : Isnaya Zalfa Kamila 
// NIM          : 13224028 
// Deskripsi    : Program untuk memetakan bunga matahari mana yang ga kena matahari 
// Modul        : 02 - Dynamic Array tes

# include <stdio.h>
# include <stdbool.h>

// struct node untuk data dan pointer ke next 
typedef struct node {
int data;
struct node *next;
} node;

// untuk membuat node baru 
struct node *newnode (int x){
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node -> data = x;
    node -> next = NULL;
    return node; 
}
// fungsi umntuk mencari lokasi bunga 
void search_lokasi (struct node *head, int nilai, int i){
    struct node *current = head;
    while (current != NULL){
        if (current->data < current->data) // pokoknya ini mah, jika data yang seakrang < data yang sebelumnya 
    }
        if(head == NULL){
            printf("LIST MASIH KOSONG");
        else (head -> data == nilai){
            
    }
    }
}



int main (){
int kapasitas_array;
int tinggi_bunga,jumlahdata;
scanf("%d" ,&tinggi_bunga);
printf("coba %d",tinggi_bunga);

return 0;
}

// https://www.geeksforgeeks.org/dsa/search-an-element-in-a-linked-list-iterative-and-recursive/
// https://www.mycplus.com/computer-science/data-structures/linked-list-in-c/







