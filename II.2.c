#include <stdio.h>
#include <math.h>
#include <limits.h>
int n, i, j, k;
float t, avg[100];

int main()
{
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%f", &avg[i]);
    for( j = 1; j < n; j += 2){
        t = avg[j];
        avg[j] = (t + avg[j-1])/2;
            n++;
    for( k = n-1; k > j+1; k--)
            avg[k] = avg[k-1];

    }
     avg[j+1] = t;
    for( i = 0; i < n; i++)
        printf("%.2f", avg[i]);
    return 0;
}
