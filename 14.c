//Program to Check weather the given Character is Alphabet, digit or spcl char

#include<stdio.h>

int main()
{
    char c;

    printf("Enter any Character- ");
    scanf("%c",&c);

    if((c>= 'a' && c<= 'z')||(c>= 'A' && c<= 'Z')) //Condition for alphabet
    {
        printf("Entered Character is an Alphabet");
    }
    else if((c>= '0' && c<= '9')) //Condition for Digit
    {
        printf("Entered Character is a Digit");
    }
    else
    {
        printf("Entered Character is a Special Character"); //Anything else would be a spcl char
    }

    return 0;
}
