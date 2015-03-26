/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the histogram with th bars horizontal; a vertical orientation is more challenging */
#include <stdio.h>
#define MAXLENGTH 15
main()
{
    int c, i, j, currentWord, mostFrequent, mostFrequentIndex;
    currentWord = mostFrequent = 0;
    int wordLengthArray[MAXLENGTH];
    for (i = 0; i < MAXLENGTH; ++i)
        wordLengthArray[i] = 0;
    
    // Allow: A-Z, a-z, apostrophe ignored
    while ((c = getchar()) != EOF)
        if ( !((c>64 && c<91) || (c>96 && c<123) || c==39) ) {
            if (wordLengthArray[currentWord]>=0)
                wordLengthArray[currentWord]++;
            currentWord = 0;
        } else if (c==39)
            ;
        else
            currentWord++;
    
    // Find the most frequent
    for (i = 1; i < MAXLENGTH; i++)
        if (wordLengthArray[i] > mostFrequent) {
            mostFrequent = wordLengthArray[i];
            mostFrequentIndex = i;
        }
    
    // If there's a lot of words, use proportionate values
    while (wordLengthArray[mostFrequentIndex] > 10)
        for (i = 1; i < MAXLENGTH; i++)
            wordLengthArray[i] /= 2;
    
    // Find the most frequent
    mostFrequent = 0;
    for (i = 1; i < MAXLENGTH; i++)
        if (wordLengthArray[i] > mostFrequent)
            mostFrequent = wordLengthArray[i];
    
    // Make the bar graph
    printf("\n");
    for (j = mostFrequent; j > 0; j--) {
        for (i = 1; i < MAXLENGTH; i++) {
            if (wordLengthArray[i] == j)
                printf("  *");
            else if (wordLengthArray[i] > j)
                printf("  *");
            else
                printf("   ");
        }
        printf("\n");
    }
    
    // Add a spacer and label the x-axis
    for (i = 1; i < MAXLENGTH; i++)
        printf("---");
    printf("\n");
    for (i = 1; i < MAXLENGTH; i++)
        printf(" %2i", i);
    printf("\n\n");
    
    return 0;
}