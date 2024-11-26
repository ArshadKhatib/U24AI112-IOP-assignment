#include<stdio.h>
#include<string.h>

int main() {
    printf("Enter the value of N: ");
    int n;
    scanf("%d",&n);
    n++;
    while (n--) {
    char s[100];
    gets(s);
    int n = strlen(s);
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (s[n-i-1]>s[n-i-2])
        {
            index = n-i-2;
            break;
        }
    }
    
    if(index==-1) {
        printf("\n");
        continue;
    }

    char temp_char;
    int a;
    for (int i = index; i < n; i++)
    {
        if (s[i]>s[index])
        {
            temp_char = s[i]; 
            a = i;
        }
    }

    s[a] = s[index];
    s[index] = temp_char; 
    
    char temp3;
    for(int p = index+1; p < n-1; p++) {
        for (int i = index+1; i < n-1; i++)
        {
            if (s[i]>s[i+1])
            {
                temp3 = s[i];
                s[i] = s[i+1];
                s[i+1] = temp3;
            }
        }
    }

    puts(s);
    }
    return 0;
}