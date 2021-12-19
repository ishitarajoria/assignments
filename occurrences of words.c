
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 


int occurrence_of_word(char * str, char * word);


int main()
{
    char str[MAX_SIZE];
    char word[MAX_SIZE];
    int temp;

    
    printf("Enter the string: ");
    gets(str);
    printf("Enter the word to be check its occurrences : ");
    gets(word);

    temp = occurrence_of_word(str, word);

    printf("Total occurrences of '%s': %d", word, temp);

    return 0;
}



int occurrence_of_word(char * str, char * word)
{
    int i, j, found, temp;
    int string_Len, word_Len;

    string_Len = strlen(str);      
    word_Len = strlen(word); 

    temp = 0;

    for(i=0; i <= string_Len-word_Len; i++)
    {
       
        found = 1;
        for(j=0; j<word_Len; j++)
        {
            if(str[i + j] != word[j])
            {
                found = 0;
                break;
            }
        }

        if(found == 1)
        {
            temp++;
        }
    }

    return temp;
}