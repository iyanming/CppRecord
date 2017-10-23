#include <iostream>
using namespace std;
int main(){
    int a,b,t,x,y;
    cin>>a>>b; //2 3
    (a>b)?(x=a,y=b):(x=b,y=a); // x 3 y 2
    while(y!=0){
        t = x%y; //t=3%2=1
        x = y;   //2
        y = t;   //1
    }
    cout<<x<<endl;
    cout<<(a*b)/x<<endl;
    return 0;
}