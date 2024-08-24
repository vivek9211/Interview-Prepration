// 5 = 5*4*3*2*1

#include<iostream>
using namespace std;

int factorial(int n) {
    if(n==1) return 1;
    return n*factorial(n-1);
}

int main() {
    cout<<"Enter a Number: ";
    int n;
    cin>>n;
    cout<<"Factorial of Number is: "<<factorial(n);
    return 0;
}