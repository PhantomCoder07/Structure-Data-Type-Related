#include <stdio.h>
struct emp
{
    char efname[20],esname[20];
    int eid,eage;
    float esalary;
};
int main()
{
    int i,n;
    printf ("Enter Employee numbers: ");
    scanf ("%d",&n);
    struct emp e[n];
    for (i=0; i<n; i++)
    {
        printf ("\nEnter info of employee %d:\n",i+1);
        printf ("Enter employee's first name : ");
        scanf ("%s",e[i].efname);
        printf ("Enter employee's last name  : ");
        scanf ("%s",e[i].esname);
        fflush (stdin);
        printf ("Enter employee's ID         : ");
        scanf ("%d",&e[i].eid);
        printf ("Enter employee's age        : ");
        scanf ("%d",&e[i].eage);
        printf ("Enter employee's salary     : ");
        scanf ("%f",&e[i].esalary);
    }
    printf ("\n\n----------Employee's Record----------\n\n");
    for (i=0; i<n; i++)
    {
        printf ("Employee %d:\n",i+1);
        printf ("Employee's name   : %s %s\n",e[i].efname,e[i].esname);
        printf ("Employee's ID     : %d\n",e[i].eid);
        printf ("Employee's age    : %d\n",e[i].eage);
        printf ("Employee's salary : %.2f\n",e[i].esalary);
        printf ("\n");
    }
    return 0;
}
