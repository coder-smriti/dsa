#include<iostream>//2pointerapporach
#include<vector>
using namespace std;
vector<int> pairSum(vector<int>arr, int target){
int st=0, end=arr.size()-1;
int currSum=0;
while(st<end){
    currSum=arr[st]+arr[end];
    if(currSum == target){
        ans.push_back(st);
        ans.push_back(end);
        return ans;
    }else if(currSum>target){
        end--;
    }else{
        st++;
    }
}
return ans;
}
int main(){
    vector<int> vec={2,3,4,5,6,7,8};
    int target=9;
    pairSum(vec, target);
    return 0;
}