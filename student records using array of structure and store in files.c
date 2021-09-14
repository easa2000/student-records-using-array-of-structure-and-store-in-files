// student records using array of structure and store in files
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    typedef struct student
    {
        int roll_no;
        char name[20];
        int marks;
    }STUDENT;

    STUDENT stud[5];
    int i,n;
    fp = fopen("student_details2.dat","w");
    if(fp == NULL)
    {
        printf("\n File opening error");
        exit(1);
    }

    printf("\n Enter the number of students you gonna enter: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n Enter the roll number: ");
        scanf("%d",&stud[i].roll_no);
        printf("\n Enter the name: ");
        scanf("%s",stud[i].name);
        printf("\n Enter the marks: ");
        scanf("%d",&stud[i].marks);
    }
