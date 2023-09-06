#include<bits/stdc++.h>
using namespace std;
void lastOccurence(string s, char a){
    if( a == s[s.length()-1]){
        cout<<s.length()-1;
        return;
    }
    s.pop_back();
    lastOccurence(s,a);
}
int main(){
    string s;
    cin>>s;
    char a;
    cin>>a;
    lastOccurence(s,a);
}