/*
WRITE A FUNCTION TO READ INFORMATION OF BOOK AND DISPLAY THE INFORMATION.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    int pages;
    char book_name[100];
    char author[100];
};



int main() {

     struct Book books[3];


    strcpy(books[0].book_name, "Malgudi Days");
    strcpy(books[0].author, "R.K. Narayan");
    books[0].pages = 264;
    
    printf("Book Name: %s\n", books[0].book_name);
    printf("Author: %s\n", books[0].author);
    printf("Pages: %d\n", books[0].pages);


    strcpy(books[1].book_name, "Alchemist");
    
    strcpy(books[1].author, "Paulo Coelho");
    books[1].pages = 594;
    printf("Book Name: %s\n", books[1].book_name);
    printf("Author: %s\n", books[1].author);
    printf("Pages: %d\n", books[1].pages);
    return 0;


    strcpy(books[2].book_name, "Metamosphosis");
    
    strcpy(books[2].author, "Franz Kafka");
    books[2].pages = 86;
    
    printf("Book Name: %s\n", books[2].book_name);
    printf("Author: %s\n", books[2].author);
    printf("Pages: %d\n", books[2].pages);

    return 0;
}