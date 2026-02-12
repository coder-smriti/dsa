#include<iostream>
#include<string>
using namespace std;
class user{
    private:
    int id;
    string password;
    public:
    string username;
    user(int id){
        this->id = id;
    }
    string getPassword(){
        return password;
    }
    void setPassword(string password){
        this->password = password;
    }
};
int main(){
user user1(101);
user1.username="apnacollage";
user1.setPassword("abcd");
cout<<"username:"<<user1.username<<endl;
cout<<"username:"<<user1.getPassword()<<endl;
}