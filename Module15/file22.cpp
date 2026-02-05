#include<iostream>
#include<iostream>
using namespace std;
bool isAnagram(string str1, string str2){
    if(str1.length() != str2.length()){
        cout<<"not valid anagrams\n";
    }
    int count[26] = {0};
    for(int i=0; i<str1.length(); i++){
        int idx = str1[i]-'a';
        count[idx]++;
    }
    for(int i=0; i<str2.length(); i++){
        int idx= str2[idx] == 0;
        if(count[idx]==0){
            cout << "not valid anagrams\n";
            return false;
        }
        count[idx]--;
    }
    cout<<"valid anagram\n";    //TC-0(n)
    return true;
}
int main(){
    string str1 = "cat";
    string str2 = "bat";
    isAnagram(str1, str2);
    return 0;
}