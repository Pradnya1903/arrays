#include<stdio.h>
int main()
{
     
    int a[100][100],n,m,i,j;
    printf("enter value to print no of rows a\n");
    scanf("%d",&n);
    printf("enter value to print no of columns a\n");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
   
        for(j=0;j<m;j++)
        {
            printf("value at [%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("values in the array is :\n");
    for(int i=0;i<n;i++)
    {
    
        for(int j=0;j<m;j++)
        {
           printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
