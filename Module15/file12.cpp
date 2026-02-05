#include<iostream>
using namespace std;
bool isPalindrone(char str[], int n){
    int st = 0, end = n-1;
    while(st<end){
        if(str[st] != str[end] ){
            cout<< "not valid palindrome\n";
            return false;
        }
    }
    cout<<"valid palindrome\n";
    return true;
}
int main(){
    char word[]="rececar";
    isPalindrome (word, strlen(word));
    return 0;
}