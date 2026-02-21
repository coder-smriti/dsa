#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    for(int i=0; i<5; i++){//if size is 5 .capctity= 8,?;
        vec.push_back(i);
    }
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    return 0;
}