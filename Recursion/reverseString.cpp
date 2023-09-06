#include<bits/stdc++.h>
using namespace std;
void insert(string &s, char temp){
    if(s.length() == 0){
        s.push_back(temp);
        return;
    }
    char ele  = s[s.length()-1];
    s.pop_back();
    insert(s,temp);
    s.push_back(ele);
}
void reverseString(string &s){
    if(s.length() == 1 || s.size() == 0){
        return;
    }
    char temp = s[s.length()-1];
    s.pop_back();
    reverseString(s);
    insert(s,temp);
}
int main(){
    string s;
    cin>>s;
    int i=0;
    reverseString(s);
    cout<<s;
}