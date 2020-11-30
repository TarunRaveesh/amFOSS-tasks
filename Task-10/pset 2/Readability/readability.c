#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");  // Prompting the user for Text

// Now Let's Assign Variables to Count Letters, Words and Sentences respectively.
    int count_letters = 0;
    int count_words = 1;
    int count_sentences = 0;

// Loop For Counting
    for (int i = 0; i < strlen(text); i++)
    {
        char c = text[i];  // Introducing this to reduce the text... 😅

// Counting Letters
        if (isalpha(c) != 0)  // i.e. Excluding the \0 (null) byte.. Clever Right... 😏, btw got that in the ctype Library!
        {
            count_letters++;
        }
// Counting Words
        if (c == ' ')
        {
            count_words++;  // As stated, I have assumed that a sentence will not start or end with a space, nor a sentence will have multiple spaces in between Words.
        }

// Counting Sentences
        if (c == '.' || c == '!' || c == '?')
        {
            count_sentences++;  // That's pretty much it...
        }
    }
    printf(" %i Letter(s)\n %i Word(s)\n %i Sentence(s)\n", count_letters, count_words, count_sentences);

// Now, Using Coleman-Liau index

    float L = ((float) count_letters / (float) count_words) * 100;
    float S = ((float) count_sentences / (float) count_words) * 100;
    float index = 0.0588 * L - 0.296 * S - 15.8;

    if (index <= 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index < 16)
    {
        printf("Grade %i\n", (int) round(index));
    }
    else
    {
        printf("Grade 16+\n");
    }
}