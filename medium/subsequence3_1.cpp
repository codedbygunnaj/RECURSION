//only first sum print: way1
//Not Recommended! or Not Preferred
#include<bits/stdc++.h>
using namespace std;
bool flag=false;
void seq(vector<vector<int>> &ans,vector<int>& temp,vector<int>& nums,int id,int n,int sum){
    if(sum==0 && flag==false){
        flag=true;
        ans.push_back(temp);
        return;
    }
    if(id>=n || sum<0){
        return;
    }
    if(nums[id]<=sum){
        temp.push_back(nums[id]);
        seq(ans,temp,nums,id+1,n,sum-nums[id]);
        temp.pop_back();
    }
    seq(ans,temp,nums,id+1,n,sum);
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