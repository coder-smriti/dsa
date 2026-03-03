#include<iostream>
using namespace std;
int binSearch(int *arr, int n, int key){
    int start=0;
    int end=n-1;
    while(start <= end){
    int mid = (start+end)/2;
    if (key==arr[mid]){
    return mid;
    }
    else if(key > arr[mid]){
    start = mid+1;
    }else 
    {
    end=mid-1;
    }
    }
}
//0(logn)-TIMECOMPLEXITY