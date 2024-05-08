#include <stdio.h>
#include <stdlib.h>

 #define MAX 1000


int main(int argc, char *argv[]){

if (argc != 2)
{
    printf("baj\n");
    return 1;
}

FILE *file = fopen(argv[1],"r"); //argv[1]-nek adjuk meg a txt
if (file == NULL)
{
    printf("baj");
    return 1;
}

int numbers[MAX];
int count = 0;
int num;
int tmp;

while (fscanf(file,"%d",&num) == 1)
{
    numbers[count++] = num;
}
fclose(file);

for (int i = 0; i < count-1; i++)
{
    for (int j = 0; j < count-1-i; j++)
    {
        if (numbers[j] > numbers[j+1])
        {
            tmp = numbers[j];
            numbers[j] = numbers[j+1];
            numbers[j+1] = tmp;
        }
        
    }
    
}


for (int i = 0; i < count; i++)
{
    printf("%d\n",numbers[i]);
}


return 0;






}