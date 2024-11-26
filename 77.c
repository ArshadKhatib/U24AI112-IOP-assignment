//WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.
#include <stdio.h>
#include <stdlib.h>

void my_function(int num) {
    int temp_num,digi;
    int rev = 0;
    temp_num = num; 
    while (num != 0) {
        digi = num % 10;
        rev = rev * 10 + digi;
        num = num / 10; 
    }
    if(rev==temp_num) {
        printf("Entered number is a palindrome.");
    } else {
        printf("Entered number is not a palindrom.");
    }
}
int main() {
    int num;
    printf("THis program will check whether the entered number in a palindrome or not.\nEnter a number: ");
    scanf("%d", &num);
    my_function(num);
    return 0;
}