#include <stdio.h>
struct inv
{
    int iid;
    char iname[50];
    float iprice;
};
int main()
{
    int i,n;
    printf ("Enter item number: ");
    scanf ("%d",&n);
    struct inv iv[n];
    float sum=0.0;
    for (i=0; i<n; i++)
    {
        printf ("\nEnter info of item %d:\n",i+1);
        printf ("Enter item ID    : ");
        scanf ("%d",&iv[i].iid);
        printf ("Enter item name  : ");
        scanf ("%s", iv[i].iname);
        printf ("Enter item price : ");
        scanf ("%f",&iv[i].iprice);
        sum+=iv[i].iprice;
    }
    printf ("\n\n----------Record of items----------\n\n");
    for (i=0; i<n; i++)
    {
        printf ("Item %d:\n",i+1);
        printf ("Item ID    : %d\n",iv[i].iid);
        printf ("Item name  : %s\n",iv[i].iname);
        printf ("Item price : %.2f\n",iv[i].iprice);
        printf ("\n");
    }
    printf ("The total value of inventory: %.2f\n",sum);
    return 0;
}
