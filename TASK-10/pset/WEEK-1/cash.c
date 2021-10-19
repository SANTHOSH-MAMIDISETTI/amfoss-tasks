#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main()
{
// declare variables
float dollars;
int cents;
int coins = 0;
//Prompt user for change owed
do
{
dollars = get_float("How much change is owed?:");
}
// repeat until input is positive
while (dollars < 0);
//round dollars to cents
cents = round(dollars * 100);
// loop to get minimum number of coins
while (cents >= 25)
{
cents = cents - 25;
coins++;
}
while (cents >= 10)
{
cents = cents - 10;
coins++;
}
while (cents >= 5)
{
cents = cents - 5;
coins++;
}
while (cents >= 1)
{
cents--;
coins++;
}
//number of coins
printf("%d\n", coins);
}