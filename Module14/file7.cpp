#include<iostream>//diagonalsumfor3*3
using namespace std;
bool search(int mat[][4], int n, int m, int key){
    int i=0, j=m-1;//tc-0(n^2)
    while(i<n && j>=0){
        if(mat[i][j]==key){
            cout<<"found at cell("<<i<<","<<j<<")\n";
            return true;
        }else if(mat[i][j]>key){
            j--;
        }else{
            i++;
        }
    }
        cout<<"key not found\n";
        return false;
    }
int main(){
int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
cout<<mat<<"="<<&mat[0][0]<<endl;
cout<<mat+1<<"="<<&mat[0][0]<<endl;

    return 0;
}