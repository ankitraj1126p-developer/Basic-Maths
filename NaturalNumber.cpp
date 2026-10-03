// #include <iostream>
// using namespace std;

// int main() {

//     int n;
    

//     cout << "Enter a number: "; 
//     cin >> n;

//     int sum = n * (n + 1) / 2;

//     cout << "The final result: " << sum << endl;

//     return 0;
// }

//  METHOD-2


#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum = sum + i;
    }

    cout << "The final result: " << sum << endl;

    return 0;
}