#include "reverseFindText.h"
#include "stdio.h"
#include "string.h"

//This reverseFindText will find text in a sentence from it back
//and return the text position in the sentence.
//arguments:
//      sentence    will receive a sentence as an argument.
//      text        is some words that want to find its position inside the sentence.
//variables:
//      i           is the length of the sentence for outer loop.
//      j           is the length of the text for inner loop.
//      startIndex  is the first position of word of the text in the sentence.
int reverseFindText(char *sentence, char *text)
{
    int i, j, startIndex;
    for(i = strlen(sentence)-1 ; i >= 0 ; i--)
    {
        startIndex = i;
        for(j = strlen(text)-1 ; j >= 0 ; j--)
        {
            if(sentence[startIndex] == text[j])
            {
                if(j == 0)
                    return startIndex+1;
                else
                    startIndex -= 1;
                continue;
            }
            else
                break;
        }     
    }
    return -1;
}