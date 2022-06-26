#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};
struct employee
{
    char firstName[50];
    int id;
    int age;
    float salary;
    struct date birthday;
};
int main()
{
    float avgsalary = 0.0;
    int emp;
    printf("Enter the no. of employee:");
    scanf("%d", &emp);
    struct employee s[emp];
    int i;
    printf("Enter information of employee:\n");

    // storing information
    for (i = 0; i < emp; ++i)
    {
        s[i].id = i + 1;
        printf("\nFor id number %d,\n", s[i].id);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter salary: ");-
        scanf("%f", &s[i].salary);
        printf("Enter birthday date:");
        scanf("%d", &s[i].birthday.day);
        printf("Enter birthday month: ");
        scanf("%d", &s[i].birthday.month);
        printf("Enter birthday year:");
        scanf("%d", &s[i].birthday.year);
        printf("Enter the age:");
        scanf("%d", &s[i].age);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < emp; ++i)
    {
        printf("\nid number: %d\n", s[i].id);
        printf("\nFirst name: ");
        puts(s[i].firstName);
        printf("salary: %.1f", s[i].salary);
        printf("\n");
        printf("Date of Birth: %d : %d : %d", s[i].birthday.day, s[i].birthday.month, s[i].birthday.year);
        printf("\n");
        printf("Age :%d",s[i].age);
        printf("\n");
    }
    float sum;
    for (i = 0; i < emp; i++)
    {
        sum = sum + s[i].salary;// Adding the salary of the employee
    }

    avgsalary = sum/emp;// Calculating average
    printf("%.2f\n",avgsalary);
    return 0;
}