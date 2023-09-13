#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    vector<long> input ;
    for(long long  i=0;i<n-1;i++){
        long b;
        cin>>b;
        input.push_back(b);
    }
    vector<long> hash(999999,0);
    for(int i=0;i<n-1;i++){
        hash[input[i]]  = 1;
    }
    for(int i=1; i<hash.size(); i++){
        if(hash[i] == 0){
            cout<<i;
            break;
        }
    }
}