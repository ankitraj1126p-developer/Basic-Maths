// PALINDROME 

#include<iostream>
using namespace std;

int main(){

int n;
cout<<"Enter a number:";
 cin >> n;

int digit;
int Reverse=0;

while(n!=0){

  digit=n%10;
  n=n/10;

  Reverse=Reverse*10+digit;

}

 cout<<Reverse<<endl;
  return 0;
}