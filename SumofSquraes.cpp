// SUM OF SQUARES  1^2+2^2+3^2+...+n^2


// METHOD =-1


// #include<iostream>
// using namespace std;
// int main(){

//   int n;
//    cout<<"Enter a Number:";

//   cin>>n;

//  int sum = n * (n + 1) * (2 * n + 1) / 6;
  

//  cout << "The final result: " << sum << endl;


//   return 0;
// } 


// METHOD-2

#include<iostream>
using namespace std;
int main(){

int n;

cout<<"Enter a number :";

cin>>n;


int sum =0;

for(int i=1;i<=n;i++){

   sum= sum+(i*i);

   
    // cout << "The final result: " << sum << endl;

} 
 cout << "The final result: " << sum << endl;

  return 0;

}
 