#include <stdio.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("source.txt", "r");
    fp2 = fopen("destination.txt", "w");

    if (fp1 == NULL)
    {
        printf("Unable to open source file.");
        return 1;
    }

    if (fp2 == NULL)
    {
        printf("Unable to open destination file.");
        fclose(fp1);
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF)
    {
        fputc(ch, fp2);
    }

    printf("File copied successfully!");

    fclose(fp1);
    fclose(fp2);

    return 0;
}

