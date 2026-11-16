
#include <stdio.h>

union Data
{
    int i;
    float f;
    char ch;
};

int main()
{
    union Data d;

    printf("Size of union = %zu bytes\n", sizeof(d)); // print the size of the union

    d.i = 10; 
    printf("\nInteger value = %d", d.i);

    d.f = 20.5;
    printf("\nFloat value = %.2f", d.f);

    d.ch = 'A';
    printf("\nCharacter value = %c", d.ch);

    printf("\n\nMemory addresses:");
    printf("\nAddress of integer = %p", (void *)&d.i);
    printf("\nAddress of float = %p", (void *)&d.f);
    printf("\nAddress of character = %p", (void *)&d.ch);

    return 0;
}
