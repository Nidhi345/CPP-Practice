#include <iostream>
using namespace std;
int main() {
    int a,b,gcd,lcm;
    cout <<"Enter two numbers : ";
    cin >> a >> b ;
    int x=a,y=b;//store original values
    while(b!=0){
        int temp = b;
        b=a%b;
        a=temp;
    }
    gcd = a;//store GCD
    //formula for lcm
    // lcm * gcd = a * b
    lcm = (x*y)/gcd; 
    cout << "GCD = " << gcd <<endl;
    cout << "LCM = " <<lcm;
    return 0;

}