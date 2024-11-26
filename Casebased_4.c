#include<stdio.h>

void main()
{
  int n,faltu=0,gemstone[26],i,j;
  char l=97;
  printf("enter number of stones");
  scanf("%d",&n);

typedef struct stone
{
  char gem[26];
}Stones;

Stones g[n];

for( i=0;i<n;i++)
{
  printf("enter minrals of g[%d]:",i);
  scanf("%s",&g[i].gem[26]);
}

for(j=0;j<26;j++)
{
  for(i=0;i<n;i++)
  {
    if(l+j==g[i].gem[26]);
    {
      faltu++;

      if(faltu==25)
      {
        gemstone[i]=l;
      }

    }
  }
}

printf("%c",gemstone[0]);

}