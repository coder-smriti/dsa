#include <iostream>
 using namespace std;
 int sum(int a, int b){
  int sum = a+b;
  return sum;
 }
 int diff(int c, int d){
  int diff = c-d;
  return diff;
 }
 int main(){
  int x = sum(3,4);
  cout<<"sum = "<<x<<endl;
  int y = diff(6,7);
  cout<<"diff = "<<y<<endl;
 }