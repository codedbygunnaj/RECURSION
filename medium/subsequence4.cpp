#include<bits/stdc++.h>
using namespace std;

void seq(vector<int>& temp,vector<int>& nums,int id,int &ctr,int sum){
    if(sum==0){
        ctr++;
        return;
    }
    if(id>=nums.size() || sum<0){
        return;
    }
    if(nums[id]<=sum){
        temp.push_back(nums[id]);
        seq(temp,nums,id+1,ctr,sum-nums[id]);
        temp.pop_back();
    }
    seq(temp,nums,id+1,ctr,sum);
    return;
}
int subsets(vector<int>& nums,int k) {
    vector<int>temp;
    int countMe=0;
    seq(temp,nums,0,countMe,k);
    return countMe;
}
int main(){
    vector<int>v={3,1,2,4};
    cout<<"Occurence is: "<<subsets(v,5);
    return 0;
}