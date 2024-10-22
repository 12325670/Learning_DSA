//find sum of all even number
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "give the last even number";
    cin >> n;
    int i=2;
    int sum=0;

    while (i <= n){
        sum = sum +i;
        i= i+2;
    }
cout << "sum is " << sum;
return 0;
}