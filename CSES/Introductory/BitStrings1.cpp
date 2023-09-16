#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
void bitStrings(long long n){
   long long ans = 1;
   for(int i=0;i<n;i++){
    ans = (ans * 2)%MOD;
   }
   cout<<ans;
}
int main(){
    long long n;
    cin>>n;
    bitStrings(n);
}