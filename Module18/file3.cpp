#include<iostream>
#include<string>
using namespace std;
class student {
    string name;
     public:
    float cgpa;
    void getpercentage(){
        cout << (cgpa * 10) << "%\n";
    }
    void setName(string nameVal){
        name=nameVal;
    }
    void setcgpa(float cgpaVal){
        cgpa=cgpaVal;
    }
    string getName(){
        return name;
    }
    float getcgpa(){
        return cgpa;
    }
};
int main(){
    student s1;
    //s1.name= "smriti";
   s1.setName("smriti");
   s1.setcgpa(9.1);
   cout<<s1.getName()<<endl;
      cout<<s1.getcgpa()<<endl;


    return 0;
}