#include <stdio.h>

struct student {
    int roll;
    char name[50];
    int total;
};

int main() {
    struct student s[10];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks in 3 subjects: ");
        scanf("%d %d %d", &s[i].total);
    }

    printf("\nStudent Result:\n");
    for(i = 0; i < n; i++) {
        printf("\nRoll No: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Total Marks: %d\n", s[i].total);
    }
    return 0;
}