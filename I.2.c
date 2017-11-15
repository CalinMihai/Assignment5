#include <stdio.h>
#include <stdlib.h>
int ratio1, ratio2, n, i, x[100];
int main(){
scanf("%d", &n);
ratio1 = 0;
scanf("%d%d", &x[0], &x[1]);
    ratio1 = x[1] - x[0];
for(i = 1; i < n; i++){
    scanf("%d%d%d", &x[i-1], &x[i], &x[i+1]);
    ratio2 = x[i+1] - x[i];
    if(ratio2 != ratio1)
        printf("The sequence x is notan artimetic progression");
}
printf("The sequence x is an aritmetic progression with ratio %d", ratio1);
}
