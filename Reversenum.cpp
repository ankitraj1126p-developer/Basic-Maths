// REVERSE A NUMBER 

#include <iostream>
using namespace std;

int main() {

    int n;
     cout<<"Enter a number:";
    cin >> n;
   

    int digit;
    int reverse = 0;

    while(n != 0) {

        digit = n % 10;
        n = n / 10;

        reverse = reverse * 10 + digit;
    }

    cout << reverse<<endl;

    return 0;
}