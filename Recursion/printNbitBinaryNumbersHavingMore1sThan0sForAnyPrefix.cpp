#include<bits/stdc++.h>
using namespace std;
void solve(int n, int zeros, int ones,string op, vector<string>&v){
    if( n ==0){
        v.push_back(op);
        return;
    }
        string op1 = op;
        op1.push_back('1');
        solve(n-1,zeros,ones+1,op1,v);
        if(ones>zeros){
            string op2 = op;
            op2.push_back('0');
            solve(n-1,zeros+1,ones,op2,v);
        }
        return;
}
int main(){
    int n;
    cin>>n;
    int zeros =0;
    int ones =0;
    string op="";
    vector<string> v;
    solve(n,zeros,ones,op,v);
    for(auto i: v){
        cout<<i<<endl;
    }
}