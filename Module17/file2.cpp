#include<iostream>
using namespace std;
class student {
    string name;
     public:
    float cgpa;
    void getpercentage(){
        cout << (cgpa * 10) << "%\n";
    }
};
int main(){
    student s1;
    //s1.name= "smriti";
    s1.cgpa=9.0;
    cout<<s1.cgpa<<endl;
    s1.getpercentage();
    return 0;
}