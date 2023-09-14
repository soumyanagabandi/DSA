#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> ans;
    if(n ==1){
        cout<<"1";
    }
    else if( n>1 && n<=3){
        cout<<"NO SOLUTION";
    }
    else if( n == 4){
        cout<<"2 4 1 3";
    }
   else{
    for(int i=1;i<=n;i++){
        if( i%2 !=0){
            ans.push_back(i);
        }
    }
    for(int i=1;i<=n;i++){
        if( i%2 ==0){
            ans.push_back(i);
        }
    }
    for( auto i: ans){
        cout<<i<<" ";
    }
   }
}
