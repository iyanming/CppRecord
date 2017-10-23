#include <iostream>
using namespace std;
int main(){
  int n,m,a[100];
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>m;
    int sum =0;
    for(int j =1;j<=m;j++){
      cin>>a[j];
      sum = sum + a[j];
    }
    cout<<sum<<endl;
  }
  return 0;
}