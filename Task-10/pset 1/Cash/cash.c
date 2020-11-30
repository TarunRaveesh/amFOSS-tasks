#include <cs50.h>
#include <stdio.h>
#include <math.h>    // I didn't use it the First time lol... 😅

int main(void)

{
    float dollars;
    
    do
    {
        dollars = get_float("Enter Change Owed in Dollars: ");
    }
    while (dollars < 0);  // User prompt looping done! 🙂
    
    {
        int cents = round(dollars * 100);    // Literally made it easy.. 😋
        printf("Change Owed in Cents = %i\n", cents);
        int quarters = cents / 25;
        int dimes = (cents % 25) / 10;
        int nickels = ((cents % 25) % 10) / 5;
        int pennies = (((cents % 25) % 10) % 5) / 1;
        int coins = (quarters + dimes + nickels + pennies);
        printf("Coins Required = %i\n", coins);    // Voila...
    }
}