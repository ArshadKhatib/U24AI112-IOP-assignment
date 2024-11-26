//WRITE A FUNCTION TO RADE LINE OF TEXT AND FIND OUT LENGTH OF STRING.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
   
int main()  
{  
    char string[] = "My name is Arshad";  
    int count = 0;  
      
    for(int i = 0; i < strlen(string); i++) {  
        if(string[i] != ' ')  
            count++;
    }  
      
    printf("Total number of characters in a string: %d", count);
    return 0;  
}