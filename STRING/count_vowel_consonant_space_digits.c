// ! C program to count vowels, consonants, space and digits on string ;

#include <stdio.h>
#include <string.h>

int main()

{

    char s[1000];

    int vow, cons, sps, dig, len;

    vow = cons = sps = dig = 0;

    puts("Enter a sentence => ");

    gets(s);

    len = strlen(s);

    for (int i = 0; i < len; i++)
    {

        s[i] = tolower(s[i]); // ? Convert character to lowercase ;

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            vow++;
        }
        else if ((s[i] >= 'a' && s[i] <= 'z'))
        {

            cons++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            dig++;
        }
        else if (s[i] == ' ')
        {
            sps++;
        }
    }

    printf("Total Vowel \t=  %d\nTotal Consonant \t=  %d\nTotal Digits \t=  %d\nTotal Space \t=  %d", vow, cons, dig, sps);

    return 0;
}