// Count the number of lines in a text file

#include <stdio.h>

int main()
{
    FILE *file;
    char ch;
    int lineCount = 0;

    file = fopen("student.txt", "r");

    if (file == NULL)
    {
        printf("Unable to open the file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF)
    {
        if (ch == '\n')
        {
            lineCount++;
        }
    }

    // If the file is not empty, increment line count for the last line
    if (lineCount > 0)
    {
        lineCount++;
    }

    printf("Number of lines in the file: %d\n", lineCount);

    fclose(file);
    return 0;
}
