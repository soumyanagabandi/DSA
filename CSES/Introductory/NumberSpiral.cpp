#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<long long>ans;
    while(t--){
        long long  x,y;
        cin>>x>>y;
        if( (x%2 ==0 && y%2 == 0)){
            if(x<y){
            ans.push_back((y*y)-(y-1)-(y-x));
            }else{
               ans.push_back((x*x)-(y-1));
            };
        }else if((x%2 != 0 && y%2 !=0) ) {
            if(x<y){
            ans.push_back((y*y)-(x-1));
            }else{
                ans.push_back((x-1)*(x-1) + y);
            }
        }else if((x%2 == 0 && y%2 !=0)){
            if(x<y){
                ans.push_back((y*y)-(x-1)); 
            }else{
                ans.push_back((x*x)-(y-1));
            }
        }else{
            if(x<y){
                   ans.push_back((y*y)-(y-1)-(y-x));
            }else{
                ans.push_back((x-1)*(x-1) + y);
            }
        }

    }
    for( auto i: ans){
        cout<<i<<endl;
    }
}
