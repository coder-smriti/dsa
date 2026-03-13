#include<stdio.h>
int main(){
    int rows,cols;
    printf("enter number of rows and colums:");
    scanf("%d%d", &rows, &cols);
    int matrix[100][100];
    printf("enter matrix element:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("\nREVERSED MATRIX:\n");
    for(int i=0; i<rows; i++){
        for(int j=cols-1; j>=0; j--){
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}