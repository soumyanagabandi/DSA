#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&s, int k){
    if( k == 1){
        s.pop();
        return;
    }
    int val = s.top();
    s.pop();
    solve(s,k-1);
    s.push(val);
}
void midDel(stack<int>&s, int k){
    if(s.size()==0){
        return;
    }
    solve(s,k);
}

int main(){
    int n;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.push(a);
    }
    int k = n/2 + 1;
    midDel(s,k);
    
   for(int i=0;i<n-1;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    
}