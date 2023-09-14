#include<bits/stdc++.h>
using namespace std;
int solve(int n, int k, int target){
    if(target<0){
        return 0;
    }
    if( n == 0 && target == 0){
        return 1;
    }
    if( n == 0 && target !=0 ){
        return 0;
    }
    if( n !=0 && target == 0){
        return 0;
    }
    int ans =0;
    for(int i=1;i<=k;i++){
        ans = ans + solve(n-1,k,target-i);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int target;
    cin>>target;
    int ans = solve(n,k,target);
    cout<<ans;
}