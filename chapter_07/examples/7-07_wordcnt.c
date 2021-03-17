/********************************************************
*
* Chapter: 07
*
* 7-07_wordcnt.c -- Word count program
* 
* Listing: 7-07
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn more about logical operators
*
* Usage:
*      Enter characters and outputs count of characters,
*      words, and lines
*
********************************************************/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main(void)
{
    char c;

    char prev;
    long n_chars = 0L;
    int n_lines = 0;
    int n_words = 0;
    int p_lines = 0;
    bool inword = false;

    printf("Enter text to be analyzed(| to terminate):\n");
    prev = '\n';    // used to identify complete lines

    while ((c = getchar()) != STOP)
    {
        n_chars++;  // count characters
        if (c == '\n')
            n_lines++;  // count lines

        if (!isspace(c) && !inword)
        {
            inword = true; // starting a new word
            n_words++;  // count word
        }
        
        if (isspace(c) && inword)
            inword = false; // reached end of word
        prev = c;   // save character value
    }

    if (prev != '\n')
        p_lines = 1;
    printf("characters = % ld, words = % d, lines = % d, ",
           n_chars, n_words, n_lines);
    printf("partial lines = % d\n", p_lines);

    return 0;
}