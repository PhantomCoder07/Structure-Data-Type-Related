#include <stdio.h>
#include <string.h>
struct book
{
    int bid;
    char btitle[50],bauthor[50];
};
int main()
{
    int i,j=0,n;
    char s[50];
    printf ("Enter Book numbers: ");
    scanf ("%d",&n);
    struct book b[n];
    for (i=0; i<n; i++)
    {
        printf ("\nEnter info of book %d:\n",i+1);
        printf ("Enter book's ID     : ");
        scanf ("%d",&b[i].bid);
        fflush (stdin);
        printf ("Enter book's title  : ");
        scanf ("%s",b[i].btitle);
        printf ("Enter author's name : ");
        fflush (stdin);
        scanf ("%s",b[i].bauthor);
        printf ("\n");
    }
    printf ("\n\n----------List of Books----------\n\n");
    for (i=0; i<n; i++)
    {
        printf ("Book %d title: %s\n",i+1,b[i].btitle);
    }
    printf ("\nEnter the searched book title: ");
    scanf ("%s",&s);
    printf ("\nResult of search:\n");
    for (i=0; i<n; i++)
    {
        if (strstr(b[i].btitle,s)==NULL)
            j++;
        else
        {
            printf ("Book's ID     : %d\n",b[i].bid);
            printf ("Book's title  : %s\n",b[i].btitle);
            printf ("Author's name : %s\n",b[i].bauthor);
        }
    }
    if (j==0)
        printf ("Book is not found.");
    return 0;
}
