#include <stdio.h>
#include <stdlib.h>

struct subject{
    char name[50];
    int code;
};

void main(){
    struct subject *ptr;
    int n;

    printf("Enter number of subjects: ");
    scanf("%d", &n);
    printf("\n");
    ptr = (struct subject *)malloc(n*sizeof(struct subject));
    for (int i = 0; i < n; i++)
    {
        printf("Enter subject name: ");
        scanf("%s", (ptr+i)->name);
        printf("Enter subject code: ");
        scanf("%d", &(ptr+i)->code);
        printf("\n");
    }
    printf("-----------------------------------------\n");
    printf("Displaying information....\n");
    printf("-----------------------------------------\n\n");

    for (int i = 0; i < n; i++)
    {
        printf("Subject %d details\n", i+1);
        printf("Name: %s\n", (ptr+i)->name);
        printf("Code: %d\n", (ptr+i)->code);
        printf("\n");
    }
    
    
}