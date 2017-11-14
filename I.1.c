#include <stdio.h>
int n, average[100], i;
int main(){
    printf("n=");
    scanf("%d", &n);
if(n >= 3){
    for(i = 1; i < n; i++){
        scanf("%d", &average[i-1]);
        scanf("%d", &average[i]);
        scanf("%d", &average[i+1]);
            average[i] = (average[i-1] + average[i+1])/2;
        printf("%d", average[i]);
                }
}
else
    printf("n is invalid");


}
