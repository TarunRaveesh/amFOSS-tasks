#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int h; // Where 'h' = Prompted Priramid Height
    do
    {
        h = get_int(" Specify Pyramid Height (b/w 1 to 8 Units): ");
    }
    while (h < 1 || h > 8);
    
// This should prompt the user for Pyramid Height between 1 and 8... 😉
    
    for (int row = 0; row < h; row++)
    {
        for (int spaces = h - row; spaces > 1; spaces--)  // The no. of Spaces = Pyramig Height (h) - Row Number (row) 🤔
        {
            printf(" ");
        }
        for (int hashes = 0; hashes < row + 1; hashes++)  // And, The no. of Hashes = Particular Row Number (row) 😎
        {
            printf("#");
        }
        printf("\n");
    }
}
// That was fun :P