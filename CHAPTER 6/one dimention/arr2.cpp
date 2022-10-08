// ! C program to store words in an array;

#include <stdio.h>

int main()
{
    int i;

    // ! Direct initialization of 2-D char array;

    char array[][30] = {"Tony Stark", "Thor", "Captain Steve Rogers", "T'Challa", "Natasha Romanof", "Carol", "Dr Strange"};

    char array2[][20] = {"Sonic", "Tails", "Knuckles"};

    // ! print the words;

    printf("Avengers : \n\n");

    for (i = 0; i <= 6; i++)
    {

        printf("%s\n", array[i]);
    }

    printf("\n\nSonics : \n\n");

    for (i = 0; i <= 2; i++)
    {

        printf("%s\n", array2[i]);
    }
}