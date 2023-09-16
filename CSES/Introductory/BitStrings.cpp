#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9+7;
void bitStrings(long long n, string op, long long &count){
    if( n == 0){
      count = count+1;
       return;
    }
   string op1 =  op;
   op1.push_back('0');
   bitStrings(n-1,op1,count);
   string op2 =op;
   op2.push_back('1');
   bitStrings(n-1,op2,count);
   }
int main(){
    long long n;
    cin>>n;
    string op =" ";
    long long count = 0;
    bitStrings(n,op,count);
   cout<<count%MOD;
}