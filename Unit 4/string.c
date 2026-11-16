// Length and reversing of a string without using built-in fucntions
#include <stdio.h>

int main()
{
    char str[100];
    int length = 0;
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate length of the string
    while(str[length] != '\0') 
    {
        length++;
    }

    printf("Length of the string: %d\n", length);

    // Reverse the string
    for(i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}
