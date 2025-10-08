#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int i = 0;

struct sinfo
{
    char fname[50];
    char lname[50];
    int roll;
    float cgpa;
    int cid[10];
} st[50];

void add_student()
{
    printf("Add the Students Details\n");
    printf("================================\n");
    printf("Enter the first name of student\n");
    scanf("%s", st[i].fname);
    printf("Enter the last name of student\n");
    scanf("%s", st[i].lname);
    printf("Enter the Roll Number\n");
    scanf("%d", &st[i].roll);
    printf("Enter the CGPA you obtained\n");
    scanf("%f", &st[i].cgpa);
    printf("Enter the course ID of each course\n");
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &st[i].cid[j]);
    }
    i = i + 1;
}

void find_rl()
{
    int x;
    printf("Enter the Roll Number of the Student\n");
    scanf("%d", &x);
    for (int j = 0; j < i; j++)
    {
        if (x == st[j].roll)
        {
            printf("The students details are\n");
            printf("The first name is: %s\n", st[j].fname);
            printf("The last name is: %s\n", st[j].lname);
            printf("The CPGA is %f\n", st[j].cgpa);
            printf("Enter the course ID of each course\n");
            for (int k = 0; k < 5; k++)
            {
                printf("The course ID are: %d\n", st[j].cid[k]);
            }
            break;
        }
    }
}

void find_fn()
{
    char a[50];
    printf("Enter the First name of the student\n");
    scanf("%s", a);
    int c = 0;

    for (int j = 0; j < i; j++)
    {
        if (!strcmp(st[j].fname, a))
        {
            printf("The student details are\n");
            printf("The first name is: %s\n", st[j].fname);
            printf("The last name is: %s\n", st[j].lname);
            printf("The roll number is: %d\n", st[j].roll);
            printf("The CPGA is: %f\n", st[j].cgpa);
            printf("Enter the course ID of each course\n");
            for (int k = 0; k < 5; k++)
            {
                printf("The course ID are: %d", st[j].cid[k]);
            }
            c = 1;
            break;
        }
    }

    if (c == 0)
    {
        printf("The first name not found\n");
    }
}

void find_c()
{
    int id;
    printf("Enter the course ID \n");
    scanf("%d", &id);
    int c = 0;

    for (int j = 0; j < i; j++)
    {
        for (int d = 0; d < 5; d++)
        {
            if (id == st[j].cid[d])
            {
                printf("The students details are\n");
                printf("The first name is: %s\n", st[j].fname);
                printf("The last name is: %s\n", st[j].lname);
                printf("The roll number is: %d\n", st[j].roll);
                printf("The CPGA is: %f\n", st[j].cgpa);
                c = 1;
                break;
            }
        }
    }

    if (c == 0)
    {
        printf("The course ID not found\n");
    }
}

void tot_S()
{
    printf("The total number of student is %d\n", i);
    printf("\n you can have a max of 50 students\n");
    printf("you can have %d more students\n", 50 - i);
}

void del_c()
{
    int a;
    printf("Enter the roll number which you want to delete\n");
    scanf("%d", &a);
    for (int j = 0; j < i; j++)
    {
        if (a == st[j].roll)
        {
            for (int k = j; k < i - 1; k++)
            {
                st[k] = st[k + 1];
            }
            i--;
            printf("The roll number is removed successfully\n");
            return;
        }
    }

    printf("Roll number not found\n");
}

void up_s()
{
    printf("Enter the roll number to update the entry :");
    int x;
    scanf("%d", &x);
    for (int j = 0; j < i; j++)
    {
        if (st[j].roll == x)
        {
            printf("1. first name\n 2. last name\n 3. roll no\n 4. CPGA\n 5. courses\n");
            int z;
            scanf("%d", &z);
            switch (z)
            {
            case 1:
                printf("Enter the new first name : \n");
                scanf("%s", st[j].fname);
                break;
            case 2:
                printf("Enter the new last name : \n");
                scanf("%s", st[j].lname);
                break;
            case 3:
                printf("Enter the new roll number : \n");
                scanf("%d", &st[j].roll);
                break;
            case 4:
                printf("Enter the new CPGA : \n");
                scanf("%f", &st[j].cgpa);
                break;
            case 5:
                printf("Enter the new courses : \n");
                for (int k = 0; k < 5; k++)
                {
                    scanf("%d", &st[j].cid[k]);
                }
                break;
            default:
                printf("Invalid option\n");
            }
            printf("UPDATED SUCCESSFULLY.\n");
            return;
        }
    }

    printf("Roll number not found\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("The task that you want to perform\n");
        printf("1. Add the student details\n");
        printf("2. Find the student details by roll number\n");
        printf("3. Find the student details by first name\n");
        printf("4. Find the student details by course id\n");
        printf("5. Find the total number of student\n");
        printf("6. Delete the student details by roll number\n");
        printf("7. Update the students details by roll number\n");
        printf("8. To Exit\n");
        printf("Enter your choice to find the task\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_student();
            break;
        case 2:
            find_rl();
            break;
        case 3:
            find_fn();
            break;
        case 4:
            find_c();
            break;
        case 5:
            tot_S();
            break;
        case 6:
            del_c();
            break;
        case 7:
            up_s();
            break;
        case 8:
            exit(0);
        default:
            printf("Invalid option\n");
        }
    }

    return 0;
}