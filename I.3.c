#include <stdio.h>
#include <stdlib.h>
int i,j,n,x,y,s,p;
int main()
{
    scanf("%d", &n);
    int a[n][n];
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            scanf("%d", &a[i][j]);

    printf("%d", area1(a[n][n],n));
    printf("%d", area2(a[n][n],n));
    printf("%d", area3(a[n][n],n));
    printf("%d", area4(a[n][n],n));

    return 0;

}

int area1(int a[10][10], int n)
{
 p=1;
    for( i = 1; i < n/2; i++ )
        for(j = i+1; j < n/2; j++)
            if(( i != j ) && ( i + j != n+1))
                p*=a[i][j];
    return p;

}

int area2(int a[10][10], int n)
{
    s=0;
     for( j = 1; j < n/2; j++ )
        for(i = j+1; i < n/2; i++)
            if(( i != j ) && ( i + j != n+1))
                s+=a[i][j];
    return s;
}

int area3(int a[10][10], int n)
{
    p=1;
    for( i = n/2 + 1; i <= n; i++ )
        for(j = 1; j < n; j++)
            {
                if( i + j > n+1)
                    p*=a[i][j];
                if(i == j)
                    j = n;
            }
    return p;
}

int area4(int a[10][10],int n)
{
    s=0;
    for( i = 1; i < n; i++ )
        for(j = n/2; j < n; j++)
            {
                if((i < n/2) && ( j > i))
                    s+=a[i][j];
                if((i > n/2) && ( j < i))
                    s+=a[i][j];
            }

    return s;
}
