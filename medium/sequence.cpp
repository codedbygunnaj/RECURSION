//a contigous/non contigous sequence which follows the order.
//sequence is always contigous 
// by order we mean: order of the array is to be maintained!
// for n numbers -> 2^n subsets we have

//Better than recursion -> Power Sets (will see that later)
#include<bits/stdc++.h>
using namespace std;
void seq(vector<int> &nums,vector<int> &temp,vector<vector<int>>&ans,int id,int n){
    if(id>n){
        ans.push_back(temp);
        return;
    }
    /*
    for null printing:
        if(temp.size()==0){
            cout<<"{}"
        }
        cout<<endl;
        return;
    */
   //picking Vals:
    temp.push_back(nums[id]);
    seq(nums,temp,ans,id+1,n);
    //Backtracking: Not Picking
    temp.pop_back();
    seq(nums,temp,ans,id+1,n);
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int>temp;
    seq(nums,temp,ans,0,nums.size());
    return ans;
}
int main(){
    vector<int>v={3,1,2};
    subsets(v);
    return 0;
}