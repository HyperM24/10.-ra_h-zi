#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int choice(const int n, const int tomb[]){
    
    srand(time(NULL));
    int random = rand() % n;
    return tomb[random];

}






int main(){

int tomb[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
int hossz = sizeof(tomb)/sizeof(tomb[0]);

int random = choice(hossz,tomb);
printf("A veletlenszeruen kivalasztott elem: %d\n", random);
return 0;






}