#include <iostream>
using namespace std;
int func(int n){
    int temp = n;
    int len = 0;
    int pow = 1;
    while(temp > 0){
        len++;
        pow = pow*10;
        temp = temp/10;
    }
    temp = n;
    for(int i = 0;i<len;i++){
        pow = pow/10;
        n = n + (temp % 10)*pow;
        temp = temp/10;
    }
    return n;
}
int main(){
    int n;
    cin>>n;
    cout<<func(n)<<endl;
    return 0;
}