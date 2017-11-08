
#include <stdio.h>
int n, average[100], i;
int main(){
    printf("n=");
    scanf("%d", &n);
if(n >= 3){
    for(i = 0; i < n; i++){
        scanf("%d", &average[i]);
        average[i] = average[i-1] + average[i+1];
        printf("%d", average[i]);
                }
}
else
    printf("n is invallid");


}
