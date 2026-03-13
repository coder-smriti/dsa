#include<stdio.h>//multiplicationofamatrix
int main(){
    int r1, c1, r2, c2;
    printf("Enter rows and column of first amtrix:");
    scanf("%d%d", &r1, &c1);
    printf("Enter rows and column of first amtrix:");
    scanf("%d%d", &r2, &c2);
    if(c1 != r2){
        printf("Matrix multiplication not possible");
    return 0;
}
int A[100][100], B[100][100], c[100][100];
printf("enter elements of first matrix:\n");
for(int i=0; i<r1; i++){
    for(int j=0; j<c1; j++){
        scanf("%d", &A[i][j]);
    }
}
printf("Enter elements of second matrix:\n");
for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
        c[i][j]=0;
        for(int k=0; k<c1; k++){
            c[i][j]+=A[i][k]*B[k][j];
        }
    }
}
printf("\nResultant matrix:\n");
for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
        printf("%d", c[i][j]);
    }
    printf("\n");
}
return 0;
}