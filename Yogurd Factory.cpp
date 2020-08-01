#include <iostream>
using namespace std;
int main(){
 int n=0,s=0,c=0,y=0, last =10000;
 long long ans=0;
 cin >> n >>s;
 for(int i=0;i<n;i++){
  cin >> c >> y;
  if(c<last+s){
   last =c;
  }else{
   last = last+s;
  }
  ans = ans + (last * y);
 }
 cout << ans<<endl;
}
