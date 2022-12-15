#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[20];
    char branch[20];
    char address[20];
    int roll_no;
} s[100]; // array of struct 

int comp_roll = 1000;
int mech_roll = 1100;
int etc_roll = 1200;

int roll_create(char a[]) // assigns roll number based on branch
{
    if(!strcmp(a, "comp"))
    {
     comp_roll++;
    return comp_roll;
    }
    else if(!strcmp(a, "mech"))
    {
     return mech_roll;
     mech_roll++;
    }
   else if(!strcmp(a, "etc"))
    {
    return etc_roll;
    etc_roll++;
    }
    else {
    printf("Invalid Input!");
    }

}
int main()
{
    printf("-----------Student Management System-----------\n\n");
    int choice=0, n=0;
    while(n>=0)
    {
    printf("-----------------------------------------------\n");
    printf("1:Entering details\n2:Searching student details\n3:Display student details\n4:Update Details\n5:Exit");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1: n = enter_details(s, n);
         break;
    case 2:
            search(s, n);
        break;
    case 3:
            display(s, n);
        break;
    case 4:
            update_details(s, n);
        break;
    case 5: exit(0);
        break;

    default: printf("Invalid!");

    }

    }
    return 0;
}
int enter_details(struct student s[], int n)
{
    int size;
    printf("Enter number of students: ");
    scanf("%d", &size);
    while(size--)
    {
    printf("Enter details: \n");
    printf("----------------------\n");
    printf("Enter name of student: \n");
    fflush(stdin);
    gets(s[n].name);
    printf("Enter address of student: \n");
    fflush(stdin);
    gets(s[n].address);
    printf("Enter branch of student: \n");
    printf("Example: comp, mech, etc\n");
    scanf("%s", s[n].branch);
    s[n].roll_no = roll_create(s[n].branch);
    n++;
    }
    return n;

}
void display(struct student s[], int n)
{
int i=0;

if(n==0)
{
printf("No student details entered!");
}
else {
    for(i=0; i<n; i++)
       {
        printf("Name:- %s\n", s[i].name);
        printf("Address:- %s\n", s[i].address);
        printf("Branch:- %s\n", s[i].branch);
        printf("Roll Number:- %d\n", s[i].roll_no);
        }
      }
    }
void search(struct student s[], int n)
{
int i=0;
int rollno;
    if(n==0)
    { printf("No student details entered!\n");
    }
    else {
    printf("Enter roll number to search for a student: ");
    scanf("%d", &rollno);
    for(i=0; i<n; i++)
        {
            if(rollno == s[i].roll_no)
            {
            printf("Name:- %s\n", s[i].name);
            printf("Address:- %s\n", s[i].address);
            printf("Branch:- %s\n", s[i].branch);
            printf("Roll Number:- %d\n", s[i].roll_no);
            }
           }
          }
         }

void update_details(struct student s[], int n){
int x, i, o;
printf("Enter roll number to update details: ");
scanf("%d", &x);

for(i=0; i<=n-1; i++)
{
    if(s[i].roll_no == x)
    {
        printf("1:Update Name\n2:Update Address\n3:Update branch\n");
        scanf("%d", &o);
        switch(o)
        {
        case 1: printf("Enter name to update to: \n");
                fflush(stdin);
                gets(s[i].name);
        break;
        case 2: printf("Enter address to update to: \n");
                fflush(stdin);
                gets(s[i].address);
        break;
        case 3: printf("Enter the new branch: \n");
                scanf("%s", s[i].branch);
        break;

        default: printf("Invalid!");
        }
      }
    }
  }
