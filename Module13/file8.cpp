#include<iostream>//diagonalsumfor3*3
using namespace std;
void func(int mat[][4], int n, int m){
    cout<<"0th row ptr"<<mat<<endl;
        cout<<"1st row ptr"<<mat<<endl;
            cout<<"2nd row ptr"<<mat<<endl;
            cout<<*(*(mat+2)+2)<<endl;

}
 //void func2(int(*mat)(4),int n, int m){

// }
int main(){
int mat[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
func(mat, 4,4);

    return 0;
}