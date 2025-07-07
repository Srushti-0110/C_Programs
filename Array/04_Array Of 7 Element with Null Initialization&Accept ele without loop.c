#include<stdio.h>
#include<conio.h>

int main()

{
    int arr[7]={};

        printf("\n Enter 1st number:-");
        scanf("%d",&arr[0]);

        printf("\n Enter 2nd number:-");
        scanf("%d",&arr[1]);

        printf("\n Enter 3rd number:-");
        scanf("%d",&arr[2]);

        printf("\n Enter 4th number:-");
        scanf("%d",&arr[3]);

        printf("\n Enter 5th number:-");
        scanf("%d",&arr[4]);

        printf("\n Enter 6th number:-");
        scanf("%d",&arr[5]);

        printf("\n Enter 7th number:-");
        scanf("%d",&arr[6]);

    getch();
    system("cls");


    printf("\n Enters Array Elements Are=>");

    printf("\n Value of 1st Element:- %d",arr[0]);
    printf("\n Value of 2nd Element:- %d",arr[1]);
    printf("\n Value of 3rd Element:- %d",arr[2]);
    printf("\n Value of 4th Element:- %d",arr[3]);
    printf("\n Value of 5th Element:- %d",arr[4]);
    printf("\n Value of 6th Element:- %d",arr[5]);
    printf("\n Value of 7th Element:- %d",arr[6]);


    getch();
    return 0;


}
