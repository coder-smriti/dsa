#include<iostream>
using namespace std;
class student {
    public:
    string name;
    float cgpa;
    void getpercentage(){
        cout << (cgpa * 100) << "%\n";
    }
};
int main(){
    student s1;
    cout<< sizeof(s1)<<endl;
    return 0;
}