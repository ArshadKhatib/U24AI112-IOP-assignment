#include<stdio.h>
int main()
{
    enum colour{white=1,red,green,blue,black};
    int n;
    printf("choose any number between (0-5)\nchoose '0' for exiting the program\n");
   while(n!=0){
    printf("Enter number:");
   scanf("%d",&n);
   switch (n)
   { case 0: break;
    case 1:{
        printf("WHITE:#FFFFFF\n");
        break;
    }
    case 2:{
        printf("RED:#FF0000\n");
        break;
    }
    case 3:{
        printf("GREEN:#00FF00\n");
        break;
    }
    case 4:{
        printf("BLUE:#0000FF\n");
        break;
}
    case 5:{
        printf("BLACK:#000000\n");
        break;
    }
    default:
    {
        printf("NO valid colour available\n");
    }
   }
   }
}
