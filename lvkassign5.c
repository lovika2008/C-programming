#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[200], str2[200], result[400];
    int choice, i, len;

    do
    {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Find a Character\n");
        printf("9. Find a Substring\n");
        printf("10. Check Palindrome\n");
        printf("11. Count Vowels and Consonants\n");
        printf("12. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Length = %lu\n", strlen(str1));
                break;

            case 2:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                strcpy(str2, str1);
                printf("Copied String = %s\n", str2);
                break;

            case 3:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                strcpy(result, str1);
                strcat(result, str2);

                printf("Concatenated String = %s\n", result);
                break;

            case 4:
                printf("Enter first string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter second string: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                if(strcmp(str1, str2) == 0)
                    printf("Strings are Equal\n");
                else
                    printf("Strings are Not Equal\n");
                break;

            case 5:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                len = strlen(str1);

                for(i = 0; i < len; i++)
                    result[i] = str1[len - i - 1];

                result[len] = '\0';

                printf("Reversed String = %s\n", result);
                break;

            case 6:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);

                for(i = 0; str1[i] != '\0'; i++)
                    str1[i] = toupper((unsigned char)str1[i]);

                printf("Uppercase = %s", str1);
                break;

            case 7:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);

                for(i = 0; str1[i] != '\0'; i++)
                    str1[i] = tolower((unsigned char)str1[i]);

                printf("Lowercase = %s", str1);
                break;

            case 8:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter character to search: ");
                scanf("%c", &str2[0]);
                getchar();

                if(strchr(str1, str2[0]) != NULL)
                    printf("Character found!\n");
                else
                    printf("Character not found!\n");
                break;

            case 9:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                printf("Enter substring: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                if(strstr(str1, str2) != NULL)
                    printf("Substring found!\n");
                else
                    printf("Substring not found!\n");
                break;

            case 10:
                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';

                len = strlen(str1);

                for(i = 0; i < len / 2; i++)
                {
                    if(str1[i] != str1[len - i - 1])
                        break;
                }

                if(i == len / 2)
                    printf("Palindrome String\n");
                else
                    printf("Not a Palindrome String\n");
                break;

            case 11:
            {
                int vowels = 0, consonants = 0;

                printf("Enter a string: ");
                fgets(str1, sizeof(str1), stdin);

                for(i = 0; str1[i] != '\0'; i++)
                {
                    char ch = tolower((unsigned char)str1[i]);

                    if(ch >= 'a' && ch <= 'z')
                    {
                        if(ch == 'a' || ch == 'e' ||
                           ch == 'i' || ch == 'o' ||
                           ch == 'u')
                            vowels++;
                        else
                            consonants++;
                    }
                }

                printf("Vowels = %d\n", vowels);
                printf("Consonants = %d\n", consonants);
                break;
            }

            case 12:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice! Try Again.\n");
        }

    } while(choice != 12);

    return 0;
}

