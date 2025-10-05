#include<bits/stdc++.h>
using namespace std;
void callMe1(int i){
    if(i==0) return;
    cout<<i<<endl;
    callMe1(i-1);
}
void callMe2(int i){
    if(i>5) return;
    cout<<"Gunaj"<<endl;
    callMe2(i-1);
}
void callMe3(int i,int n){
    if(i>n) return;
    cout<<"Gunaj"<<endl;
    callMe3(i+1,n);
}
void callMe4(int i,int n){
    if(i>n) return;
    cout<<i<<endl;
    callMe4(i+1,n);
}
void callMe5(int i,int n){
    if(i>n) return;
    callMe5(i+1,n);
    cout<<i<<endl;
}
void callMe6(int i)
{
    //backtracking
    if(i<=0)return;
    callMe6(i-1);
    cout<<i<<endl;
}
void callMe7(int i,int n)
{
    //backtracking
    if(i<0)return;
    callMe7(i-1,n);
    cout<<i<<endl;
    //1 to n
}
void callMe9(int i,int n)
{
    //backtracking
    if(i>n)return;
    callMe9(i+1,n);
    cout<<i<<endl;
    //1 to n
}
int callMe8(int i){
    if(i<1)return 0;
    //summation of first n terms;
    return callMe8(i-1)+i;
}
int callMe10(int i){
    if(i==0)return 1;
    //fact of first n terms;
    return callMe10(i-1)*i;
}

void callMe11(vector<int>&v,int i,int j){
    //reverse an array
    if(i>=j) return;
    swap(v[i],v[j]);
    callMe11(v,i+1,j-1);
}

bool callMe12(string s,int i,int j){
    //reverse an array
    if(i>=j)return true;
    if(s[i]!=s[j])return false;
    return callMe12(s,i+1,j-1);
}

bool callMe13(string s,int i){
    //reverse an array
    if(i>=s.length()/2)return true;
    if(s[i]!=s[s.length()-i-1])return false;
    return callMe13(s,i+1);
}

int callMe14(int n){
    if(n<=1)return n;
    return callMe14(n-1)+callMe14(n-2);
    //fibonacci (best example for MultiRecursion)
}
int main()
{
    // callMe1(3);
    // cout<<callMe8(10);
    // cout<<callMe10(5);
    
    
    // vector<int>v;
    // for(int i=0;i<6;i++){
    //     //adding values;
    //     v.push_back(i);
    // }
    // for(int i=0;i<6;i++){
    //     //printing
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // callMe11(v,0,v.size()-1);
    // for(int i=0;i<6;i++){
    //     //printing after reversal
    //     cout<<v[i]<<" ";
    // }

    string s="naman";
    if(callMe12(s,0,s.length()-1)) cout<<"palindrome";
    else cout<<"not palindrome";
    return 0;
}

/*
Tree:
f(4)--> f(3)+f(2)-> 3 
f(3)-->f(2)+f(1) -> 2
f(2)-->f(1)+f(0) -> 1
*/