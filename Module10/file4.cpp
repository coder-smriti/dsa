#include<iostream>
using namespace std;
void PrintArr(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    int start=0,end=n-1;
    while(start<end){
    int tem=arr[start];
    arr[start]=arr[end];
    arr[end]=tem;
    start++;
    end--;
    }
    PrintArr(arr,n);
    return 0;
}