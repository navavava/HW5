// نوا جغتایی-40223025
#include <stdio.h>

int main()
{
    int n;
    printf("how many letters is your word?\n");
    scanf("%d", &n);
    char word[n];
    printf("enter your word:\n");
    scanf("%s", word);
    for (int num = n; num > 1; num -= 2) // repeating the process for all pairs of idetical letters
    {
        for (int i = 0; i < (num - 1); i++) // selecting each letter of the word
        {
            if (word[i] == word[i + 1]) // comparing the letter with the one next to it
            {
                for (int t = i; t < (num - 2); t++) // removing the 2 identical letters
                {
                    word[t] = word[t + 2];
                }
                for (int s = 0; s < (num - 2); s++)//printing the new word
                {
                    printf("%c", word[s]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}