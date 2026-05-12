#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout <<"Enter two numbers : ";
    cin >>a >>b;
    while(b!=0){
        int temp = b; //store b in temp
        b= b%a; //remainder of a/b becomes new b
        a=temp; //old b becomes new a
    }
    cout<<"GCD = " <<a;//At the end, a contains GCD
    return 0;
}