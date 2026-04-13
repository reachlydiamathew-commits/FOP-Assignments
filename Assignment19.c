#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[30], designation[30], gender[10], doj[15];
    float salary;
};

int main() {
    struct EMPLOYEE e[50];
    int n, i, male = 0, female = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Designation: ");
        scanf(" %[^\n]", e[i].designation);

        printf("Gender: ");
        scanf("%s", e[i].gender);

        printf("Date of Joining: ");
        scanf("%s", e[i].doj);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    printf("\nTotal employees: %d\n", n);


    for(i = 0; i < n; i++) {
        if(strcmp(e[i].gender, "Male") == 0)
            male++;
        else
            female++;
    }
    printf("Male: %d\nFemale: %d\n", male, female);

   
    printf("\nSalary > 10000:\n");
    for(i = 0; i < n; i++) {
        if(e[i].salary > 10000)
            printf("%s\n", e[i].name);
    }

    
    printf("\nAsst Manager:\n");
    for(i = 0; i < n; i++) {
        if(strcmp(e[i].designation, "Asst Manager") == 0)
            printf("%s\n", e[i].name);
    }

    return 0;
}