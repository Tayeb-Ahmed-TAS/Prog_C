// ! Working Clock ;

#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdlib.h>
#include <conio.h>

int main()

{

    int hour, minute, second;

    hour = minute = second = 0;

    while (1)
    {

        // ! Clear output screen ;

        system("cls");

        // ! Print time in HH : MM : SS format ;

        printf("%02d : %02d : %02d", hour, minute, second);

        // ! Clear output buffer in gcc ;

        fflush(stdout);

        // ! Increase second ;

        second++;

        // ! Update hour minute and second ;

        if (second == 60)
        {

            minute += 1;

            second = 0;
        }

        if (minute == 60)
        {

            hour += 1;

            minute = 0;
        }

        if (hour == 24)
        {

            hour = 0;

            minute = 0;

            second = 0;
        }

        //  ! Wait till 1 second ;

        sleep(1);
    }

    getchar();
}
