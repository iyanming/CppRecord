#include <iostream>
using namespace std;
int main(){
    int n,sum=0,a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%2 == 0){
            sum = sum + a;
        }
    }
    cout<<sum<<endl;
    return 0;
}