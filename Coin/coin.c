#include <stdio.h>
#include <stdlib.h>
 
int main(void) {
    int a;
    int heads=0;
    int tails=0;
 
   
    for(int i = 0; i < 5; i++) {    
        a=rand() % 2;
        if(a%2== 0){
            printf("Round %d :heads\n",i+1);
            heads++;
        }
        else 
            printf("Round %d ;tails\n",i+1);
            tails++;
    }
    printf("Heads:%d,Tails:%d\n",heads,tails);
    
    return 0;
}