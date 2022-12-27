#include <stdio.h>

struct book
{
    int id;
    char author[150];
    char name[150];
    int price;
}b;

int main() {
    printf("Enter book name, id, author and price\n");
    scanf("%s%d%s%d", b.name, &b.id, b.author, &b.price);
    printf("Book Details\n");
    printf("Name: %s\nId: %d\nAuthor: %s\nPrice: %d",
            b.name, b.id, b.author, b.price);
    return 0;
}
