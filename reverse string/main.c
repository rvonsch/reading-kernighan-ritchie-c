#include <stdio.h>
/*exercise 1.19*/
/*Write a function reverse(s) that reverses the character string s.
 Use it to write a program that reverses its input a line at a time*/

#define MAXLENGTH 1000

int grabLine(char[], int);
void reverses(char[]);

main()
{
    int currentLineLength;
    char line[MAXLENGTH];
    
    while ((currentLineLength = grabLine(line, MAXLENGTH)) > 1) {
        reverses(line);
    }
    return 0;
}

int grabLine(char line[], int limit)
{
    int c, i;
    
    for (i = 0; i < limit-1 && (c=getchar())!=EOF && c!='\n'; i++) line[i]=c;
    if (c=='\n') {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';
    return i;
}

void reverses(char s[])
{
    int i, count;
    i = count = 0;

    // Get the total character count in array
    while (s[count] != '\n') ++count;
    
    // Create a copy, reverse it
    char copy[count];
    for (i = 0; i < count; ++i)
        copy[count - i - 1] = s[i];

    printf("%s\n", copy);
}