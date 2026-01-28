 #include<iostream>
 using namespace std;
 int sum(int a,  int b=1){
 int sum=a+b;
 return sum;
 }
 int diff(int a,  int b=1){
 int diff=a-b;
 return diff;
 }
 int prod(int a, int b){
return a*b;
}
 int main(){
   int s= sum(2);
   int d= diff(6);
   int p=prod(3,17);
cout<<"sum = "<<s<<endl;
cout<<"diff = "<<s<<endl;
cout<<"prod = "<<s<<endl;

    return 0;
 }