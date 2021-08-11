#include <stdio.h>

int main()
{

    int hours;
    float minutes, t1, t2, t3, a, b, c;

    //Taking input from the user i.e, hours and minutes
    printf("hours:");
    scanf("%d", &hours);

    printf("minutes:");
    scanf("%f", &minutes);

    //The minute input is to be divided by 5 in order to get where the minute hand is pointing at

    //Now there are different ways to calculate the difference between where the hour hand is pointin at and where the minute is pointing at
    t1 = minutes / 5 + 12 - hours;

    t2 = hours - minutes / 5;

    t3 = minutes / 5 - hours;
    /*Difference of angle between each consecutive time is 360 / 12 = 30 degrees

For eg: Say the hour hand is pointing at 11 and the minute hand at 5 i.e,the time is 11:25 so the angle made should be 30 * 6 = 180 degrees 
But as you'd notice it is slightly lesser than that
Why because the clock hand has moved a bit towards 12
So since 25 / 60 * 30 = 12.5(Difference of angle between consecutive time is 30 degrees)
We'd have to subtract this from the 180 therfore 167.5


*/
    a = 30 * t1 - minutes / 2; //minutes / 60 * 30 = minutes / 2

    b = 30 * t2 - minutes / 2;

    c = 30 * t3 - minutes / 2;

    a = fabsf(a);
    b = fabsf(b);
    c = fabsf(c);

    //Since we need the smaller angle which ever angle clock wise or anticlockwise is smaller should be printed
    if (a > b && b > 0)
    {
        printf("%f degrees is the angle between the minute and the hour hand of the clock b", b);
    }

    else if (b < 0)
    {
        printf("%f degress is the angle between the minute and the hour hand of the clock c", c);
    }

    else
    {
        printf("%f degrees is the angle between the minute and the hour hand of the clock a", a);
    }

    return 0;
}
