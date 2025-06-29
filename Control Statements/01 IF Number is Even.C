#include <stdio.h>
#include<conio.h>
int main() {
    int num;
    
    printf("Enter an integer: ");
    
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an even number.\n", num); // Print message for even numbers
    } else {
        printf("%d is an odd number.\n", num);  // Print message for odd numbers
    }
    
    getch();
    return 0;
}    