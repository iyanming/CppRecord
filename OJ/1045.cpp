#include <iostream>
using namespace std;
int main(){
    int m,n,x,y,t;
    cin>>m>>n; //5 7
    (m>n)?(x=m,y=n):(x=n,y=m); //x=7,y=5
    while(y!=0){
        t=x%y; //t 2
        x=y;   //x 5
        y=t;   //y 2
    }
    cout<<x<<" "<<m*n/x<<endl;
    return 0;
}