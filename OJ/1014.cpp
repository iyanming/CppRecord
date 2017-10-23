#include <iostream>
using namespace std;
int main(){
    int sum,n;
    int a = 2;
    int d = 3;
    cin>>n;
    sum = n*a + n*(n-1)*d/2;
    cout<<sum<<endl;
    return 0;
}