#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, length = 0;
    char reverse[100];

    printf("Enter a string: ");
    scanf("%s",str1);


  
    while(str1[length] != '\0') {
        length++;
    }
    printf("Length of string = %d\n", length);



    for(i = 0; i < length; i++) {
        reverse[i] = str1[length - i - 1];
    }
    reverse[length] = '\0';
    printf("Reversed string = %s\n", reverse);


    
    printf("Enter another string: ");
    scanf("%s",str2);

    if(strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");


   
    if(strcmp(str1, reverse) == 0)
        printf("The string is a palindrome\n");
    else
        printf("The string is not a palindrome\n");

   

    if(strstr(str1, str2) != NULL)
        printf("Second string is a substring of first string\n");
    else
        printf("Second string is NOT a substring of first string\n");

    return 0;
}