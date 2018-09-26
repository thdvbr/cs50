#include <cs50.h>
#include <stdio.h>

int main(void)

{
    //promt user for the input of change thats not negative value
    float n;

    do
    {
        n = get_float("Change owed: ");
    }
    while(n <= 0.01);

    //dollars to cents

    int c = 100 * n ;

    //declare count of each coin
    int i,j,k,l;


    for ( i = 0; c >= 25; i++)
    {
       c = c - 25;
    }
    for ( j = 0; c >= 10; j++)
    {
        c = c - 10;
    }
    for ( k = 0; c >= 5; k++)
    {
        c = c - 5;
    }
    for ( l = 0; c >= 1; l++)
    {
        c = c - 1;
    }

    printf("%i\n", i+j+k+l);
}