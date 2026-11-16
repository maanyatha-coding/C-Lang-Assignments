// string operations using in-built functions

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[200], reverse[100];
    int result, length, i;

    // 1. Copy one string into another
    printf("Enter the first string: ");
    scanf("%s", str1);
    strcpy(str2, str1);
    printf("Copied string: %s\n", str2);

    // 2. Reverse the string
    strcpy(reverse, str1);
    length = strlen(reverse);
    for (i = 0; i < length / 2; i++)
    {
        char temp;
        temp = reverse[i];
        reverse[i] = reverse[length - 1 - i];
        reverse[length - 1 - i] = temp;
    }
    printf("Reversed string: %s\n", reverse);

    // 3. Find the length of the string
    printf("Length of the string: %lu\n", strlen(str1));

    // 4. Compare two strings
    printf("Enter the second string: ");
    scanf("%s", str2);
    result = strcmp(str1, str2);
    if(result == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // 5. Concatenate one string to another
    printf("Enter the third string: ");
    scanf("%s", str3);
    printf("Concatenated string: %s\n", strcat(str3, str1));

    return 0;
}
