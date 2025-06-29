#include <stdio.h>
#include<conio.h>
int main() {
    int num;
    
    printf("Enter an integer: ");
    
    scanf("%d", &num);

    if (num > 0) {
        printf("The Number is positive.%d \n", num);
        }
    else {
         printf("The Number is Negative%d \n", num);
         
         }
    getch();
    return 0;
}    