#include <iostream>
using namespace std;
int main(){
    int n,original,sum=0,rem;
    cout<<"Enter a number : ";
    cin >> n;
    original = n;
    while(n>0){
        rem = n%10;
        sum+=rem*rem*rem;
        n/=10;
    }
    if(original == sum)
        cout<<"Armstrong";
    else
        cout<<"Not Armstrong";
    return 0;
}