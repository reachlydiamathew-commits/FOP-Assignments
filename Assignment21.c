#include <stdio.h>
int main() {
    FILE *fp1,*fp2;
    char ch;
    fp1 = fopen("source.txt", "r");
    fp2 = fopen("destination.txt","w");
    while ((ch = fgetc(fp1)) != EOF){
        fputs(ch, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("File copied successfully.");
    return 0;
}