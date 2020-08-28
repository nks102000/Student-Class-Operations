#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks[5];
    float total;
    float percentage;
};

int main(){
    printf("\nEnter number of student : ");
    int n;
    scanf("%d",&n);
    struct student S[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the details of student");
        printf("\nEnter name : ");
        scanf("%s",S[i].name);
        printf("\nEnter Roll Number : ");
        scanf("%d",&S[i].roll);
        for (int j = 0; j < 5; j++)
        {
            printf("\nEnter marks : ");
            scanf("%f",&S[i].marks[j]);
        }
    }

    int t;

    for (int i = 0; i < n; i++)
    {
        t=0;
         for (int j = 0; j < 5; j++)
        {
           t=t+S[i].marks[j];
        }
        S[i].total=t;
        S[i].percentage=t/5;
    }
    int sear,abc;
    printf("\n Enter the roll no. to be searched: ");
    scanf("%d",&sear);

    for (int i = 0; i < n; i++)
    {
        if (S[i].roll==sear)
        {
            printf("\nDisplaying information");
            printf("\nName:%s",S[i].name);
            printf("\n Roll: %d",S[i].roll);
             for (int j = 0; j < 5; j++){
                printf("\nMarks of subject %d: %0.2f ",j+1,S[i].marks[j]);
            }
            abc=1;

        }
        
    }
    if(abc!=1)
    {
        printf("\nRoll number %d not found",sear);
    }
    float perup,perd;
    printf("\n Enter the percent range to be searched first the lower then the upper: ");
    scanf("%f,%f",&perd,&perup);

    for (int i = 0; i < n; i++)
    {
        if (S[i].percentage>=perd || S[i].percentage<=perup)
        {
            printf("\nDisplaying information");
            printf("\nName:%s",S[i].name);
            printf("\n Roll: %d",S[i].roll);
             for (int j = 0; j < 5; j++){
                printf("\nMarks of subject %d: %0.2f ",j+1,S[i].marks[j]);
            }
            abc=2;
        }
        
    }
    if(abc!=2)
    {
        printf("\nNo student in given range");
    }
}