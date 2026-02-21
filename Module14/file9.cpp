#include <iostream>
using namespace std;
void toUpper(char word[],int n){
    for(int i=0; i<n; i++){
        char ch=word[i];
        if(ch>='A'&& ch<='Z'){
            continue;
        }else{
            ch=ch-'a'+'A';
        }
    }
}
int main(){
    char word[]="ApPle";
    int strlen;
    toUpper(word,strlen(word));
    cout<<word<<endl;
    return 0;
}