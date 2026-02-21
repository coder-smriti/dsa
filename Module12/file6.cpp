#include<iostream>
using namespace std;
void countSort(int arr[], int n){
    int freq[100000]={0};
    int minVal = INT_MAX, maxVAl= INT_MIN:
    for(int i=0; i<n; i++);
        minVAl = min(minVAl, arr[i]);
        maxVAl = min(maxVAl, arr[i]);
    }
    for(int i = minaVal, j=0; i<=maxVAl; i++){
        while(feq[i]>0){
            arr[j++]=i;
            freq[i]--;
        }
    }
}
int main(){
    return 0;
}