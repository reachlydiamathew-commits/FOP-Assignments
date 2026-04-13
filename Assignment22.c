#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice, length, result, i, j;

     while (1) {
       
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {

            case 1:
            printf("Enter a string: ");
            scanf("%s", str1);
            length = strlen(str1);
            printf("Length of the string: %d\n", length);
            break;

            case 2:
            printf("Enter a string: ");
            scanf("%s", str1);
            strcpy(temp, str1);
            printf("Copied string: %s\n", temp);
            break;

            case 3:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);

            strcat(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;

            case 4:
            printf("Enter first string: ");
            scanf("%s", str1);
            printf("Enter second string: ");
            scanf("%s", str2);

            result = strcmp(str1, str2);
            if (result==0) 
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

            case 5:
            printf("Enter a string: ");
            scanf("%s", str1);
                j = strlen(str1) - 1;
                for (i = 0; str1[i] != '\0'; i++) {
                    temp[i] = str1[j--];
                }
                temp[i] = '\0';

                printf("Reversed string: %s\n", temp);
                break;

            case 6:
              printf("Exiting program...\n");
              return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
