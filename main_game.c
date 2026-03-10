#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int max)
{
    srand(time(0));
    return rand()%(max+1);
}

int plus_minus(int guess, int target)
{
    if(guess>target)
    {
         printf("c'est moins\n");
         return 0;
    }
    else if(guess < target)
    {
	printf("c'est plus\n");
        return 0;
    }
    else
    {
        printf("bingo\n");
        return 1;
    }
}
int main() {
    int target=generateRandomNumber(100);
    int guess;
    int is_win=0;
    printf("%d\n", target);
    while(!is_win)
    {
    	printf("Entrer un nombre entre 0 et 100\n");
    	scanf("%d",&guess);
    	is_win=plus_minus(guess, target);
    }
    return 0;
}
