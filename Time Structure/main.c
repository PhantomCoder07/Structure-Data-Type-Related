#include <stdio.h>
struct time
{
    int hours,minutes,seconds;
};
int main()
{
    int i,n;
    printf ("Enter the limit of times: ");
    scanf ("%d",&n);
    struct time t[n],result;
    result.seconds=0;
    result.minutes=0;
    result.hours=0;
    for (i=0; i<n; i++)
    {
        printf ("\nEnter time %d:\n",i+1);
        printf ("Enter the value of hour   : ");
        scanf ("%d",&t[i].hours);
        printf ("Enter the value of minute : ");
        scanf ("%d",&t[i].minutes);
        printf ("Enter the value of second : ");
        scanf ("%d",&t[i].seconds);
        result.seconds+=t[i].seconds;
        result.minutes+=t[i].minutes+result.seconds/60;
        result.hours+=t[i].hours+result.minutes/60;
        result.seconds%=60;
        result.minutes%=60;
    }
    printf ("\nThe total time: %02d hours, %02d minutes, %02d seconds\n",result.hours,result.minutes,result.seconds);
    return 0;
}
