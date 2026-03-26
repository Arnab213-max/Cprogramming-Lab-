#include<stdio.h>
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (num % 5 == 0) {
        if (num % 11 == 0) {
            cout << num << " is divisible by both 5 and 11";
        } else {
            cout << num << " is divisible by 5 but not by 11";
        }
    } else {
        if (num % 11 == 0) {
            cout << num << " is divisible by 11 but not by 5";
        } else {
            cout << num << " is not divisible by 5 or 11";
        }
    }
    
    return 0;
}
