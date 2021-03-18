/********************************************************
*
* Chapter: 08
*
* 8-03_file_eof.c --  Read input from file
* 
* Listing: 8-03
*
* Author: Stephen Prata
*
* Date: 2005
*
* Purpose: Learn about EOF(end of file)
*
* Usage:
*      Enter filename and outputs text contents
*
********************************************************/
#include <stdio.h>
#include <stdlib.h> // for exit()
int main()
{
    int ch;
    FILE *fp;
    char fname[50];
    // to hold the file name
    printf("Enter the name of the file: ");
    scanf("%s", fname);
    fp = fopen(fname, "r"); // open file for reading
    if (fp == NULL)
    // attempt failed
    {
        printf("Failed to open file.Bye\n");
        exit(1);
        // quit program
    }
    // getc(fp) gets a character from the open file
    while ((ch = getc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    // close the file
    return 0;
}