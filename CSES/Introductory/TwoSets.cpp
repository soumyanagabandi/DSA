#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long sum = (n*(n+1))/2;
    vector<long long> set1, set2;
    if(sum%2 == 0){
        cout<<"YES"<<endl;
        long long mid = sum/2;
        for(int i=n;i>=1;i--){
            if(i<=mid){
                set1.push_back(i);
                mid = mid -i;
            }else{
                set2.push_back(i);
            }
        }
        cout<<set1.size()<<endl;
        for(auto i: set1){
            cout<<i<<" ";
        }
        cout<<set2.size()<<endl;
        for( auto i: set2){
            cout<<i<<" ";
        }
    }else{
        cout<<"NO";
    }
}