#include <stdio.h>
struct book
{
    char btitle[50],bauthor[50];
    int bpages;
    float bprice;
};
int main()
{
    int i,n;
    printf ("Enter Book numbers: ");
    scanf ("%d",&n);
    struct book b[n];
    for (i=0; i<n; i++)
    {
        printf ("\nEnter info of book %d:\n",i+1);
        printf ("Enter book's title        : ");
        scanf ("%s",b[i].btitle);
        printf ("Enter author's first name : ");
        scanf ("%s",b[i].bauthor);
        fflush (stdin);
        printf ("Enter book's price        : ");
        scanf ("%f",&b[i].bprice);
        printf ("Enter pages number        : ");
        scanf ("%d",&b[i].bpages);
        printf ("\n");
    }
    printf ("\n\n----------Books Record----------\n\n");
    for (i=0; i<n; i++)
    {
        printf ("Book %d:\n",i+1);
        printf ("Book's title  : %s\n",b[i].btitle);
        printf ("Author's name : %s\n",b[i].bauthor);
        printf ("Book's price  : %.2f\n",b[i].bprice);
        printf ("Pages number  : %d\n",b[i].bpages);
        printf ("\n");
    }
    return 0;
}
