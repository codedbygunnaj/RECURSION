#include<bits/stdc++.h>
using namespace std;

bool seq(vector<vector<int>> &ans,vector<int>& temp,vector<int>& nums,int id,int n,int sum){
    if(sum==0){
        ans.push_back(temp);
        return true;
    }
    if(id>=n || sum<0){
        return false;
    }
    if(nums[id]<=sum){
        temp.push_back(nums[id]);
        if(seq(ans,temp,nums,id+1,n,sum-nums[id])==true) return true;
        temp.pop_back();
    }
    if(seq(ans,temp,nums,id+1,n,sum)==true) return true;
    return false;
}
vector<vector<int>> subsets(vector<int>& nums,int k) {
    vector<vector<int>> ans;
    vector<int>temp;
    seq(ans,temp,nums,0,nums.size(),k);
    return ans;
}
int main(){
    vector<int>v={3,1,2,4};
    vector<vector<int>> ans=subsets(v,5);
    for(auto &a:ans){
        for(auto &b:a){
            cout<<b<<" ";
        }
        cout<<endl;
    }
    return 0;
}