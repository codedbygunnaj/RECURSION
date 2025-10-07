#include <iostream>
#include <vector>
using namespace std;
// The function is now void. Its only job is to modify 'ctr'.
int countSubsets(vector<int>&nums, int id, int sum)
{
    if(sum==0) return 1;
    if(id>=nums.size()|| sum<0) return 0;
    int l=countSubsets(nums,id+1,sum-nums[id]); //pick
    int r=countSubsets(nums,id+1,sum); //not pick
    return l+r;
}
int findSubsetCount(std::vector<int>& nums, int k) {
    return countSubsets(nums, 0, k);
}

int main() {
    std::vector<int> v = {3, 1, 2, 4};
    std::cout << "Occurence is: " << findSubsetCount(v, 5) << std::endl;
    return 0;
}