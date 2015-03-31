//
//  main.c
//  Detab
//
//  Created by Judith on 3/30/15.
//  Copyright (c) 2015 Cellar Door Enterprises. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int c, i, charIndex, tabstop;
    
    charIndex = 0;
    tabstop = 4;
    
    if (argc > 2) {
        fprintf(stderr, "Usage: Detab <numberOfSpacesPerTab>\n");
        return 1;
    }
    
    if (atoi(argv[1]) > 0)
        tabstop = atoi(argv[1]);
    
    while ((c=getchar())!=EOF) {
        if (c=='\t') {
            for (i = charIndex % tabstop; i < tabstop; ++i) {
                printf(" ");
                charIndex++;
            }
        } else if (c=='\n') {
            putchar(c);
            charIndex = 0;
        } else {
            putchar(c);
            charIndex++;
        }
    }
    
    return 0;
}