#include<stdio.h>

int main()
{

int hours;
float minutes,a,b,t,c,d,v;


//Taking input from the user i.e, hours and minutes
printf("hours:");
scanf("%d",&hours);


printf("minutes:");
scanf("%f",&minutes);

//The minute input is to be divided by 5 in order to get where the minute hand is pointing at

//Now there are two ways to calculate the difference between where the hour hand is pointin at and where the minute is pointing at  
a = minutes / 5 + 12 - hours;

b = hours - minutes / 5;

d = minutes / 5 - hours;
/*Difference of angle between each consecutive time is 360 / 12 = 30 degrees

For eg: Say the hour hand is pointing at 11 and the minute hand at 5 i.e,the time is 11:25 so the angle made should be 30 * 6 = 180 degrees 
But as you'd notice it is slightly lesser than that
Why because the clock hand has moved a bit towards 12
So since 25 / 60 * 30 = 12.5(Difference of angle between consecutive time is 30 degrees)
We'd have to subtract this from the 180 therfore 167.5


*/
t = 30 * a - minutes / 2; //minutes / 60 * 30 = minutes / 2

c = 30 * b - minutes / 2;

v = 30 * d - minutes / 2;

//Since we need the smaller angle which ever angle clock wise or anticlockwise is smaller should be printed
if (t > c,c>0)
{printf("%f degrees is the angle between the minute and the hour hand of the clock c",c);
}

else if (c < 0)
{printf("%f degress is the angle between the minute and the hour hand of the clock",v);
}

else 
{printf("%f degrees is the angle between the minute and the hour hand of the clock t",t);
}









return 0;
}
