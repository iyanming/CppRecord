#include <iostream>
#include <vector>
using namespace std;
int main(){
    int d;
    vector<int> vec;
    cin>>d;
    while(d){
        vec.push_back(d%8);
        d=d/8;
    }
    for(vector<int>::iterator ip=vec.end()-1;ip>=vec.begin();){
        cout<<*ip--;
    }
    cout<<endl;
    return 0;
}