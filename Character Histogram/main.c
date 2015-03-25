#include <stdio.h>
/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input */
#define XLABEL "%c%c ", i, i+32
#define TOPBAR "██ "
#define BAR "██ "
#define SPACER "   "
int getMostFrequent(int characterArray[126]) {
    int mostFrequentIndex, highestValue, i;
    mostFrequentIndex = highestValue = 0;
    for (i = 0; i < 126; i++)
        if (characterArray[i] > highestValue) {
            mostFrequentIndex = i;
            highestValue = characterArray[i];
        }
    return mostFrequentIndex;
}
main() {
    int c, i, j, mostFrequentCharacter;
    mostFrequentCharacter = 0;
    int character[126];
    for (i = 0; i < 126; ++i)
        character[i] = 0;
    while ( (c = getchar()) != EOF)
        if (c >= 33 && c <= 126)
            character[c]++;
    
    // Make case insensitive, add in lowercase counts
    for (i = 65; i < 91; i++)
        character[i] += character[i+32];
    
    // Get the most frequent character
    mostFrequentCharacter = getMostFrequent(character);
    
    // If there's many of one character, use proportionate values
    while (character[mostFrequentCharacter] > 20)
        for (i = 0; i < 126; i++)
            if (character[i] > 0) {
                character[i] /= 2;
                character[i] |= 1;
            }
    
    // Make the bar graph
    printf("\n\n");
    for (j = character[mostFrequentCharacter]; j > 0; j--) {
        for (i = 65; i <= 90; i++)
            if (character[i] == j)
                printf(TOPBAR);
            else if (character[i] > j)
                printf(BAR);
            else
                printf(SPACER);
        printf("\n");
    }
    
    // Label the X-axis
    for (i = 65; i <= 90; i++)
        printf(XLABEL);
    printf("\n\n");
}