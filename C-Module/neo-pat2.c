#include<stdio.h>
int main(){
    int arr[10][10];
    int i, j, r, c;
    printf("Enter the row and colum\n");
    scanf("%d%d",&r,&c);
    printf("enter the elements of array\n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
       scanf("%d",&arr[i][j]);   
        }
    }
        printf("Array in reverse order:\n");
        for(i=r-1; i>=0; i--){
        for(j=c-1; j>=0; j--){
        printf("%d",arr[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}