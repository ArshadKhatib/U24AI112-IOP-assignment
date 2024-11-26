/*An election is contested by 5 candidates. The candidate is numbered are 1 to 5 and the voting is done by marking the candidate number on the ballot paper.
Write a program to read the ballots and count the votes cast for each candidate using an array variable count. In case, a number, read is outside the range 1 to 5,
the ballot should be considered as a ‘spoilt ballot’ and the program should also count the number of spoilt ballots.*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n,ballot,c1,c2,c3,c4,c5,spoilt;
    i = 0;
    c1 = 0;
    c2 = 0;
    c3 = 0;
    c3 = 0;
    c4 = 0;
    c5 = 0;
    spoilt = 0;
    printf("This is a type of an EVM with 5 contestants...\nThis machine can take only 25 input\nThis voting has a ballot system..\n");
    printf("The candidates are given numbers from 1 to 5..\nAny input other than these 5 digits will considered spoilt ballots\n");
    while (i<25) {
        n = i + 1;
        printf("Enter the vote number %d:\n",n);
        scanf("%d",&ballot);
        if(ballot==1) {
            c1++;
        } else if(ballot==2) {
            c2++;
        } else if(ballot==3) {
            c3++;
        } else if(ballot==4) {
            c4++;
        } else if(ballot==5) {
            c5++;
        } else {
            spoilt++;
        }
        i++;
    }   
    printf("Candidate 1 got %d votes.\n",c1);
    printf("Candidate 2 got %d votes.\n",c2);
    printf("Candidate 3 got %d votes.\n",c3);
    printf("Candidate 4 got %d votes.\n",c4);
    printf("Candidate 5 got %d votes.\n",c5);
    printf("Number of spoilt ballots is %d.\n",spoilt);
    return 0;
}