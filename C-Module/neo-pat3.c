#include<stdio.h>
int main(){
    int a[10][10];
    int r, c, i, j;
    int max;
    printf("Enter number of rows and colum:");
    scanf("%d%d", &c, &r);
    printf("Enter the element of the array\n");
    for(i=0; i<r; i++){
        for(j=0;j<c; j++){
            scanf("%d", &a[i][j]);
        }
    }
    max=a[0][0];
    for(i=0; i<r; i++){//if(a[i][j]>max){
    for(j=0; j<c; j++){//max=a[i][j]
    if(a[i][j]>max){
    max=a[i][j];
         }
        }
    }
    printf("Greatest number in the array=%d", max);
    return 0;
}