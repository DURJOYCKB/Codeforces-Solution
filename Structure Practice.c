#include <stdio.h>

struct person {
    char name[50];
    int age;
    float salary;

};
    void display (struct person p)

    int main()
    {
        struct person person[4];
        int i;

        for(i=0;i<4;i++)
        {
            printf("Enter information for person %d\n",i+1);
            printf("Enter Name :");

            gets(person[i].name);
            printf("Enter Age :");
            scanf("%d",&person[i].age);
            printf("Enter Salary :");
            scanf("%f",&person[i].salary);


        }

         for(i=0;i<4;i++)
        {
            printf("Information of person %d\n",i+1);
            printf("Name :%s\n",person[i].name);
            printf("Age :%d\n",person[i].age);
            printf("Salary :%f\n",person[i].salary);
        }
        return 0;

    }
