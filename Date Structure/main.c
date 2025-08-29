#include <stdio.h>
struct date
{
    int day,month,year;
};
int main()
{
    struct date d;
    printf ("Enter day   : ");
    scanf ("%d",&d.day);
    printf ("Enter month : ");
    scanf ("%d",&d.month);
    printf ("Enter year  : ");
    scanf ("%d",&d.year);
    if (d.day<=31 && d.month<=12)
        printf ("\nGiven date in dd/mm/yyyy format: %02d/%02d/%d\n",d.day,d.month,d.year);
    else
        printf ("\nInvalid date\n");
    return 0;
}
