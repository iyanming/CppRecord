#include <iostream>
using namespace std;
int main(){
    for(int a=10;a<=1000;a++){
        if(a%2==0 && a%3==0 && a%7==0){
            cout<<a<<endl;
        }
    }
    return 0;
}