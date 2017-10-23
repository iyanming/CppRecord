#include <iostream>
using namespace std;
int main() {
    int n,a[100],sum;
    while(cin>>n){
       if(n==0)
       {
           exit(0);
       }
        else{
           {
               sum = 0;
               for(int j = 1;j<=n;j++){
                   cin>>a[j];
                   sum=sum+a[j];
               }
               cout<<sum<<endl;
           }
       }
    }
    return 0;
}