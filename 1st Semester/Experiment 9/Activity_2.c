#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};


struct stu
{
    char fname[30];
    char lname[30];
    long SAP_ID;
    long enroll;
    struct date DOR;
    struct date DOB;
};


void main(){
    printf("Enter number of students: ");
    int n;
    scanf("%d", &n);
    struct stu arr_st[100];    
    printf("Enter details of %d students. \nNote do not put spaces in between\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Student %d details-\n", i+1);
        
        printf("Student First Name: ");
        scanf("%s", arr_st[i].fname);

        printf("Student Last Name: ");
        scanf("%s", arr_st[i].lname);

        printf("Student SAP-ID: ");
        scanf("%ld", &arr_st[i].SAP_ID);

        printf("Student Roll No.: ");
        scanf("%ld", &arr_st[i].enroll);

        printf("Enter date of birth in DD MM YYYY manner: ");
        scanf("%d %d %d", &arr_st[i].DOB.day, &arr_st[i].DOB.month, &arr_st[i].DOB.year);

        printf("Enter date of joining in DD MM YYYY manner: ");
        scanf("%d %d %d", &arr_st[i].DOR.day, &arr_st[i].DOR.month, &arr_st[i].DOR.year);
    }
    
    printf("\n---------------------------------------------------\n");
    printf("Displaying info.....");
    printf("\n---------------------------------------------------\n");
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("Details of student %d\n", i+1);
        printf("Student Name: %s %s\n", arr_st[i].fname, arr_st[i].lname);
        printf("Student SAP-ID: %ld\n", arr_st[i].SAP_ID);
        printf("Student Enrollment number: %ld\n", arr_st[i].enroll);
        printf("Student Date of Birth: %d %d %d\n", arr_st[i].DOB.day, arr_st[i].DOB.month, arr_st[i].DOB.year);
        printf("Student Date of Birth: %d %d %d\n", arr_st[i].DOR.day, arr_st[i].DOR.month, arr_st[i].DOR.year);
        printf("\n");
    }
    
}