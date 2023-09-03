#include<bits/stdc++.h>
using namespace std;
void insert( stack<int>&s, int ele){
    if(s.size() == 0){
        s.push(ele);
        return;
    }
    int temp = s.top();
    s.pop();
    insert(s,ele);
    s.push(temp);
    return;
}

void reverseStack(stack<int>&s){
    if(s.size() == 0 || s.size()==1){
        return;
    }
    int ele = s.top();
    s.pop();
    reverseStack(s);
    insert(s,ele);    
}

int main(){
    int n;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        s.push(a);
    }
    for(int i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
}