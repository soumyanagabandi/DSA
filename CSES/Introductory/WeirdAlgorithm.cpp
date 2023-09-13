#include<bits/stdc++.h>
using namespace std;
int main(){
    long n;
    cin>>n;
    vector<long> ans;
    while(n != 1){
         ans.push_back(n);
        if(n%2 == 0){
            n=n/2;
        }else{
            n = (n*3)+1;
        }

    }
    ans.push_back(1);
    for(auto i: ans){
        cout<<i<<" ";
    }
}