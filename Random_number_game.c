#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int n;
    int i = 0;
    printf("Guess the number game\n");
    srand(time(0));
    int rand_num = (rand() % (100 - 0 + 1)) + 0;
   // printf("%d\n", rand_num);
    printf("Guess the number\n");
    scanf("%d", &n);
    if (n > rand_num)
    {

        printf("The entered number is greater then the random number\n");
        printf("Try to guess the number \n");
        scanf("%d", &n);
        do

        {
            // printf("Try again\n");
            // scanf("%d",&n);
            if (n > rand_num)
            {
                printf("The entered number is greater then the random number\n");
            }
            else if (n < rand_num)
            {
                printf("The entered number is smaller then the random number\n");
            }
            else if (n == rand_num)
            {
                printf("You guessed the number\n");
                printf("You've won he game\n");
            }

            printf("Try to guess the number \n");
            scanf("%d", &n);

            i = i + 1;
        } while (i <= 7);
    }
    else if (n < rand_num)
    {

        printf("The entered number is smaller then the random number\n");
        printf("Try to guess the number \n");
        scanf("%d", &n);
        do
        {
            // printf("try again\n");
            // scanf("%d",&n);
            if (n > rand_num)
            {
                printf("The entered number is greater then the random number\n");
            }
            else if (n < rand_num)
            {
                printf("The entered number is smaller then the random number\n");
            }
            else if (n == rand_num)
            {
                printf("You've guessed the number\n");
                printf("You've won the game\n");
                break;
            }

            printf("Try to guess the number \n");
            scanf("%d", &n);

            i = i + 1;
        } while (i <= 7);
    }
    else
    {
        printf("You guessed the number\n");
    }
    if (i = 7 && n != rand_num)
    {
        printf("Tujhse  nahi hoga guess.Tu jake reels mai lip-sync video bana ");
    }

    return 0;
}
