#include<stdio.h>
int main(){
    int i,j,row,colm;
    int arr[10][10];
    int tran[10][10];
            printf("Enter rows and colums:");
            scanf("%d%d", &row,&colm);
        printf("Enter elemnts of matrix:\n");
        for(i=0; i<row; i++){
            for(j=0; j<colm; j++){
                scanf("%d", &arr[i][j]);
            }        
        }
        for(i=0; i<row; i++){
            for(j=0; j<colm; j++){
                tran[j][i]=arr[i][j];
            }
        }
        printf("Transpose of matrix:\n");
        for(i=0; i<colm; i++){
            for(j=0; j<row; j++){
                printf("%d", tran[i][j]);
            }
            printf("\n");
        }
    
    
    return 0;
}