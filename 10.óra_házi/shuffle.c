#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void shuffle(int n, int tomb[]){
    
    srand(time(NULL));

    for (int i = n-1; i >= 1; i--)
    {
        int j = rand() % (i+1);

        int tmp = tomb[j];
        tomb[j] = tomb[i];
        tomb[i] = tmp;
    }
    



}


int main(){

    int tomb[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(tomb)/sizeof(tomb[0]);


    shuffle(n,tomb);

    printf("Keveres utan: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",tomb[i]);
    }
    printf("\n");
    
    return 0;


}