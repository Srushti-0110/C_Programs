#include <stdio.h>
#include<conio.h>
int main() {
    int num;
    
    printf("Enter an integer: ");
    
    scanf("%d", &num);

    if (num % 7 == 0) {
        printf("%d The Given Number is divisible by 7.\n", num);
    } else {
        printf("%d Given is number is not divisible by 7 \n", num);  
    }
    
    getch();
    return 0;
}    