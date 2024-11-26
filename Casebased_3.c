#include <stdio.h>

int main() 
{
    int getDigits();

    int num;
    int N;
    int digits[N];  
    int size;
    int co1 =0 ;

    
    scanf("%d", &N);

    scanf("%d", &num);


    size = getDigits(num, digits);


    for (int i = 0; i < N; i++)
    {
        if (num%digits[i] == 0)
        {
            co1 += 1;
        }
        
    }

    printf("%d", co1);
    
    return 0;
}

int getDigits(int number, int digits[])
{
    int size = 0;

    if (number < 0) 
    {
        number = -number;
    }

    
    while (number > 0) 
    {
        digits[size] = number % 10;
        number /= 10;
        size++;
    }

    
    for (int i = 0; i < size/2; ++i) 
    {
        int temp = digits[i];
        digits[i] = digits[size - i - 1];
        digits[size - i - 1] = temp;
    }

    return size;
}


