#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str1[100] = "hello";
    char str2[100] = "bey";
    strcat(str1, str2);
    cout<<str1<<endl;
    cout<<str2<<endl;
    return 0;
}