#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)  // Condition for prompting exactly 2 command-line arguments
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    
    for (int n = 0; n < strlen(argv[1]); n++)  // I got this code else where to handle non-numeric keys 😁
    {
        if (isdigit(argv[1][n]) == 0)  //
        {
            printf("Prompt a non-negative integer\n");
            return 1;
        }
    }

    int k = atoi(argv[1]);  // atoi converts a string to int

    if (k < 0)
    {
        printf("Prompt a non-negative integer\n");
        return 1;
    }
    else
    {
        string plaintext = get_string("plaintext: ");
        printf("ciphertext: ");

        for (int i = 0, n = strlen(plaintext); i < n; i++)
        {
            if islower(plaintext[i])  // i.e. Checking whether a char is lowercase ('islower' is from the ctype Library)
            {
                printf("%c", (((plaintext[i] + k) - 'a') % 26) + 'a');
            }
            else if isupper(plaintext[i]) // i.e. Checking whether a char is uppercase ('isupper' is from the ctype Library)
            {
                printf("%c", (((plaintext[i] + k) - 'A') % 26) + 'A');
            }
            else  // i.e for non-alphabetic characters
            {
                printf("%c", plaintext[i]);
            }
        }
        printf("\n");
        return 0;
    }
}