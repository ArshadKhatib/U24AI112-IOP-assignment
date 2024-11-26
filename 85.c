//WRITE A FUNCTION TO READ CHARACTER AND CHECK WHETHER IT IS VOWEL OR NOT.
#include<stdio.h>
#include<stdlib.h>

int check_for_vowel_lowercase(char c) {
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
        return 1;
    } else {
        return 0;
    }
}

int check_for_vowel_uppercase(char c) {
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U') {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char a;
    int result;
    printf("This program will tell you whether your inputed characrter is vowel or not.\nEnter your character: ");
    scanf("%c",&a);
    if(a>='a' && a<='z') {
        result = check_for_vowel_lowercase(a);
    } else if (a>='A' && a<='Z') {
        result = check_for_vowel_uppercase(a);
    } else {
        result = 2;
    }
    if (result == 1) {
        printf("Your entered character is a vowel.");
    }
    if (result == 0) {
        printf("Your entered character is a consonent.");
    }
    if (result == 2) {
        printf("Your entered character is not an Alphabet.");
    }    
    return 0;
}