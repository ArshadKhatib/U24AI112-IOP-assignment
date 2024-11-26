//PERFORM LINEAR SEARCH IN AN ARRAY
#include <stdio.h>
#include <stdlib.h>

int main(){
    char lol;
    char array[65] = {'m','n','b','v','c','x','z','a','s','d','f','g','h','j','k','l','q','w','e','r','t','y','u','i','o','p','1','2','4','3','6','7','5','9','8','0','`','~','!','@','#','$','%','*','^','&',')','(','-','_','+','[',']','{','}','"','|',';',':',',','.','<','/','>','?'};
    printf("Linear search\nThis program will search for a character in an premade random array.\nEnter the character you want to search for:\n");
    lol = getchar();
    for(int i=0;i<65;i++) {
        if(lol==array[i] && i==0) {
            printf("Your asked character is at 1st place of the array.\n");
            break;
        }
        if(lol==array[i] && i==1) {
            printf("Your asked character is at 2nd place of the array.\n");
            break;
        }
        if(lol==array[i] && i==2) {
            printf("Your asked character is at 3rd place of the array.\n");
            break;
        }
        if(lol==array[i]) {
            printf("Your asked character is at %dth place of the array.\n",i+1);
            break;
        }        
        if(lol!=array[i] && i==64) {
            printf("Your asked character is a single inverted comma or a capital letter.\n");
            printf("This is because I cold not add single inverted comma in it as it led to errors and for capital alphabets...\n");
            printf("I AM LAZY..!!\nAnd I appologize for this.");
            break;
        }
    }
    return 0;
}