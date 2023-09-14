#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count =1;
    int ans =1;
    for(int i=1;i<s.size();i++){
        if(s[i] == s[i-1]){
            count++;
            ans = max(ans,count);
        }
        else{
            count =1;
        }
    }
    cout<<ans;
    
}