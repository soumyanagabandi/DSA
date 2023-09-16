#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long long> v;
    for(int i=0;i<n;i++){
        long long  a;
        cin>>a;
        v.push_back(a);
    }
    long long count =0;
    for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            count = count+(v[i-1] -v[i]);
            v[i] = v[i-1];
        }
    }
    cout<<count;
}