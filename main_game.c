#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int max)
{
    srand(time(0));
    return rand()%(max+1);
}

void plus_minus(int guess, int target)
{
    if(guess>target)
        printf("c'est moins\n");
    else if(guess < target)
	printf("c'est plus\n");
    else
        printf("bingo\n");
}
int main() {
    int target=generateRandomNumber(100);
    int guess;
    printf("%d\n", target);
    printf("Entrer un nombre entre 0 et 100\n");
    scanf("%d",&guess);
    plus_minus(guess, target);
    return 0;
}
