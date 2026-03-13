#include<stdio.h>
int main(){
    int a[10][10];
    int r,c,i,j;
    int sum=0;
    printf("Enter elements of rows and colums:");
    scanf("%d %d", &r, &c);
    printf("Enter elements of the array:\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            sum += a[i][j];
        }
    }
    printf("Sum of all elements=%d", sum);
    return 0;
}